---
layout: assignments
title: Programming Assignments
permalink: /labs/
---
There will be approximately one programming
assignment per week. Some of these assignments will be simple and test one or two
basic concepts, while other assignments will be more complicated and may require
writing a substantial amount of code. The amount of time allocated for each assignment
and the weight that assignment will carry in your final grade will account for these
differences.

**All programming assignments should be done individually.**

## More Assignments and More Choices

You will have approximately 18 assignments. However, we will only take the top 12 scores to compute the final grade.
For instance, if you have submitted 13 assignments. We will sort the scores of all these in descending order and pick the top 12 scores for the final grade.

This should provide you enough lee way to accommodate unexpected circumstances where you might have to miss a homework, submit it late, etc.

### Additional Learning Constraints
Although, you have some choice in assignments. There are the following additional constraints:

__A student must obtain at least one non zero score in HW 13 - 18 for passing this class.__

This is part of the course requirement.

* If a student submits four assignments of HW 13 or later, the student will receive A or lower.
* If a student submits three assignments of HW 13 or later, the student will receive A- or lower.
* If a student submits two assignments of HW 13 or later, the student will receive B+ or lower.
* If a student submits one assignment of HW 13 or later, the student will receive B or lower.
* If a student submits no assignment of HW 13 or later, the student will receive F.

## ECE264 Uses Linux  
This course uses Linux.
Engineering Computer Networks (ECN, https://engineering.purdue.edu/ECN) is the IT (Information Technology) for Purdue's College of Engineering. 
ECN manages many Linux computers. Your submitted assignments will be graded on ECN Linux. 
You are strongly encouraged to write and test your programs on ECN Linux computers.
The only way to grade your submissions is to use ECN Linux. For privacy and security, the teaching staff cannot touch your computer.
The teaching staff cannot grade your programs on your computer.
Thus, please do not say, "My program runs on my computer." This statement is irrelevant.


The first homework (HW01) will explain how to use Linux computers. 
If you have no ECN account, please contact ECN. Please **do not ask the instructor**. 
The instructor is not authorized to create ECN account.
If you ask the instructor, the response is "Please ask ECN".

You must not use Windows, MacOS, Android, or any other operating systems.
Even though your C programs should work if you follow the C language standards, developing your C programs outside Linux may create unnecessary trouble.

## Getting access to the assignments

Programming assignments will be submitted via [GitHub Classroom](https://classroom.github.com).
As such, **you are required to have a GitHub account**.
This can be obtained for free at [GitHub](https://github.com).

**Important: Please submit your GitHub username along with other details in this [Classroom form](https://forms.gle/afjQoHubsh67GKA1A) by Friday, January 13th.**

We will add you to the Github classroom and from which you can access your homeworks.

## Structures of Assignments

At the top of every file, there is clear indication whether you should modify the file or not.  You must follow the instruction.
If you modify a file must not be changed, you will likely lose points.

Everything you write must be enclosed within

`#ifdef`

and

`#endif`

The reason is that we may replace the functions to give you partial credits by turning on or off specific blocks.  
If you write anything outside `#ifdef` and `#endif` and your code happens to have mistakes, the mistakes cannot be removed.
As a result, your program cannot receive partial credits.

# IMPORTANT THINGS TO NOTE

## Your Programs Must Not Crash and Must Not Leak Memory

Your program must not crash and must not leak memory in any case.
Memory management is an essential part of writing good C programs.  If
you cannot manage memory, you cannot write good C programs.

You will lose 1 point for every leaked byte. If your program leaks
memory, it is very likely that you will receive zero.

You should know how to check memory errors: using `valgrind` . If your
program leaks memory, it is like an airplane that leaks fuel.  Would
you take a flight if the plane leaks fuel? An airplane should not fly
if it leaks fuel. Your program *DOES NOT* work if it leaks
memory. Don't fool yourself and claim that your program works.  Talk
to professional software developers. Everyone will tell you memory
leak is *unacceptable*.

## Keep An Open Mind: It is possible that your programs are wrong

Do not say, "My program works fine when I test it. I am 100% sure my
program is correct.  My program is absolutely perfect."  Many people
have said that and so far all of their programs have problems.  The
teaching staff accepts the possibility that they may be wrong. Please
also open your mind and accept the *possibility* that your program
*may* be wrong.  Before you get angry and think you are not treated
fairly, understand what happens.  The teaching staff provides all
information you need to test your programs.

## Computers are Stupid, By Design

Computers are designed during the second World War and Cold War to
control weapons. As a result, computers are stupid by design.
Computers do exactly what programs tell them to do.  Computers cannot
guess your mind. Computers cannot tolerate "small" mistakes.

## Academic Integrity and Cheating

Students are encouraged to talk to the TAs or the instructor on programming assignments.

You may discuss questions related to the assignments on Piazza.
However, no discussion of or sharing of specific code or written answers is allowed,
and each team of students must write their own solution to the problem.
Any sources used outside of the class
textbook/handouts/lectures/template code must be explicitly approved by a TA.

Note this policy requires you to protect your files against electronic copying using UNIX file protection, to not
place your work on any publicly accessible site, and to exercise care in the disposal of any printouts of your work.

**Automatic tools will be used to compare your programming solutions to those of every other current or past student.**

**The first case of cheating on an assignment will result in a zero for the particular assignment and reporting the
student to the university administration for disciplinary action.
The second case of cheating will result in an immediate F grade for the course.**

## Grading Programming Assignments

Programming assignments are graded by computer programs. Thus, your programs must follow the instructions precisely.
You must understand that computers are not tolerant. Any "small" (small for you) mistake can lead to significant loss of points.

More is not better. If the assignment does not ask you to print anything, your programs must not print anything.
Printing debugging messages will likely cause significant loss of points.

Some students say, "My programs print everything needed, and more. Isn't more better?" The answer is No. More is not better.
Your programs **must follow the specifications precisely**.

Why is this course so strict in meeting specifications?
Because that is the expectations of professional software developers.
Computer software is used in many systems that might cause injuries or loss of lives (such as flight control or autonomous vehicles).
It is critical to follow the specifications precisely. If you want to pursue engineering as your career, you must understand the needs of following specifications.

