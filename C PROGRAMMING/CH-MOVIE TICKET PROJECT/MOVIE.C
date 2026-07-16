#include<stdio.h>
#define p printf
#define s scanf
main()
{
	int a,b,c,d,e,f;
	p("Press 1 for Foreign Movie\n");
	p("Press 2 for Indian Movie\n");
	p("Enter your Choice :");
	s("%d",&a);
		switch(a)
		{//industry
			case 1://foreign movie
				p("\nPress 1 for Mutiny.\n");
				p("Press 2 for Shelter.\n");
				p("Press 3 for Avengers.\n");
				p("Press 4 for Faster.\n");
				p("Press 5 for Our Fault.\n");
				p("Press 6 for Parasite.\n");
				p("Enter your Choice :");
				s("%d",&b);
					switch(b)
					{//movie
						case 1://Theatre choice mutiny
							p("\nPress 1 for VR Mall Theatre\n");
							p("Press 2 for Valentine Theatre\n");
							p("Enter your Choice :");
							s("%d",&c); 
								switch(c)
								{//theatre
									case 1:// vr mall
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
											switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Mutiny\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Mutiny\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Mutiny\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Mutiny\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Mutiny\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Mutiny\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Mutiny\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Mutiny\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break; //vr mall
									
									case 2:// valentine
										p("Enter the Number of seats you want :");
										s("%d",&d);
										switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Mutiny\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Mutiny\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Mutiny\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Mutiny\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Mutiny\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Mutiny\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Mutiny\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Mutiny\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break;//valentine
									default:
										p("Invalid Number.");
								}//theatre
						break;//Theatre choice mutiny
						
						case 2://Theatre choice shelter
							p("\nPress 1 for VR Mall Theatre\n");
							p("Press 2 for Valentine Theatre\n");
							p("Enter your Choice :");
							s("%d",&c);
									switch(c){//theatre
									case 1:// vr mall
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
											switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Shelter\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Shelter\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Shelter\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Shelter\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Shelter\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Shelter\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Shelter\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Shelter\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break; //vr mall
									
									case 2:// valentine
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
										switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Shelter\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Shelter\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Shelter\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Shelter\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Shelter\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Shelter\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Shelter\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Shelter\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break;//valentine
									default:
										p("Invalid Number.");
								}//theatre
						break;//Theatre choice shelter
						
						case 3://Theatre choice avengers
							p("\nPress 1 for VR Mall Theatre\n");
							p("Press 2 for Valentine Theatre\n");
							p("Enter your Choice :");
							s("%d",&c);
							switch(c){//theatre
									case 1:// vr mall
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
											switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Avengers\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Avengers\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Avengers\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Avengers\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Avengers\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Avengers\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Avengers\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Avengers\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break; //vr mall
									
									case 2:// valentine
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
										switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Avengers\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Avengers\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Avengers\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Avengers\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Avegers\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Avengers\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Avengers\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Avengers\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break;//valentine
									default:
										p("Invalid Number.");
								}//theatre
						break;//Theatre choice avengers
						
						case 4://Theatre choice faster
							p("\nPress 1 for VR Mall Theatre\n");
							p("Press 2 for Valentine Theatre\n");
							p("Enter your Choice :");
							s("%d",&c);
							switch(c){//theatre
									case 1:// vr mall
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
											switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Faster\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Faster\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Faster\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Faster\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Faster\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Faster\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Faster\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Faster\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break; //vr mall
									
									case 2:// valentine
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
										switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Faster\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Faster\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Faster\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Faster\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Faster\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Faster\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Faster\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Faster\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break;//valentine
									default:
										p("Invalid Number.");
								}//theatre  
						break;//Theatre choice faster
						
						case 5://Theatre choice our fault
							p("\nPress 1 for VR Mall Theatre\n");
							p("Press 2 for Valentine Theatre\n");
							p("Enter your Choice :");
							s("%d",&c);
							switch(c){//theatre
									case 1:// vr mall
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
											switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Our Fault\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Our Fault\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Our Fault\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Our Fault\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Our Fault\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Our Fault\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Our Fault\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Our Fault\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break; //vr mall
									
									case 2:// valentine
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
										switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Our Fault\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Our Fault\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Our Fault\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Our Fault\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Our Fault\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Our fault\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Our Fault\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Our Fault\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break;//valentine
									default:
										p("Invalid Number.");
								}//theatre 
						break;//Theatre choice our fault
						
						case 6://Theatre choice parasite
							p("\nPress 1 for VR Mall Theatre\n");
							p("Press 2 for Valentine Theatre\n");
							p("Enter your Choice :");
							s("%d",&c);
							switch(c){//theatre
									case 1:// vr mall
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
											switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Parasite\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Parasite\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Parasite\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Parasite\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Parasite\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Parasite\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Parasite\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Parasite\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break; //vr mall
									
									case 2:// valentine
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
										switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Parasite\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Parasite\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Parasite\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Parasite\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Parasite\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Parasite\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Parasite\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Parasite\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break;//valentine
									default:
										p("Invalid Number.");
								}//theatre 
						break;//Theatre choice parasite
						default:
							p("Invalid Number");
					}//movie
			break;//foreign movie
			
			case 2://Indian movie
				p("\nPress 1 for King.\n");
				p("Press 2 for Dhurandhar.\n");
				p("Press 3 for Jawan.\n");
				p("Press 4 for RRR.\n");
				p("Press 5 for K.G.F.\n");
				p("Press 6 for Bahubali.\n");
				p("Enter your Choice :");
				s("%d",&b);
				switch(b)
					{//movie
						case 1://Theatre choice king
							p("\nPress 1 for VR Mall Theatre\n");
							p("Press 2 for Valentine Theatre\n");
							p("Enter your Choice :");
							s("%d",&c); 
								switch(c)
								{//theatre
									case 1:// vr mall
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
											switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : KING\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : KING\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : KING\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : KING\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : KING\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : KING\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : KING\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : KING\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break; //vr mall
									
									case 2:// valentine
										p("Enter the Number of seats you want :");
										s("%d",&d);
										switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : KING\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : KING\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : KING\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : KING\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : KING\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : KING\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : KING\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : KING\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break;//valentine
									default:
										p("Invalid Number.");
								}//theatre
						break;//Theatre choice KING
						
						case 2://Theatre choice Dhurandhar
							p("\nPress 1 for VR Mall Theatre\n");
							p("Press 2 for Valentine Theatre\n");
							p("Enter your Choice :");
							s("%d",&c);
									switch(c){//theatre
									case 1:// vr mall
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
											switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Dhurandhar\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Dhurandhar\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Dhurandhar\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Dhurandhar\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Dhurandhar\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Dhurandhar\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Dhurandhar\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Dhurandhar\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break; //vr mall
									
									case 2:// valentine
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
										switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Dhurandhar\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Dhurandhar\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Dhurandhar\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Dhurandhar\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Dhurandhar\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Dhurandhar\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Dhurandhar\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Dhurandhar\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break;//valentine
									default:
										p("Invalid Number.");
								}//theatre
						break;//Theatre choice Dhurandhar
						
						case 3://Theatre choice JAWAN
							p("\nPress 1 for VR Mall Theatre\n");
							p("Press 2 for Valentine Theatre\n");
							p("Enter your Choice :");
							s("%d",&c);
							switch(c){//theatre
									case 1:// vr mall
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
											switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Jawan\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Jawan\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Jawan\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Jawan\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Jawan\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Jawan\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Jawan\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Jawan\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break; //vr mall
									
									case 2:// valentine
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
										switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Jawan\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Jawan\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Jawan\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Jawan\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Jawan\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Jawan\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Jawan\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Jawan\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break;//valentine
									default:
										p("Invalid Number.");
								}//theatre
						break;//Theatre choice JAWAN
						
						case 4://Theatre choice RRR
							p("\nPress 1 for VR Mall Theatre\n");
							p("Press 2 for Valentine Theatre\n");
							p("Enter your Choice :");
							s("%d",&c);
							switch(c){//theatre
									case 1:// vr mall
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
											switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : RRR\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : RRR\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : RRR\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : RRR\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : RRR\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : RRR\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : RRR\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : RRR\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break; //vr mall
									
									case 2:// valentine
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
										switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : RRR\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : RRR\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : RRR\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : RRR\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : RRR\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : RRR\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : RRR\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : RRR\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break;//valentine
									default:
										p("Invalid Number.");
								}//theatre  
						break;//Theatre choice RRR
						
						case 5://Theatre choice KGF
							p("\nPress 1 for VR Mall Theatre\n");
							p("Press 2 for Valentine Theatre\n");
							p("Enter your Choice :");
							s("%d",&c);
							switch(c){//theatre
									case 1:// vr mall
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
											switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : K.G.F.\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : K.G.F.\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : K.G.F.\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : K.G.F.\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : K.G.F.\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : K.G.F.\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : K.G.F.\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : K.G.F.\t\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break; //vr mall
									
									case 2:// valentine
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
										switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : K.G.F.\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : K.G.F.\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : K.G.F.\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : K.G.F.\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : K.G.F.\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : K.G.F.\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : K.G.F.\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : K.G.F.\t\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break;//valentine
									default:
										p("Invalid Number.");
								}//theatre 
						break;//Theatre choice KGF
						
						case 6://Theatre choice BAHUBALI
							p("\nPress 1 for VR Mall Theatre\n");
							p("Press 2 for Valentine Theatre\n");
							p("Enter your Choice :");
							s("%d",&c);
							switch(c){//theatre
									case 1:// vr mall
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
											switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Bahubali\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Bahubali\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Bahubali\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Bahubali\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Bahubali\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Bahubali\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Bahubali\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Bahubali\t\t\t|\n");
																		p("|Theatre :VR Mall\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break; //vr mall
									
									case 2:// valentine
										p("\nEnter the Number of seats you want :");
										s("%d",&d);
										switch(d)
											{//seats no.
												case 0 ...25 ://seats 
													p("\nPress 1 for 15$ Front seat.\n");
													p("Press 2 for 30$ Back seat.\n");
													p("Enter your Choice :");
													s("%d",&e);
														switch(e)
														{//timing
															case 1://15$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
																switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Bahubali\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Bahubali\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Bahubali\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Bahubali\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 15$ front seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*15)+(0.18*d*15));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//15$
															
															case 2://30$
															p("\nPress 1 for Morning 9AM Time.\n");
															p("Press 2 for Afternoon 1PM Time.\n");
															p("Press 3 for Evening 5PM Time.\n");
															p("Press 4 for Night 9PM Time.\n");
															p("Enter your Choice :");
															s("%d",&f);
															switch(f)
																{//ticket
																	case 1:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Bahubali\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9AM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 2:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Bahubali\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 1PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 3:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Bahubali\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 5PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	
																	case 4:
																		p("\n========================================\n");
																		p("|\t\tTICKET\t\t\t|\n");
																		p("|Movie : Bahubali\t\t\t|\n");
																		p("|Theatre :Valentine\t\t\t|\n");
																		p("|No. of Seats :%d\t\t\t|\n",d);
																		p("|You have selected 30$ Back seat\t|\n");
																		p("|Timing : 9PM\t\t\t\t|\n");
																		p("|Final Price : %.2f\t\t\t|",(d*30)+(0.18*d*30));
																		p("\n========================================\n");
																	break;
																	default:
																		p("Invalid Choice.");
																}//ticket
															break;//30$
															
															default:
																("Invalid Choice.");
														}//timing
												break;//seats
												default:
													p("You can only purchase 25 seats at Maximum.");
											}//seats no.
									break;//valentine
									default:
										p("Invalid Number.");
								}//theatre 
						break;//Theatre choice 
						default:
							p("Invalid Number");
					}//movie
			break;//Indian movie
			default:
				p("Invalid Number.");
		}//industry
		p("\n=================================================================\n");
		p("If you want to buy any type of snacks you can buy them from Theatre.\n");
		p("Prices of the Snacks are as per follow.\n");
		p("Popcorn\t:3$\n");
		p("Coke\t:1$\n");
		p("Samosa\t:2$");
		p("\n===================THANKS FOR YOUR VISIT!!========================");
}//main
