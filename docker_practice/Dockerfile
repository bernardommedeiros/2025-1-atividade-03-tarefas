# Define a imagem base (Fedora)
FROM fedora:latest

# Atualiza os pacotes e instala utilitários básicos
RUN dnf -y update && \
    dnf -y install findutils && \
    dnf -y install fish && \
    dnf clean all

# Cria um diretório para a aplicação
RUN mkdir -p /app

RUN dnf -y install gcc && dnf clean all

RUN dnf -y install java-21-openjdk-devel && dnf clean all

# Define o diretório de trabalho padrão
WORKDIR /app

# Comando padrão ao iniciar o container
CMD ["fish"]