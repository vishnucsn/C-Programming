# Exit code check in windows
This will help to understand how to check the exit code (if there is any) of a recently executed program in windows


```
    //After generating the exe of this exit_Code_Check.c file, execute the corresponding .exe file.
    //Then execute the following command as a next line
    C:\PathToYourFile> exit_Code_Check.exe
    C:\PathToYourFile> echo %errorlevel%
    2 
    
    //Here the output shows as 2 since I have hardcoded the exit code as '2'
    
```