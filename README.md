# SDLC Activity Based Learning
![Banner](https://github.com/Ayush1146/Mini_Project/blob/5ed0bd590429bc96242a058be7926caef50059c6/7_Other/resistor.png)

Build | Code Quality | Unity | [Git Inspector](using github.io option)
------|----------|-------|--------------
[![C/C++ CI](https://github.com/Ayush1146/Mini_Project/actions/workflows/c-build.yml/badge.svg)](https://github.com/Ayush1146/Mini_Project/actions/workflows/c-build.yml) | [![cppcheck-action](https://github.com/Ayush1146/Mini_Project/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/Ayush1146/Mini_Project/actions/workflows/cppcheck.yml) [![Valgrind](https://github.com/Ayush1146/Mini_Project/actions/workflows/Valgrind.yml/badge.svg)](https://github.com/Ayush1146/Mini_Project/actions/workflows/Valgrind.yml) | [![Unit testing](https://github.com/Ayush1146/Mini_Project/actions/workflows/unit-test.yml/badge.svg)](https://github.com/Ayush1146/Mini_Project/actions/workflows/unit-test.yml) |  [![Contribution Check - Git Inspector](https://github.com/Ayush1146/Mini_Project/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/Ayush1146/Mini_Project/actions/workflows/gitinspector.yml)


## Folder Structure
Folder             | Description
-------------------| -----------------------------------------
`1_Requirements`   | Documents detailing requirements and research
`2_Architecture`         | Documents specifying design details
`3_Implementation` | All code and documentation
`4_Test_plan`      | Documents with test plans and procedures
`5_Report`      | Document of project report
`6_ImagesAndVideos`      | Images and Videos of running application
`7_Other`      | Documents
## Contributors List and Summary

SF Id. |  Name   |    Features    | Issuess Raised |Issues Resolved|No Test Cases|Test Case Pass
-------|---------|----------------|----------------|---------------|-------------|--------------
`258344` | Ayush Sharma  | Works for both 4 and 5 Band resistors , Calculates Resistance , Calculates Tolerance | 4    | 4   |3 |3     
   

## Challenges Faced and How Was It Overcome
| No. | Challenge | Solution
|-----|-----------|--------
|1. | Memory leak while inputs to structure  | Implemented Dynamic Memory allocation but forgot to add free(sptr) function
|2. | scanf() without field width limits can crash with huge input data.| Implemented calloc and used %1s format specifier |




## Learning Resources
1. [markdownCheatsheet](https://github.com/adam-p/markdown-here/wiki/Markdown-Cheatsheet)
2. [markdownBasics](https://guides.github.com/features/mastering-markdown/)
3. [Diagrams](https://app.diagrams.net/)





