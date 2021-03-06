#include "mylist.h"

/*                                                                                                    
  Author: Jeff Mariconda                                                                              
  Class: CS392                                                                                        
                                                                                                      
  Test Main for Assignment 3.                                                                         
*/

int main()
{
    int ints[10] = {1,2,3,4,5,6,7,8,9,10};
    char chars[6] = {'a','b','c','d','e','f'};
    char *strings[3] = {"this","is","test"};
    t_node *head, *head2;
    int i;
    int *rem;
    char *str;
    char *str2;
 
    //---------------------------------------------------------------------
    my_str("TESTING ADD_NODE, NEW_NODE, AND TRAVERSE_INT:\n\n");
	
    head = NULL;
    for (i = 0; i < 10; i++)
        add_node(new_node(&ints[i]), &head);
    traverse_int(head);
    my_str("\nSHOULD BE: 10 9 8 7 6 5 4 3 2 1\n\n");
    
    add_node(NULL, &head);
    traverse_int(head);
    my_str("\nSHOULD BE: 10 9 8 7 6 5 4 3 2 1\n\n");
    
    //---------------------------------------------------------------------
    my_str("TESTING ADD_NODE_AT:\n\n");
    
    add_node_at(new_node(&ints[6]), &head, 8);
    traverse_int(head);
    my_str("\nSHOULD BE: 10 9 8 7 6 5 4 3 7 2 1\n\n");
    
    add_node_at(new_node(&ints[0]), &head, 0);
    traverse_int(head);
    my_str("\nSHOULD BE: 1 10 9 8 7 6 5 4 3 7 2 1\n\n");
    
    add_node_at(new_node(&ints[3]), &head, 200);
    traverse_int(head);
    my_str("\nSHOULD BE: 1 10 9 8 7 6 5 4 3 7 2 1 4\n\n");
    
    add_node_at(NULL, &head, 5);
    traverse_int(head);
    my_str("\nSHOULD BE: 1 10 9 8 7 6 5 4 3 7 2 1 4\n\n");
    
    //---------------------------------------------------------------------
    my_str("TESTING APPEND:\n\n");
    
    append(new_node(&ints[2]), &head);
    traverse_int(head);
    my_str("\nSHOULD BE: 1 10 9 8 7 6 5 4 3 7 2 1 4 3\n\n");
    
    append(NULL, &head);
    traverse_int(head);
    my_str("\nSHOULD BE: 1 10 9 8 7 6 5 4 3 7 2 1 4 3\n\n");
    
    //---------------------------------------------------------------------
    my_str("TESTING REMOVE_NODE:\n\n");
    
    rem = (int*)remove_node(&head);
    traverse_int(head); 
    my_str("\nSHOULD BE: 10 9 8 7 6 5 4 3 7 2 1 4 3\n");
    my_str("Removed node: ");
    my_int(*rem);
    my_str(" = 1\n\n");
    
    //---------------------------------------------------------------------
    my_str("TESTING REMOVE_NODE_AT:\n\n");
    
    rem = (int*)remove_node_at(&head, 6);
    traverse_int(head);
    my_str("\nSHOULD BE: 10 9 8 7 6 5 3 7 2 1 4 3\n");
    my_str("Removed node: ");
    my_int(*rem);
    my_str(" = 4\n\n");
    
    rem = (int*)remove_node_at(&head, 0);
    traverse_int(head);
    my_str("\nSHOULD BE: 9 8 7 6 5 3 7 2 1 4 3\n");
    my_str("Removed node: ");
    my_int(*rem);
    my_str(" = 10\n\n");
    
    rem = (int*)remove_node_at(&head, 200);
    traverse_int(head);
    my_str("\nSHOULD BE: 9 8 7 6 5 3 7 2 1 4\n");
    my_str("Removed node: ");
    my_int(*rem);
    my_str(" = 3\n\n");
  
    //---------------------------------------------------------------------
    my_str("TESTING REMOVE_LAST:\n\n");
    
    rem = (int*)remove_last(&head);
    traverse_int(head);
    my_str("\nSHOULD BE: 9 8 7 6 5 3 7 2 1\n");
    my_str("Removed node: ");
    my_int(*rem);
    my_str(" = 4\n\n");
   
    //---------------------------------------------------------------------
    my_str("TESTING COUNT_NODES:\n\n");
    
    my_str("There are: ");
    my_int(count_nodes(head));
    my_str(" nodes = 9\n\n");
  
    //---------------------------------------------------------------------
    my_str("TESTING NODE_AT:\n\n");
    
    head2 = NULL;
    add_node(node_at(head, 0), &head2);
    traverse_int(head2);
    my_str("\nSHOULD BE: 9 8 7 6 5 3 7 2 1\n\n");
    
    //---------------------------------------------------------------------
    my_str("TESTING ELEM_AT:\n\n");
    
    my_str("Element at index 1 is: ");
    my_int(*((int*)elem_at(head, 1)));
    my_str(" = 8\n\n");
     
    //---------------------------------------------------------------------
    my_str("TESTING ADD_ELEM:\n\n");

    add_elem(&ints[2], &head);
    traverse_int(head);
    my_str("\nSHOULD BE: 3 9 8 7 6 5 3 7 2 1\n\n");

    add_elem(NULL, &head);
    traverse_int(head);
    my_str("\nSHOULD BE: 3 9 8 7 6 5 3 7 2 1\n\n");
 
    //---------------------------------------------------------------------
    my_str("TESTING EMPTY_LIST:\n\n");
    
    empty_list(&head);
    my_str("There are: ");
    my_int(count_nodes(head));
    my_str(" nodes = 0\n\n");
   
    //---------------------------------------------------------------------
    my_str("TESTING TRAVERSE_CHAR:\n\n");
    
    for(i = 0 ; i < 6 ; i++)
      add_node(new_node(&chars[i]), &head);
    traverse_char(head);
    my_str("\nSHOULD BE: f e d c b a\n\n");
    empty_list(&head);
    
    //---------------------------------------------------------------------
    my_str("TESTING TRAVERSE_STRING:\n\n");
    
    for(i = 0 ; i < 3 ; i++)
      add_node(new_node(strings[i]), &head);
    traverse_string(head);
    my_str("\nSHOULD BE: test is this\n\n");
 
    //---------------------------------------------------------------------
    my_str("TESTING BUFFER EDITING STUFF:\n\n");
    
    str = xmalloc(256);
    i = read(0, str, 256);
    
    my_str("Adding string HELLO to \"");
    my_str(str);
    my_str("\" at 2.\n\n");
    insert_str_at(&str, "HELLO", 2);
    my_str(str);    
 
    my_str("\nAdding string END at 100.\n\n");
    insert_str_at(&str, "END", 100);
    my_str(str);

    my_str("\nRemoving substring from 2 to 6\n\n");
    remove_substring(&str, 2, 6);
    my_str(str);

    my_str("\nRemoving substring from 6 to 100.\n\n");
    remove_substring(&str, 6, 100);
    my_str(str);

    my_str("\n\nGetting substring from index 1-6.\n\n");
    str2 = get_substring(str, 1, 6);
    my_str(str2);

    free(str2);

    my_str("\nGetting substring from index 2-100.\n\n");
    str2 = get_substring(str, 2, 100);
    my_str(str2);

    free(str2);
    
    my_str("\nAdding string ADDITION to 1.\n\n");
    insert_str_at(&str, "ADDITION", 1);
    my_str(str);
    my_str("\n");

    free(str);
    
    return 0;
}
