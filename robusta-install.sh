#!/bin/sh

command -v xpmtoppm >/dev/null 2>&1 || {
  echo >&2 "I require xpmtoppm but it's not installed.  Try 'brew install netpbm'."; exit 1;
}
command -v gcc >/dev/null 2>&1 || {
  echo >&2 "I require gcc but it's not installed.  Try 'brew install gcc'."; exit 1;
}
mkdir -p ~/.local/robusta
./configure --prefix=$HOME/.local/robusta
LC_ALL=C make
LC_ALL=C make install