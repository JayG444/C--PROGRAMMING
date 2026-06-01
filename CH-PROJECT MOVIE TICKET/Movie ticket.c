#include<stdio.h>
main()
{
	int a,b;
	printf("Press 1 for Hollywood.\n");
	printf("Press 2 for Bollywood.\n");
	printf("Press 3 for Tollywood.\n");
	printf("Press 3 for Kollywood.\n");
	printf("Enter your choice :");
	scanf("%d",&a);
	
	switch(a){
		case 1:
			printf("Press 1 for Drama.\n");
			printf("Press 2 for Comedy.\n");
			printf("Press 3 for Horror.\n");
			printf("Press 4 for Sci-fi.\n");
			printf("Press 5 for Action.\n");
			printf("Enter your choice :");
			scanf("%d",&b);
			switch(b){
				case 1:
					printf("Press 1 for'Once upon time in hollywood'.");
					printf("Press 1 for 'F1'.");
				break;
				case 2:
					printf("Press 1 for'Almighty Bruce'.");
					printf("Press 1 for''.");
			}
	break;
	default:
		printf("Invalid Number.");	
	}
}
