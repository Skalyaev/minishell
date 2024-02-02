# Minishell
> *As beautiful as a shell*

*The existence of shells is linked to the very existence of IT.*
*At the time, all developers agreed that communicating with a computer using aligned 1/0 switches was seriously irritating.*
*It was only logical that they came up with the idea of creating a software to communicate with a computer using interactive lines of commands in a language somewhat close to the human language.*
*Thanks to Minishell, you’ll be able to travel through time and come back to problems people faced when Windows didn’t exist.*

>This project is about creating a simple shell. Yes, your own little bash.
>You will learn a lot about processes and file descriptors.

## Checklists
- [x] Prompt
- [x] History
- [x] Environment
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

## Usage
```sh
git clone git@github.com:Skalyaeve/minishell.git
cd minishell
sudo apt-get install libreadline-dev
make
./minishell
```
