# Proving grounds

Like the name says, this repository will be your proving ground. You will have to populate this repository by solving multiple tasks aimed to get you familiar and check your expertise in C++, Python, Bazel and Zuul.

This project is separated into four categories.

 1. Solve C++ and Python tasks
 2. Bazelize proving-grounds repository
 3. Create build-and-test job
 4. Parse job log file

## 1.  Solve C++ and Python tasks

There are two folders in this repository **cpp** and **python** which contain C++ and Python tasks, respectively. Each task is located within its own folder and contains a README with an explanation of the task.

Make sure you use **C++17 or later** and **Python 3.6 or later**

**Hint:** It would best if you start bazelization as soon as you finish your first task instead of finishing all tasks first and then bazelizing them.

## 2. Bazelize proving-grounds repository

Each task you solved in the first section is a single package which needs to be bazelized. In order for the repository to be considered as bazelized, the following must be true:
* Executing `bazel build //...` command in the proving-grounds main folder needs to build all packages successfully. 
* Executing `bazel test //...` command in the proving-grounds main folder needs to run test for each package in the repository. All tests need to execute and pass successfully. 

## 3. Create build-and-test job

Create a job called `build-and-test` which will build and test your proving-grounds repository using bazel. 
Add your newly created job to check and gate pipelines.

## 4. Parse job log file

Extend your `build-and-test` job to call a python script at the end of the job which will parse newly created log file.
