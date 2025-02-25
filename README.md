# aesd-assignments
This repo contains public starter source code, scripts, and documentation for Advanced Embedded Software Development (ECEN-5713) and Advanced Embedded Linux Development assignments University of Colorado, Boulder.

## Setting Up env

```bash
# install dependencies
sudo apt-get install -y build-essential ruby cmake git openssh-server vim

# setup cross-compiler
sudo tar xJf arm-gnu-toolchain-13.3.rel1-x86_64-aarch64-none-linux-gnu.tar.xz -C /usr/local/arm/

# export env
echo "if [ -d /usr/local/arm/arm-gnu-toolchain-13.3.rel1-x86_64-aarch64-none-linux-gnu/bin ]; then \n PATH=\"$PATH:/usr/local/arm/arm-gnu-toolchain-13.3.rel1-x86_64-aarch64-none-linux-gnu/bin\" \n fi" >> ~/.bashrc
source ~/.bashrc

mkdir -p assignments/assignment
aarch64-none-linux-gnu-gcc -v -print-sysroot > assignments/assignment2/cross-compile.txt
```

## Testing

The basis of the automated test implementation for this repository comes from [https://github.com/cu-ecen-aeld/assignment-autotest/](https://github.com/cu-ecen-aeld/assignment-autotest/)

The assignment-autotest directory contains scripts useful for automated testing  Use
```
git submodule update --init --recursive
```
to synchronize after cloning and before starting each assignment, as discussed in the assignment instructions.

As a part of the assignment instructions, you will setup your assignment repo to perform automated testing using github actions.  See [this page](https://github.com/cu-ecen-aeld/aesd-assignments/wiki/Setting-up-Github-Actions) for details.

Note that the unit tests will fail on this repository, since assignments are not yet implemented.  That's your job :) 
