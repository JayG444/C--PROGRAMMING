#include<stdio.h>
main()
{
	int Cinema,Movie;
	int TypeofMovie,SeatPrice,;
	int Theatre,Seats;
	int Shift;
	printf("Press 1 for Hollywood.\n");
	printf("Press 2 for Bollywood.\n");
	printf("Press 3 for Tollywood.\n");
	printf("Press 4 for Kollywood.\n");
	printf("Enter your choice :");
	scanf("%d",&Cinema);
	
	switch(Cinema){
		case 1://Hollywood
			printf("\nPress 1 for Drama.\n");
			printf("Press 2 for Action.\n");
			printf("Press 3 for Horror.\n");
			printf("Enter your choice :");
			scanf("%d",&TypeofMovie);
			
			switch(TypeofMovie){
				case 1 ://drama
					printf("\nPress 1 for 'F1'.\n");
					printf("Press 2 for 'Step Brothers'.\n");
					printf("Enter your choice :");
					scanf("%d",&Movie);
					
					switch(Movie){
						case 1://F1
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							
							switch(Theatre){//Seats
								case 1://vr mall seats
								printf("\nPress 1 for 1 seat.\n");
								printf("Press 2 for 2 seats.\n");
								printf("Press 3 for 3 seats.\n");
								printf("Enter your choice :");
								scanf("%d",&Seats);
								
								switch(Seats){//Shift
									case 1://1 seat
									printf("\nPress 1 for Morning.\n");
									printf("Press 2 for Afternoon.\n");
									printf("Press 3 for Night.\n");
									printf("Enter your choice :");
									scanf("%d",&Seats);
									break;//1seat
									
									case 2://2 seats
									printf("\nPress 1 for Morning.\n");
									printf("Press 2 for Afternoon.\n");
									printf("Press 3 for Night.\n");
									printf("Enter your choice :");
									scanf("%d",&Seats);
									break;//2seats
									
									case 3://3 seats
									printf("\nPress 1 for Morning.\n");
									printf("Press 2 for Afternoon.\n");
									printf("Press 3 for Night.\n");
									printf("Enter your choice :");
									scanf("%d",&Seats);
									break;//3seats
									
									default:
										printf("Invalid Number.");
								}//shift
								break;//vr mall seats
								
								case 2://valentine seats
								printf("\nPress 1 for 1 seat.\n");
								printf("Press 2 for 2 seats.\n");
								printf("Press 3 for 3 seats.\n");
								printf("Enter your choice :");
								scanf("%d",&Seats);
								break;//valentine seats
								
								default:
									printf("Invalid Number.");
							}//seats
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}
					break;//f1
						
						case 2:// Step brothers
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}
						
					break;//stepbrothers
					
					default:
						printf("Invalid Number");
					}//seat price
					
				break;//drama
				
				case 2 ://action
					printf("\nPress 1 for 'Faster'.\n");
					printf("Press 2 for 'Shelter'.\n");
					printf("Enter your choice :");
					scanf("%d",&Movie);
					switch(Movie){
						case 1://Faster
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						
						
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}
					break;//faster
						
						case 2:// Shelter
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						
						
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}
					break;//theatre
					
					default:
						printf("Invalid Number");
					}//shelter
				break;//action
				
				case 3 ://horror
					printf("\nPress 1 for 'The Mummy'.\n");
					printf("Press 2 for 'Exorcist'.\n");
					printf("Enter your choice :");
					scanf("%d",&Movie);
					switch(Movie){//theatre
						case 1://The mummy
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						switch(SeatPrice){
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}//theatre
						break;//the mummy
						
						case 2:// Exorcist
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						switch(SeatPrice){
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}//theatre
						break;//exorcist
					
					default:
						printf("Invalid Number");
					}//seat price
				break;//horror
				
				default:
				printf("Invalid Number.");	
			}//type of movie hollywood
			
		break;
		case 2://bollywood
			printf("\nPress 1 for Drama.\n");
			printf("Press 2 for Action.\n");
			printf("Press 3 for Horror.\n");
			printf("Enter your choice :");
			scanf("%d",&TypeofMovie);
			
			switch(TypeofMovie){
				case 1 ://drama
					printf("\nPress 1 for 'Dilwale'.\n");
					printf("Press 2 for 'Hungama'.\n");
					printf("Enter your choice :");
					scanf("%d",&Movie);
					switch(Movie){
						case 1://Dilwale
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}//theatre
						break;//dilwale
						
						case 2:// Hungama
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}//theatre
						break;//hungama
					
					default:
						printf("Invalid Number");
					}//seat price
				break;//drama
				
				case 2 ://action
					printf("\nPress 1 for 'Dhurandhar'.\n");
					printf("Press 2 for 'Tehran'.\n");
					printf("Enter your choice :");
					scanf("%d",&Movie);
					
					switch(Movie){//seat price
						case 1://dhurandhar
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						
						break;//dhurandhar
						
						case 2:// tehran
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}//theatre
						break;//tehran
					
					default:
						printf("Invalid Number");
					}//seat price
				break;//action
				
				case 3 ://horror
					printf("\nPress 1 for 'Chhorii'.\n");
					printf("Press 2 for 'Stree'.\n");
					printf("Enter your choice :");
					scanf("%d",&Movie);
					switch(Movie){//seat price
						case 1://Chhorii
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}//theatre
						break;//chhorii
						
						case 2:// Stree
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}//theatre
						break;//stree
					
					default:
						printf("Invalid Number");
					}//seat price
				break;//horror
				
				default:
				printf("Invalid Number.");
			}//type of movie bollywood
			
		break;//bollywood
		case 3://tollywood
			printf("\nPress 1 for Drama.\n");
			printf("Press 2 for Action.\n");
			printf("Press 3 for Horror.\n");
			printf("Enter your choice :");
			scanf("%d",&TypeofMovie);
			
			switch(TypeofMovie){
				case 1 ://drama
					printf("\nPress 1 for 'Jersey'.\n");
					printf("Press 2 for 'Hi Nanna'.\n");
					printf("Enter your choice :");
					scanf("%d",&Movie);
					switch(Movie){
						case 1://jersey
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}//theatre
						break;//jersey
						
						case 2:// hi nanna
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}//theatre
						break;//hi nanna
					
					default:
						printf("Invalid Number");
					}//seat price
				break;//drama
				
				case 2 ://action
					printf("\nPress 1 for 'The Ghost'.\n");
					printf("Press 2 for 'They Call Him OG'.\n");
					printf("Enter your choice :");
					scanf("%d",&Movie);
					switch(Movie){
						case 1://the ghost
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}//theatre
						break;//the ghost
						
						case 2:// they call him og
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}//theatre
						break;//they call him og
					
					default:
						printf("Invalid Number");
					}//seat price
				break;//action
				
				case 3 ://horror
					printf("\nPress 1 for 'Raja Saab'.\n");
					printf("Press 2 for 'Virupaksha'.\n");
					printf("Enter your choice :");
					scanf("%d",&Movie);
					switch(Movie){
						case 1://raja saab
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}//theatre
						break;//raja saab
						
						case 2:// virupaksha
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}//theatre
						break;//virupaksha
					
					default:
						printf("Invalid Number");
					}//seat price
				break;//horror
				
				default:
				printf("Invalid Number.");
			}//type of movie tollywood
			
		break;//tollywood
		case 4://kollywood
			printf("\nPress 1 for Drama.\n");
			printf("Press 2 for Action.\n");
			printf("Press 3 for Horror.\n");
			printf("Enter your choice :");
			scanf("%d",&TypeofMovie);
			
			switch(TypeofMovie){
				case 1 ://drama
					printf("\nPress 1 for 'Kantara'.\n");
					printf("Press 2 for '45'.\n");
					printf("Enter your choice :");
					scanf("%d",&Movie);
					switch(Movie){
						case 1://kantara
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}//theatre
						break;//kantara
						
						case 2:// 45
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}//theatre
						break;//45
					
					default:
						printf("Invalid Number");
					}//seat price
				break;//drama
				
				case 2 ://action
					printf("\nPress 1 for 'K.G.F.'.\n");
					printf("Press 2 for 'Madhagaja'.\n");
					printf("Enter your choice :");
					scanf("%d",&Movie);
					switch(Movie){
						case 1://kgf
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}//theatre
						break;//kgf
						
						case 2:// madhagaja
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}//theatre
						break;//madhagaja
					
					default:
						printf("Invalid Number");
					}//seat price
				break;//action
				
				case 3 ://horror
					printf("\nPress 1 for 'GST'.\n");
					printf("Press 2 for 'Last Bus'.\n");
					printf("Enter your choice :");
					scanf("%d",&Movie);
					switch(Movie){
						case 1://gst
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}//theatre
						break;//gst
						
						case 2:// last bus
						printf("\nPress 1 for 15$ Front Seat.\n");
						printf("Press 2 for 30$ Back Seat.\n");
						printf("Enter your choice :");
						scanf("%d",&SeatPrice);
						switch(SeatPrice){//theatre
							case 1://15 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 15$
							case 2://30 $
							printf("\nPress 1 for VR Mall.\n");
							printf("Press 2 for Valentine.\n");
							printf("Enter your choice :");
							scanf("%d",&Theatre);
							break;// 30$
							
							default:
								printf("Invalid Number");
						}//theatre
						break;//last bus
					
					default:
						printf("Invalid Number");
					}//seat price
				break;//horror
				
				default:
				printf("Invalid Number.");
			}//movie
				
		break;//kollywood
		default :
			printf("Invalid Number.");
	}//cinema
}//main
