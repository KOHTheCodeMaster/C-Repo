cmake_minimum_required(VERSION 3.12)
project(C_Repo C)

set(CMAKE_C_STANDARD 99)


#   <|================================  Interview Prep  ================================|>

add_executable(NumPallindrome dev/koh/InterviewPrep/PlayingWithNumbers/numpallindrome.c)
add_executable(StrPallindrome dev/koh/InterviewPrep/BasicString/strpallindrome.c)
add_executable(StrAnagram dev/koh/InterviewPrep/BasicString/stranagram.c)

