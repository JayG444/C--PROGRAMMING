
#include<stdio.h>
main()
{
	int a,b,c,d,e,f,g;
	printf("Press 1 for Hollywood.\n");
	printf("Press 2 for Bollywood.\n");
	printf("Press 3 for Tollywood.\n");
	printf("Press 4 for Kollywood.\n");
	printf("Enter your choice :");
	scanf("%d",&a);
	
	switch(a){
		case 1:
			printf("\nPress 1 for Drama.\n");
			printf("Press 2 for Comedy.\n");
			printf("Press 3 for Horror.\n");
			printf("Press 4 for Sci-fi.\n");
			printf("Press 5 for Action.\n");
			printf("Enter your choice :");
			scanf("%d",&b);
			switch(b){
				case 1:
					printf("\nPress 1 for'Once upon time in hollywood'.\n");
					printf("Press 2 for 'F1'.\n");
					printf("Enter your choice :");
					scanf("%d",&c);
					switch(c){
						case 1:
						printf("\nPress 1 for 'Once upon time in hollywood 10 $ Seat'.\n");
						printf("Press 2 for 'Once upon time in hollywood 20 $ Seat'.\n");
						printf("Press 3 for 'Once upon time in hollywood 30 $ Seat'.\n");
						printf("Enter your choice :");
						scanf("%d",&d);
						switch(d){
							case 1:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
								switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
												switch(g){
													case 1:
														printf("You have booked 1 seat of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in VR Mall Theater with Popcorn only.");
													break;
													case 2:
														printf("You have booked 1 seat of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in VR Mall Theater with Coke only.");
													break;
													case 3:
														printf("You have booked 1 seat of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in VR Mall Theater with Both Popcorn and Coke.");
													break;
													case 4:
														printf("You have booked 1 seat of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in VR Mall Theater with Nothing.");
													break;
													default:
														printf("Invalid Number.");	
												}
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
												switch(g){
													case 1:
														printf("You have booked 1 seat of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in Valentine Theater with Popcorn only.");
													break;
													case 2:
														printf("You have booked 1 seat of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in Valentine Theater with Coke only.");
													break;
													case 3:
														printf("You have booked 1 seat of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in Valentine Theater with Both Popcorn and Coke.");
													break;
													case 4:
														printf("You have booked 1 seat of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in Valentine Theater with Nothing.");
													break;
													default:
														printf("Invalid Number.");	
												}
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
												switch(g){
													case 1:
														printf("You have booked 2 seats of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in VR Mall Theater with Popcorn only.");
													break;
													case 2:
														printf("You have booked 2 seats of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in VR Mall Theater with Coke only.");
													break;
													case 3:
														printf("You have booked 2 seats of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in VR Mall Theater with Both Popcorn and Coke.");
													break;
													case 4:
														printf("You have booked 2 seats of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in VR Mall Theater with Nothing.");
													break;
													default:
														printf("Invalid Number.");	
												}
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
												switch(g){
													case 1:
														printf("You have booked 2 seats of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in Valentine Theater with Popcorn only.");
													break;
													case 2:
														printf("You have booked 2 seats of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in Valentine Theater with Coke only.");
													break;
													case 3:
														printf("You have booked 2 seats of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in Valentine Theater with Both Popcorn and Coke.");
													break;
													case 4:
														printf("You have booked 2 seats of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in Valentine Theater with Nothing.");
													break;
													default:
														printf("Invalid Number.");	
												}
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
												switch(g){
													case 1:
														printf("You have booked 3 seats of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in VR Mall Theater with Popcorn only.");
													break;
													case 2:
														printf("You have booked 3 seats of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in VR Mall Theater with Coke only.");
													break;
													case 3:
														printf("You have booked 3 seats of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in VR Mall Theater with Both Popcorn and Coke.");
													break;
													case 4:
														printf("You have booked 3 seats of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in VR Mall Theater with Nothing.");
													break;
													default:
														printf("Invalid Number.");	
												}
											break;
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
												switch(g){
													case 1:
														printf("You have booked 3 seats of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in Valentine Theater with Popcorn only.");
													break;
													case 2:
														printf("You have booked 3 seats of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in Valentine Theater with Coke only.");
													break;
													case 3:
														printf("You have booked 3 seats of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in Valentine Theater with Both Popcorn and Coke.");
													break;
													case 4:
														printf("You have booked 3 seats of Hollywood Drama movie 'Once upon time in hollywood 10 $ Seat' in Valentine Theater with Nothing.");
													break;
													default:
														printf("Invalid Number.");	
												}
											break;
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
										printf("Invalid Number.");
									}
							break;
							case 2:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 2 for'3 Seats'.\n");
							printf("Press 2 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
								switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							case 3:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
								switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");
									}
							break;
							default:
							printf("Invalid Number.");	
						}
						break ;
						case 2:
						printf("\nPress 1 for 'F1 10 $ Seat'.\n");
						printf("Press 2 for 'F1 20 $ Seat'.\n");
						printf("Press 3 for 'F1 30 $ Seat'.\n");
						printf("Enter your choice :");
						scanf("%d",&d);
						switch(d){
							case 1:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							case 2:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							case 3:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							default:
							printf("Invalid Number.");	
						}
						break ;
						default:
						printf("Invalid Number.");
						}
				break;
				case 2:
					printf("\nPress 1 for'Almighty Bruce'.\n");
					printf("Press 2 for'Step Brothers'.\n");
					printf("Enter your choice :");
					scanf("%d",&c);
					switch(c){
						case 1:
						printf("\nPress 1 for 'Almighty Bruce 10 $ Seat'.\n");
						printf("Press 2 for 'Almighty Bruce 20 $ Seat'.\n");
						printf("Press 3 for 'Almighty Bruce 30 $ Seat'.\n");
						printf("Enter your choice :");
						scanf("%d",&d);
						switch(d){
							case 1:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							case 2:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							case 3:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							default:
							printf("Invalid Number.");	
						}
						break ;
						case 2:
						printf("\nPress 1 for 'Step Brothers 10 $ Seat'.\n");
						printf("Press 2 for 'Step Brothers 20 $ Seat'.\n");
						printf("Press 3 for 'Step Brothers 30 $ Seat'.\n");
						printf("Enter your choice :");
						scanf("%d",&d);
						switch(d){
							case 1:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							case 2:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							case 3:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							default:
							printf("Invalid Number.");	
						}
						break ;
						default:
						printf("Invalid Number.");
						}
				break;
				case 3:
					printf("\nPress 1 for'The Mummy'.\n");
					printf("Press 2 for 'Exorcist'.\n");
					printf("Enter your choice :");
					scanf("%d",&c);
					switch(c){
						case 1:
						printf("\nPress 1 for 'The Mummy 10 $ Seat'.\n");
						printf("Press 2 for 'The Mummy 20 $ Seat'.\n");
						printf("Press 3 for 'The Mummy 30 $ Seat'.\n");
						printf("Enter your choice :");
						scanf("%d",&d);
						switch(d){
							case 1:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							case 2:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							case 3:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							default:
							printf("Invalid Number.");	
						}
						break ;
						case 2:
						printf("\nPress 1 for 'Exorcist 10 $ Seat'.\n");
						printf("Press 2 for 'Exorcist 20 $ Seat'.\n");
						printf("Press 3 for 'Exorcist 30 $ Seat'.\n");
						printf("Enter your choice :");
						scanf("%d",&d);
						switch(d){
							case 1:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							case 2:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							case 3:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							default:
							printf("Invalid Number.");	
						}
						break ;
						default:
						printf("Invalid Number.");
						}
				break;
				case 4:
					printf("\nPress 1 for'The Adam Project'.\n");
					printf("Press 2 for 'Blade Runner 2049'.\n");
					printf("Enter your choice :");
					scanf("%d",&c);
						switch(c){
						case 1:
						printf("\nPress 1 for 'The Adam Project 10 $ Seat'.\n");
						printf("Press 2 for 'The Adam Project 20 $ Seat'.\n");
						printf("Press 3 for 'The Adam Project 30 $ Seat'.\n");
						printf("Enter your choice :");
						scanf("%d",&d);
						switch(d){
							case 1:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							case 2:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							case 3:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							break;
							default:
							printf("Invalid Number.");	
						}
						break ;
						case 2:
						printf("\nPress 1 for 'Blade Runner 2049 10 $ Seat'.\n");
						printf("Press 2 for 'Blade Runner 2049 20 $ Seat'.\n");
						printf("Press 3 for 'Blade Runner 2049 30 $ Seat'.\n");
						printf("Enter your choice :");
						scanf("%d",&d);
						switch(d){
							case 1:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							case 2:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							case 3:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							default:
							printf("Invalid Number.");	
						}
						break ;
						default:
						printf("Invalid Number.");
						}
				break;
				case 5:
					printf("\nPress 1 for'John Wick'.\n");
					printf("\nPress 2 for 'Mutiny'.\n");
					printf("Enter your choice :");
					scanf("%d",&c);
					switch(c){
						case 1:
						printf("\nPress 1 for 'John Wick 10 $ Seat'.\n");
						printf("Press 2 for 'John Wick 20 $ Seat'.\n");
						printf("Press 3 for 'John Wick 30 $ Seat'.\n");
						printf("Enter your choice :");
						scanf("%d",&d);
						switch(d){
							case 1:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							case 2:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							case 3:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							default:
							printf("Invalid Number.");	
						}
						break ;
						case 2:
						printf("\nPress 1 for 'Mutiny 10 $ Seat'.\n");
						printf("Press 2 for 'Mutiny 20 $ Seat'.\n");
						printf("Press 3 for 'Mutiny 30 $ Seat'.\n");
						printf("Enter your choice :");
						scanf("%d",&d);
						switch(d){
							case 1:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							case 2:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							case 3:
							printf("\nPress 1 for'1 Seat'.\n");
							printf("Press 2 for'2 Seats'.\n");
							printf("Press 3 for'3 Seats'.\n");
							printf("Press 4 for'4 Seats'.\n");
							printf("Enter your choice :");
							scanf("%d",&e);
							switch(e){
									case 1:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 2:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 3:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									case 4:
										printf("\nPress 1 for'VR mall Theater'.\n");
										printf("Press 2 for'Valentine Theater'.\n");
										printf("Enter your choice :");
										scanf("%d",&f);
										switch(f){
											case 1:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											case 2:
												printf("\nPress 1 for Popcorn only.\n");
												printf("Press 2 for Coke only.\n");
												printf("Press 3 for Both Popcorn and Coke.\n");   
												printf("Press 4 for Nothing.\n");
												printf("Enter your choice :");
												scanf("%d",&g);
											break;
											default:
												printf("Invalid Number.");	
										}
									break;
									default:
									printf("Invalid Number.");	
									}
							break;
							default:
							printf("Invalid Number.");	
						}
						break ;
						default:
						printf("Invalid Number.");
						}
				break;
				default:
				printf("Invalid Number.");
				}
			
	break;
	default:
		printf("Invalid Number.");	
	}
}

