#include<stdio.h>
#define P printf

main()
{
	int n,a,b,c;
	
	P("!! Welcome to Friday cinema !!\n");
	P("\n\n1. for Hollywood\n");
	P("2. for Bollywood\n");
	P("3. for Tollywood\n\n");
	
	P("Enter your choiice :");
	scanf("%d",&n);
	
	switch(n)
	{
		case 1:
			
			P("\n\n1. for Horror Movie\n");
			P("2. for Comedy Movie\n");
			P("3. for Thriller Movie\n\n");
			P("Enter your choice : ");
			scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					P("\n\n1. for The Nun || Prize => 400\n");
					P("2. for The Conjuring || Prize => 450\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					
					switch(n)
					{
						case 1:
							P("\n\n===================================");
							P("\nMovie\t\t: The Nun\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n===================================");
							P("\n!! THANK YOU FOR VISIT !!");
							P("\n!!--------------!!---------------!!\n\n");
						break;
						
						case 2:
							P("\n\n===================================");
							P("\nMovie\t\t: The Conjuring\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n===================================");
							P("\n!! THANK YOU FOR VISIT !!");
							P("\n!!--------------!!---------------!!\n\n");
						break;
						
						default:
							P("Invalid input");
					}
				break;
									
				case 2:
					P("\n\n1. for Ted || Prize => 300\n");
					P("2. for Good boys || Prize => 350\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					
					switch(n)
					{
						case 1:
							P("\n\n===================================");
							P("\nMovie\t\t: The Ted\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n===================================");
							P("\n!! THANK YOU FOR VISIT !!");
						    P("\n!!--------------!!---------------!!\n\n");
						break;
						
						case 2:
							P("\n\n===================================");
							P("\nMovie\t\t: Good Boys\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n===================================");
							P("\n!! THANK YOU FOR VISIT !!");
							P("\n!!--------------!!---------------!!\n\n");
						break;
						
						default:
							P("Invalid input");
				    }
				break;
				
				case 3:
					P("\n\n1. for The Prestige || Prize => 500\n");
					P("2. for The Parasite || Prize => 400\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					
					switch(n)
					{
						case 1:
							P("\n\n===================================");
							P("\nMovie\t\t: The Prestige\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n===================================");
							P("\n!! THANK YOU FOR VISIT !!");
							P("\n!!--------------!!---------------!!\n\n");
						break;
						
						case 2:
							P("\n\n===================================");
							P("\nMovie\t\t: The Parasite\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n===================================");
							P("\n!! THANK YOU FOR VISIT !!");
							P("\n!!--------------!!---------------!!\n\n");
						break;
						
						default:
							P("Invalid input");
					}
				break;
				
				default :
					P("\n\nInvalid choice");
			}
			
		break;
		
		case 2:
			
			P("\n\n1. for Horror Movie\n");
			P("2. for Comedy Movie\n");
			P("3. for Thriller Movie\n\n");
			P("Enter your choice : ");
			scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					P("\n\n1. for Pari || Prize => 400\n");
					P("2. for Bhoot || Prize => 450\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					
					switch(n)
					{
						case 1:
							P("\n\n===================================");
							P("\nMovie\t\t: Pari\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n===================================");
							P("\n!! THANK YOU FOR VISIT !!");
							P("\n!!--------------!!---------------!!\n\n");
						break;
						
						case 2:
							P("\n\n===================================");
							P("\nMovie\t\t: Bhoot\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n===================================");
							P("\n!! THANK YOU FOR VISIT !!");
							P("\n!!--------------!!---------------!!\n\n");
						break;
						
						default:
							P("Invalid input");
					}
				break;
									
				case 2:
					P("\n\n1. for Welcome || Prize => 300\n");
					P("2. for 3 Idiots || Prize => 350\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					
					switch(n)
					{
						case 1:
							P("\n\n===================================");
							P("\nMovie\t\t: Welcome\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n===================================");
							P("\n!! THANK YOU FOR VISIT !!");
							P("\n!!--------------!!---------------!!\n\n");
						break;
						
						case 2:
							P("\n\n===================================");
							P("\nMovie\t\t: 3 Idiots\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n===================================");
							P("\n!! THANK YOU FOR VISIT !!");
							P("\n!!--------------!!---------------!!\n\n");
						break;
						
						default:
							P("Invalid input");
				    }
				break;
				
				case 3:
					P("\n\n1. for IB71 || Prize => 500\n");
					P("2. for Ugly || Prize => 400\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					
					switch(n)
					{
						case 1:
							P("\n\n===================================");
							P("\nMovie\t\t: IB71\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n===================================");
							P("\n!! THANK YOU FOR VISIT !!");
							P("\n!!--------------!!---------------!!\n\n");
						break;
						
						case 2:
							P("\n\n===================================");
							P("\nMovie\t\t: Ugly\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n===================================");
							P("\n!! THANK YOU FOR VISIT !!");
							P("\n!!--------------!!---------------!!\n\n");
						break;
						
						default:
							P("Invalid input");
					}
				break;
				
				default :
					P("\n\nInvalid choice");
			}
			
		break;
		
		case 3:
			
			P("\n\n1. for Horror Movie\n");
			P("2. for Comedy Movie\n");
			P("3. for Thriller Movie\n\n");
			P("Enter your choice : ");
			scanf("%d",&n);
			
			switch(n)
			{
				case 1:
					P("\n\n1. for Cold Case || Prize => 400\n");
					P("2. for 13B || Prize => 450\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					
					switch(n)
					{
						case 1:
							P("\n\n===================================");
							P("\nMovie\t\t: Cold Case\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n===================================");
							P("\n!! THANK YOU FOR VISIT !!");
							P("\n!!--------------!!---------------!!\n\n");
						break;
						
						case 2:
							P("\n\n===================================");
							P("\nMovie\t\t: 13B\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n===================================");
							P("\n!! THANK YOU FOR VISIT !!");
							P("\n!!--------------!!---------------!!\n\n");
						break;
						
						default:
							P("Invalid input");
					}
				break;
									
				case 2:
					P("\n\n1. Bro || Prize => 300\n");
					P("2. for Ready || Prize => 350\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					
					switch(n)
					{
						case 1:
							P("\n\n===================================");
							P("\n\nMovie\t\t: Bro\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n===================================");
							P("\n!! THANK YOU FOR VISIT !!");
							P("\n!!--------------!!---------------!!\n\n");
						break;
						
						case 2:
							P("\n===================================");
							P("\n\nMovie\t\t: Ready\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n===================================");
							P("\n!! THANK YOU FOR VISIT !!");
							P("\n!!--------------!!---------------!!\n\n");
						break;
						
						default:
							P("Invalid input");
				    }
				break;
				
				case 3:
					P("\n\n1. for HIT || Prize => 500\n");
					P("2. for The Trap || Prize => 400\n\n");
					P("Enter your choice : ");
					scanf("%d",&n);
					
					
					switch(n)
					{
						case 1:
							P("\n===================================");
							P("\n\nMovie\t\t: HIT\n");
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n===================================");
							P("\n!! THANK YOU FOR VISIT !!");
							P("\n!!--------------!!---------------!!\n\n");
						break;
						
						case 2:
							P("\n\n===================================");
							P("\nMovie\t\t: The Trap\n");
						
							P("Snacks/Drinks\t: Pop-corns,Pepsi");
							P("\nTicket quantity\t: ");
							scanf("%d",&a);
							P("Prize\t\t: ");
							scanf("%d",&b);
							c = (a*b)*0.18;
							P("GST\t\t: %d",c);
							P("\nTotal\t\t: %d Rupees",a*b+c);
							P("\n\n===================================");
							P("\n!! THANK YOU FOR VISIT !!");
							P("\n!!--------------!!---------------!!\n\n");
						break;
						
						default:
							P("Invalid input");
					}
				break;
				
				default :
					P("\n\nInvalid choice");
			}
			
		break;
		
		default:
			P("\n\n!! Invalid Input,Please Try Again !!");
	}
	
}
