description : create a tree directory with permition is seted by programer

detail : page 12 in slide "File trong Linux.pdf"

how to run ?
1. "make all"
2. "./t <start_create_directory_at_this_place>"



ADDITION
chown [OPTION] [OWNER][:[GROUP]] FILE

_check:
	ls -l [name]
	stat [name]
	ls -lh [name] //size
_create:
	umask: set default when create new file.
	
_choose:

 	chmod [perrmission] [fileName]
		User (u)
		Group (g)
		Other (o)
		All (a)		
		ex sign: u+w,o-r;; a=rwx
	
	chmod [user_type][signs][permission] [file_name]	
		ex: chmod u+w,o-r helloworld.txt;; chmod 740 helloworld.txt
	
 SUID (Set user id): other user can excute file depend on [root] permission. 
 	[root] is a owner of this file (can other);
	chmod u+s [file name];;chmod 4555 [file name]
	
		"-" + SUID = "S" can not excute
		"x" + SUID = "s" can excute
		
 SGID (Set group id):
	chmod g+s [file name] ;; chmod 2555 [file name]
	
 Sticky bit: ONLY be accepted for DELETE file BY OWNER or ROOT
 
		
	
