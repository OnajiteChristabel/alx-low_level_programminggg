#include <stdlib.h>
<<<<<<< HEAD

#include <string.h>

#include <stdio.h>

#include "lists.h"



/**
 *
 *  * main - check the code
 *
 *   *
 *
 *    * Return: Always 0.
 *
 *     */

int main(void)

{

	    listint_t *head;

	        int sum;



		    head = NULL;

		        add_nodeint_end(&head, 0);

			    add_nodeint_end(&head, 1);

			        add_nodeint_end(&head, 2);

				    add_nodeint_end(&head, 3);

				        add_nodeint_end(&head, 4);

					    add_nodeint_end(&head, 98);

					        add_nodeint_end(&head, 402);

						    add_nodeint_end(&head, 1024);

						        sum = sum_listint(head);

							    printf("sum = %d\n", sum);

							        free_listint2(&head);

								    return (0);

}
=======
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    listint_t *head;
    int sum;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    sum = sum_listint(head);
    printf("sum = %d\n", sum);
    free_listint2(&head);
    return (0);
}
>>>>>>> 0c5e210b372a7aa5b1cda4cd853b06e8052f2679
