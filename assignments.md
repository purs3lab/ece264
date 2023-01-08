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

## DIFFICULTY OF HOMEWORK
The first several homework assignments are intentionally easier than the others.
The purpose is to give you time to set up your programming environment, familiarize yourself with the tools, and review the topics from CS 159 (if necessary).
Later assignments are considerably more difficult.
It is important that you do well at the beginning of the semester.
If you do poorly at the beginning, it would be almost impossible to gain enough points later and get a good grade.

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

## How to Write High-Quality Software
If you ask the students that have taken ECE 264, many will tell you that ECE 264 "transformed" them from casual programmers to serious software developers. 
To put it another way, in ECE 264, you learn how to develop serious software that may be used by others.

Do you notice the selection of words? Programmer and Software Developer? Are they different? Yes, they are different.

Developing software is much more than writing code (i.e., programming). As a rough analogy, developing software is like building a house and writing code is like laying bricks. Building a house is much more than laying bricks. Before laying down bricks, you need to design the house. How many floors? Is there a basement? How many rooms? Is there a garage? How would electrical wires, air flow, and water pipes be connected?

Imagine laying bricks for a house before you have a design. It would be a total disaster. Many students, however, want to start writing code before they have designed the software. The results would be predictable failures.

Many students mistakenly believe that they should spend most time debugging. They want to write code quickly and then debug. This is completely wrong. This is like building a house first, demolish some parts, rebuild, demolish some other parts, and rebuild. Imagine that a house has been built and the owner discovers that there is no electric sockets for the kitchen. How much effort (and money) would be needed to correct this mistake? This is crazy and, frankly, stupid. You should spend most time designing, not debugging.

Design before writing code. This is the rule. You will not be the first person to break this rule. Do not try.

Many students think developing software is about creativity and they cannot be restricted by rules. This is also wrong. Every creative person must fully understand their tools and the boundaries of these tools. A musician must know many melodies. A painter must know how colors interact. A gymnast needs to follow the law of gravity. An interior designer must understand sunlight and seasons. A software developer needs to understand the process of creating software.

Remember: spend time on design, not on debugging.

Another common mistake is to start coding without reading and understanding the entire assignment's requirements. Can it be possible to solve a problem without understanding the problem? During office hours, about 40% people ask questions before they read the assignments carefully. These students waste their own time (and the time of the teaching assistants).

Every software developer needs to know debugging process. The best strategy, however, is to prevent bugs through careful design. Then, it is important to detect bugs automatically by writing testing code.

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

## Grading is based on Submissions, Only
**In absolutely no circumstance can the teaching staff modify your program for grading.**

You cannot say, "If you change this, my program works."
If your program misses a semicolon and cannot compile, you will receive zero. Your score depends on what is submitted, nothing else.

Yes, we have to tell you again because a few people do not listen.

The teaching staff is strictly prohibited checking what is stored in your computer (or your ECN account) for grading.
Your score depends on what is submitted. NEVER say "I finished before the deadline but I forgot to submit".
NEVER say "I have not made any change after the submission deadline." because the teaching staff is not allowed to look at your files that have not been submitted through GitHub Classroom.
If a file is not submitted and pushed, it cannot be graded. There is no exception in any case.

It is possible (and likely) that additional test cases will be used for grading. If your program fails any of the additional tests, you will lose points.
It is your responsibility to create additional test cases.

## DO NOT SEND YOUR CODE TO TEACHING STAFF

Under absolutely no circumstance (unless explicitly asked to do so) will the teaching staff (instructors and teaching assistants) debug your programs without your presence.
Such **email is ALWAYS ignored**. If you need help, go to office or lab hours.
