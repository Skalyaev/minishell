# <p align="center">minishell</p>
> *Ce projet consiste à créer un shell simple. Vous apprendrez beaucoup sur les processus et les descripteurs de fichiers.*

## Preview
![](https://github.com/Skalyaeve/images-1/blob/main/screenshot/minishell.gif)

## Checklist
- [x] Parsing
- [x] Environnement
- [x] Exécution
- [x] Statut de sortie
- [x] Pipes/Redirections
- [x] Guillemets simples/doubles
- [x] Historique
- [x] SIGINT, SIGQUIT
- [x] Builtins:
    * **`echo`** with option **`-n`**
    * **`cd`** avec uniquement un chemin relatif ou absolu
    * **`pwd`** sans options
    * **`export`** sans options
    * **`unset`** sans options
    * **`env`** sans options ni arguments
    * **`exit`** sans options
- [x] No leaks
- [x] No crashes

## Install
```bash
sudo apt update -y
sudo apt install -y gcc
sudo apt install -y make
sudo apt install -y libreadline-dev
```
```bash
mkdir -p $HOME/.local/bin
mkdir -p $HOME/.local/src
mkdir -p $HOME/.local/include
```
```bash
name=minishell

git clone https://github.com/Skalyaeve/$name.git
cd $name && make && make clean

ln -s $PWD/$name $HOME/.local/bin/$name
ln -s $PWD/src $HOME/.local/src/$name
ln -s $PWD/include $HOME/.local/include/$name
```

## Usage
```bash
export PATH=$HOME/.local/bin:$PATH
minishell
```

## Uninstall
```bash
name=minishell

rm -rf $name
rm $HOME/.local/bin/$name
rm $HOME/.local/src/$name
rm $HOME/.local/include/$name
```
