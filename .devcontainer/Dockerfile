FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

ENV HOME=/work
ENV PYENV_ROOT=$HOME/.pyenv
ENV PATH=$PYENV_ROOT/bin:$PATH
ENV PYTHON_VERSION="3.10.11"

RUN apt-get update && \
    apt-get install -y \
    gcc \
    make \
    cmake \
    clang \
    build-essential \
    gdb \
    libssl-dev \
    libgl1-mesa-dev \
    libglib2.0-0 \
    libreadline-dev \
    libsqlite3-dev \
    libncurses5-dev \
    libncursesw5-dev \
    xz-utils \
    tk-dev \
    libxml2-dev \
    libxmlsec1-dev \
    libffi-dev \
    liblzma-dev \
    libbz2-dev \
    zlib1g-dev \
    tzdata \
    python3 \
    python3-venv \
    sudo \
    wget \
    curl \
    git \
    vim \
    fonts-ipaexfont

# Configuration of pyenv
RUN git clone https://github.com/pyenv/pyenv.git ~/.pyenv && \
    echo 'export PYENV_ROOT="$HOME/.pyenv"' >> ~/.bashrc && \
    echo 'command -v pyenv >/dev/null || export PATH="$PYENV_ROOT/bin:$PATH"' >> ~/.bashrc && \
    echo 'eval "$(pyenv init -)"' >> ~/.bashrc
RUN eval "$(pyenv init --path)"
RUN pyenv install $PYTHON_VERSION && \
    pyenv global $PYTHON_VERSION
# Configuration of poetry
ENV POETRY_HOME=/opt/poetry
RUN curl -sSL https://install.python-poetry.org | python3 - && \
    cd /usr/local/bin && \
    ln -s /opt/poetry/bin/poetry
RUN poetry config virtualenvs.in-project true
# The working directory is aligned with the default one in vscode.

# Default powerline10k theme, no plugins installed
RUN sh -c "$(wget -O- https://github.com/deluan/zsh-in-docker/releases/download/v1.1.5/zsh-in-docker.sh)"
RUN chsh -s /bin/zsh

WORKDIR /workspace
CMD ["/bin/zsh"]
