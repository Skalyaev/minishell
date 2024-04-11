# Minishell
> *Ce projet consiste à créer un shell simple. Vous apprendrez beaucoup sur les processus et les descripteurs de fichiers.*

## Preview
![](https://github.com/Skalyaeve/images-1/blob/main/screenshot/minishell.gif)

## Checklist
- [x] Prompt
- [x] History
- [x] Environment
- [x] Execution
- [x] Single/Double quote
- [x] Pipe
- [x] Redirection
- [x] Exit status
- [x] SIGINT, SIGQUIT, EOF
- [x] Builtins:
    * [x] echo with option -n
    * [x] cd with only a relative or absolute path
    * [x] pwd with no options
    * [x] export with no options
    * [x] unset with no options
    * [x] env with no options or arguments
    * [x] exit with no options
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
link=Skalyaeve/minishell
name=minishell

git clone https://github.com/$link.git $name
cd .. && make && make clean

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

rm -r $name
rm $HOME/.local/bin/$name
rm $HOME/.local/src/$name
rm $HOME/.local/include/$name
```
