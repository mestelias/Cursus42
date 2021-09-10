#!/bin/bash
cd ~

mkdir -p ~/.vim/plugin

rm -rf 42header

git clone https://github.com/42Paris/42header.git 42header

cp 42header/vim/stdheader.vim .vim/plugin

echo "ID ?"
read id
echo USER=$id >> .zshrc
echo export USER >> .zshrc
echo MAIL=$id@student.42.fr >> .zshrc
echo export MAIL >> .zshrc

source .zshrc
