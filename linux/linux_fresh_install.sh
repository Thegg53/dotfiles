#!/bin/bash
sudo su
sudo apt-get update
sudo apt install -y terminator
sudo apt install -y htop
sudo apt install -y fonts-powerline
sudo apt install -y git
sudo apt-get -y install python3-pip
sudo apt-get -y install notepadqq
sudo apt-get -y install pinta
sudo apt-get -y install kolourpaint

pip install powerline-shell

## VS Code # https://code.visualstudio.com/docs/setup/linux
sudo apt-get install wget gpg
wget -qO- https://packages.microsoft.com/keys/microsoft.asc | gpg --dearmor > packages.microsoft.gpg
sudo install -D -o root -g root -m 644 packages.microsoft.gpg /etc/apt/keyrings/packages.microsoft.gpg
sudo sh -c 'echo "deb [arch=amd64,arm64,armhf signed-by=/etc/apt/keyrings/packages.microsoft.gpg] https://packages.microsoft.com/repos/code stable main" > /etc/apt/sources.list.d/vscode.list'
rm -f packages.microsoft.gpg

sudo apt install apt-transport-https
sudo apt update
sudo apt install code

## Docker  # https://docs.docker.com/engine/install/ubuntu/
apt-get install \
    ca-certificates \
    curl \
    gnupg \
    lsb-release
sudo mkdir -p /etc/apt/keyrings
curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo gpg --dearmor -o /etc/apt/keyrings/docker.gpg
echo \
  "deb [arch=$(dpkg --print-architecture) signed-by=/etc/apt/keyrings/docker.gpg] https://download.docker.com/linux/ubuntu \
  $(lsb_release -cs) stable" | sudo tee /etc/apt/sources.list.d/docker.list > /dev/null
  
 ## docker post install https://docs.docker.com/engine/install/linux-postinstall/
 groupadd docker
 usermod -aG docker $USER
 docker run hello-world
 
 ## compose V2
 apt-get install docker-compose-plugin
 docker compose version
 
 ##Chrome
 ##Dbeaver
 
  
