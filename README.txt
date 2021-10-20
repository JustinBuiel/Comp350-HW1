I was able to complete all of the steps, 
here is some troubleshooting I had to do:

-in step 3 I didn't have a return line at first and
it wasn't caught as an error, took a few moments for me to realize
after figuring out it was just outputting n+1 (which was weird)

-after a little bit of google I figured out I needed to
include stdlib.h for step 4 (for atoi()) which had me stuck for a hot second

-for step 5 I had a little trouble figuring out how to use
export, but I ended up trying to assign the variable ENV_X=3
on the command line, which I didn't know you could do and got it working

-for step 6 (because of the mention of ASCII) I wanted to see if I could
try type casting and came up with creating a list of the first n letters 
of the alphabet, after a little while, I ended up doing it implicitly via printf

-I then saw that this was apparently supposed to be all one C file, but I 
had already made separate programs for everything. I then modified run.sh to
compile and run everything (including the environmental variables for step 5)
  
