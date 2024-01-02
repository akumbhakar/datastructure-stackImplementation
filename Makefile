

DoublyList_project: DoublyList.c DoubleListImp.C
	echo "Creating executable file"
	gcc -o DoublyList_project DoublyList.c DoubleListImp.c

SinglyList_project: SinglyList.c SinglyListImp.c
	echo "Creating SinglyList_project executable file"
	gcc -o SinglyList_project SinglyList.c SinglyListImp.c

stack_project: stack.c stackImp.C
	echo "Creating stack_project executable file"
	gcc -o stack_project stack.c stackImp.c

clean:
	echo "Removing all executable but source file"
	rm DoublyList_project.exe SinglyList_project.exe
