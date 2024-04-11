# <p align="center">minishell</p>
> *Ce projet consiste à créer un shell simple. Vous apprendrez beaucoup sur les processus et les descripteurs de fichiers.*

## Aperçu
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

## Installer
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
link=Skalyaeve/minishell
name=minishell

git clone https://github.com/$link.git $name
cd .. && make && make clean

ln -s $PWD/$name $HOME/.local/bin/$name
ln -s $PWD/src $HOME/.local/src/$name
ln -s $PWD/include $HOME/.local/include/$name
```

## Utiliser
```bash
export PATH=$HOME/.local/bin:$PATH
minishell
```

## Désinstaller
```bash
name=minishell

rm -r $name
rm $HOME/.local/bin/$name
rm $HOME/.local/src/$name
rm $HOME/.local/include/$name
```
