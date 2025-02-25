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

## [Testing](https://github.com/cu-ecen-aeld/assignment-autotest/)

```bash
git clone git@github.com:cu-ecen-aeld/assignment-2-JeanG00.git
git remote add assignments-base git@github.com:cu-ecen-aeld/aesd-assignments.git
git fetch assignments-base
git merge assignments-base/<branchname>
git submodule update --init --recursive
# ... DO HOMEWORKS
git commit -am "feat: assignments done"
git push -u origin main
```

## Assignments Grading Criteria

### [assignment-1-instructions](https://www.coursera.org/learn/linux-system-programming-introduction-to-buildroot/supplement/bnixD/assignment-1-instructions)

### [assignment-2-instructions](https://www.coursera.org/learn/linux-system-programming-introduction-to-buildroot/supplement/U1Beh/assignment-2-instructions)

1. Your `assignments/assignment2/cross-compile.txt` file should show the version, configuration and sysroot path (output of `-print-sysroot`)

2. The `finder-test.sh` script should return “success” when run.

3. Your writer application should meet requirements from assignment 1 regarding error handling. 

4. Ensure all error handling has been implemented for writer.c.

    Ensure syslog logging is setup and working properly (you should see messages logged to `/var/log/syslog` on your Ubuntu VM).

    If using Windows Subsystem for Linux, you may need to manually start rsyslog with `sudo service rsyslog start`

5. Your `assignments/assignment2/fileresult.txt` should show that you were able to cross compile successfully

6. Your github actions automated test script should pass on your repository and the “Actions” tab should show a successful run on your last commit.