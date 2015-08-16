class CfgGroups {
        class WEST {
                name = "BLUEFOR";
                side = 1;
                class aftp_units_wz93 {
                        name = "AFTP Pantera Company";
						
						class SpecOps {
							name ="SF Operators";
							class divers_wz93 {
								name = "Diver team"
								faction = "aftp_units_wz93";
																		rarityGroup = 0.5; //Faction
								side = 1;
                                        class dt01_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_04_wz93"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
										class dt02_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_04_wz93"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,1,0}; //Position in the formation
                                        };
										class dt03_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_04_wz93"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {1,0,0}; //Position in the formation
                                        };
										class dt04_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_04_wz93"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {1,1,0}; //Position in the formation
                                        };
							};
							class Sniperteam_wz93 {
                                        name = "Sniper Team";
                                        faction = "aftp_units_wz93";
																		rarityGroup = 0.5; //Faction
                                        side = 1;
                                        class st01_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_05_wz93"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class st02_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_05_wz93";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                };
							class sfoperators_wz93 {
								name = "SF Team"
								faction = "aftp_units_wz93";
																		rarityGroup = 0.5; //Faction
								side = 1;
                                        class sf01_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_sf_wz93"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
										class sf02_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_sf_wz93"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {1,0,0}; //Position in the formation
                                        };
										class sf03_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_sf_wz93"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,1,0}; //Position in the formation
                                        };
										class sf04_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_sf_wz93"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {1,1,0}; //Position in the formation
                                        };
							};
						};
                        class Infantry {
                                name = "Infantry";
                                class Fireteam_wz93 {
                                        name = "Fireteam";
                                        faction = "aftp_units_wz93";
																				rarityGroup = 0.5; //Faction
                                        side = 1;
                                        class ft01_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_01_tl_wz93"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class ft02_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_01_gr_wz93";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                        class ft03_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_01_ar_wz93";
                                                rank = "PRIVATE";
                                                position[] = {0,1,0};
                                        };
										
                                        class ft04_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_01_wz93";
                                                rank = "PRIVATE";
                                                position[] = {1,1,0};
                                        };
                                };
								

								
                                class Squad_wz93 {
                                        name = "Squad";
                                        faction = "aftp_units_wz93";
																		rarityGroup = 0.5; //Faction
                                        side = 1;
                                        class sq01_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_01_tl_wz93"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class sq02_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_01_gr_wz93";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                        class sq03_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_01_ar_wz93";
                                                rank = "PRIVATE";
                                                position[] = {0,1,0};
                                        };
										
                                        class sq04_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_01_wz93";
                                                rank = "PRIVATE";
                                                position[] = {1,1,0};
                                        };
										
										class sq05_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_01_ar_wz93";
                                                rank = "PRIVATE";
                                                position[] = {2,0,0};
										};
										class sq06_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_02_wz93";
                                                rank = "CORPORAL"; 
                                                position[] = {0,2,0};
										};										
                                        class sq07_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_01_gr_wz93";
                                                rank = "CORPORAL";
                                                position[] = {2,2,0};
                                        };
                                        class sq08_aftp_wz93 {
                                                side = 1;
                                                vehicle = "aftp_03_wz93";
                                                rank = "CORPORAL";
                                                position[] = {3,3,0};
                                        };
                                };
                        };
                };	
				class aftp_units_wzd93 {
                        name = "AFTP Pantera Desert Company";
						
						class SpecOps {
							name ="SF Operators";
							class divers_wzd93 {
								name = "Diver team"
								faction = "aftp_units_wzd93";
								rarityGroup = 0.5; //Faction
								side = 1;
                                        class dt01_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_04_wzd93"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
										class dt02_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_04_wzd93"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,1,0}; //Position in the formation
                                        };
										class dt03_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_04_wzd93"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {1,0,0}; //Position in the formation
                                        };
										class dt04_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_04_wzd93"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {1,1,0}; //Position in the formation
                                        };
							};
							
															class Sniperteam_wzd93 {
                                        name = "Sniper Team";
                                        faction = "aftp_units_wzd93";
																				rarityGroup = 0.5; //Faction //Faction
                                        side = 1;
                                        class st01_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_05_wzd93"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class st02_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_05_wzd93";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                };
							
							
														class sfoperators_wzd93 {
								name = "SF Team"
								faction = "aftp_units_wzd93";
										rarityGroup = 0.5; //Faction
								side = 1;
                                        class sf01_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_sf_wzd93"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
										class sf02_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_sf_wzd93"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {1,0,0}; //Position in the formation
                                        };
										class sf03_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_sf_wzd93"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,1,0}; //Position in the formation
                                        };
										class sf04_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_sf_wzd93"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {1,1,0}; //Position in the formation
                                        };
							};
						};
                        class Infantry {
                                name = "Infantry";
                                class Fireteam_wzd93 {
                                        name = "Fireteam";
                                        faction = "aftp_units_wzd93";
										rarityGroup = 0.5; //Faction
                                        side = 1;
                                        class ft01_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_01_tl_wzd93"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class ft02_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_01_gr_wzd93";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                        class ft03_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_01_ar_wzd93";
                                                rank = "PRIVATE";
                                                position[] = {0,1,0};
                                        };
										
                                        class ft04_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_01_wzd93";
                                                rank = "PRIVATE";
                                                position[] = {1,1,0};
                                        };
                                };
								

								
                                class Squad_wzd93 {
                                        name = "Squad";
                                        faction = "aftp_units_wzd93";
										rarityGroup = 0.5; //Faction //Faction
                                        side = 1;
                                        class sq01_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_01_tl_wzd93"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class sq02_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_01_gr_wzd93";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                        class sq03_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_01_ar_wzd93";
                                                rank = "PRIVATE";
                                                position[] = {0,1,0};
                                        };
										
                                        class sq04_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_01_wzd93";
                                                rank = "PRIVATE";
                                                position[] = {1,1,0};
                                        };
										
										class sq05_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_01_ar_wzd93";
                                                rank = "PRIVATE";
                                                position[] = {2,0,0};
										};
										class sq06_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_02_wzd93";
                                                rank = "CORPORAL"; 
                                                position[] = {0,2,0};
										};										
                                        class sq07_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_01_gr_wzd93";
                                                rank = "CORPORAL";
                                                position[] = {2,2,0};
                                        };
                                        class sq08_aftp_wzd93 {
                                                side = 1;
                                                vehicle = "aftp_03_wzd93";
                                                rank = "CORPORAL";
                                                position[] = {3,3,0};
                                        };
                                };
                        };
                };	
				
				                class aftp_units_mc {
                        name = "AFTP Multicam Company";
						
						class SpecOps {
							name ="SF Operators";
							class divers_mc {
								name = "Diver team"
								faction = "aftp_units_mc";
										rarityGroup = 0.5; //Faction
								side = 1;
                                        class dt01_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_04_mc"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
										class dt02_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_04_mc"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,1,0}; //Position in the formation
                                        };
										class dt03_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_04_mc"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {1,0,0}; //Position in the formation
                                        };
										class dt04_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_04_mc"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {1,1,0}; //Position in the formation
                                        };
							};
							
															class Sniperteam_mc {
                                        name = "Sniper Team";
                                        faction = "aftp_units_mc";
										rarityGroup = 0.5; //Faction //Faction
                                        side = 1;
                                        class st01_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_05_mc"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class st02_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_05_mc";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                };
														class sfoperators_mc {
								name = "SF Team"
								faction = "aftp_units_mc";
										rarityGroup = 0.5; //Faction
								side = 1;
                                        class sf01_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_sf_mc"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
										class sf02_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_sf_mc"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {1,0,0}; //Position in the formation
                                        };
										class sf03_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_sf_mc"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,1,0}; //Position in the formation
                                        };
										class sf04_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_sf_mc"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {1,1,0}; //Position in the formation
                                        };
							};
						};
                        class Infantry {
                                name = "Infantry";
                                class Fireteam_mc {
                                        name = "Fireteam";
                                        faction = "aftp_units_mc";
										rarityGroup = 0.5; //Faction
                                        side = 1;
                                        class ft01_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_01_tl_mc"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class ft02_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_01_gr_mc";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                        class ft03_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_01_ar_mc";
                                                rank = "PRIVATE";
                                                position[] = {0,1,0};
                                        };
										
                                        class ft04_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_01_mc";
                                                rank = "PRIVATE";
                                                position[] = {1,1,0};
                                        };
                                };
								

								
                                class Squad_mc {
                                        name = "Squad";
                                        faction = "aftp_units_mc";
										rarityGroup = 0.5; //Faction //Faction
                                        side = 1;
                                        class sq01_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_01_tl_mc"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class sq02_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_01_gr_mc";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                        class sq03_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_01_ar_mc";
                                                rank = "PRIVATE";
                                                position[] = {0,1,0};
                                        };
										
                                        class sq04_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_01_mc";
                                                rank = "PRIVATE";
                                                position[] = {1,1,0};
                                        };
										
										class sq05_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_01_ar_mc";
                                                rank = "PRIVATE";
                                                position[] = {2,0,0};
										};
										class sq06_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_02_mc";
                                                rank = "CORPORAL"; 
                                                position[] = {0,2,0};
										};										
                                        class sq07_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_01_gr_mc";
                                                rank = "CORPORAL";
                                                position[] = {2,2,0};
                                        };
                                        class sq08_aftp_mc {
                                                side = 1;
                                                vehicle = "aftp_03_mc";
                                                rank = "CORPORAL";
                                                position[] = {3,3,0};
                                        };
                                };
                        };
                };	
				
				                class aftp_units_mct {
                        name = "AFTP Multicam Tropic Company";
						
						class SpecOps {
							name ="SF Operators";
							class divers_mct {
								name = "Diver team"
								faction = "aftp_units_mct";
										rarityGroup = 0.5; //Faction
								side = 1;
                                        class dt01_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_04_mct"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
										class dt02_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_04_mct"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,1,0}; //Position in the formation
                                        };
										class dt03_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_04_mct"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {1,0,0}; //Position in the formation
                                        };
										class dt04_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_04_mct"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {1,1,0}; //Position in the formation
                                        };
							};
							
															class Sniperteam_mct {
                                        name = "Sniper Team";
                                        faction = "aftp_units_mct";
										rarityGroup = 0.5; //Faction //Faction
                                        side = 1;
                                        class st01_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_05_mct"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class st02_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_05_mct";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                };
														class sfoperators_mct {
								name = "SF Team"
								faction = "aftp_units_mct";
										rarityGroup = 0.5; //Faction
								side = 1;
                                        class sf01_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_sf_mct"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
										class sf02_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_sf_mct"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {1,0,0}; //Position in the formation
                                        };
										class sf03_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_sf_mct"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,1,0}; //Position in the formation
                                        };
										class sf04_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_sf_mct"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {1,1,0}; //Position in the formation
                                        };
							};
						};
                        class Infantry {
                                name = "Infantry";
                                class Fireteam_mct {
                                        name = "Fireteam";
                                        faction = "aftp_units_mct";
										rarityGroup = 0.5; //Faction
                                        side = 1;
                                        class ft01_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_01_tl_mct"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class ft02_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_01_gr_mct";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                        class ft03_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_01_ar_mct";
                                                rank = "PRIVATE";
                                                position[] = {0,1,0};
                                        };
										
                                        class ft04_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_01_mct";
                                                rank = "PRIVATE";
                                                position[] = {1,1,0};
                                        };
                                };
								

								
                                class Squad_mct {
                                        name = "Squad";
                                        faction = "aftp_units_mct";
										rarityGroup = 0.5; //Faction //Faction
                                        side = 1;
                                        class sq01_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_01_tl_mct"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class sq02_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_01_gr_mct";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                        class sq03_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_01_ar_mct";
                                                rank = "PRIVATE";
                                                position[] = {0,1,0};
                                        };
										
                                        class sq04_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_01_mct";
                                                rank = "PRIVATE";
                                                position[] = {1,1,0};
                                        };
										
										class sq05_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_01_ar_mct";
                                                rank = "PRIVATE";
                                                position[] = {2,0,0};
										};
										class sq06_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_02_mct";
                                                rank = "CORPORAL"; 
                                                position[] = {0,2,0};
										};										
                                        class sq07_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_01_gr_mct";
                                                rank = "CORPORAL";
                                                position[] = {2,2,0};
                                        };
                                        class sq08_aftp_mct {
                                                side = 1;
                                                vehicle = "aftp_03_mct";
                                                rank = "CORPORAL";
                                                position[] = {3,3,0};
                                        };
                                };
                        };
                };	
				
				                class aftp_units_aau {
                        name = "AFTP A-TACS AU Company";
						
						class SpecOps {
							name ="SF Operators";
							class divers_aau {
								name = "Diver team"
								faction = "aftp_units_aau";
										rarityGroup = 0.5; //Faction
								side = 1;
                                        class dt01_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_04_aau"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
										class dt02_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_04_aau"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,1,0}; //Position in the formation
                                        };
										class dt03_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_04_aau"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {1,0,0}; //Position in the formation
                                        };
										class dt04_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_04_aau"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {1,1,0}; //Position in the formation
                                        };
							};
							
															class Sniperteam_aau {
                                        name = "Sniper Team";
                                        faction = "aftp_units_aau";
										rarityGroup = 0.5; //Faction //Faction
                                        side = 1;
                                        class st01_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_05_aau"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class st02_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_05_aau";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                };
							
														class sfoperators_aau {
								name = "SF Team"
								faction = "aftp_units_aau";
										rarityGroup = 0.5; //Faction
								side = 1;
                                        class sf01_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_sf_aau"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
										class sf02_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_sf_aau"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {1,0,0}; //Position in the formation
                                        };
										class sf03_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_sf_aau"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,1,0}; //Position in the formation
                                        };
										class sf04_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_sf_aau"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {1,1,0}; //Position in the formation
                                        };
							};
						};
                        class Infantry {
                                name = "Infantry";
                                class Fireteam_aau {
                                        name = "Fireteam";
                                        faction = "aftp_units_aau";
										rarityGroup = 0.5; //Faction
                                        side = 1;
                                        class ft01_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_01_tl_aau"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class ft02_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_01_gr_aau";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                        class ft03_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_01_ar_aau";
                                                rank = "PRIVATE";
                                                position[] = {0,1,0};
                                        };
										
                                        class ft04_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_01_aau";
                                                rank = "PRIVATE";
                                                position[] = {1,1,0};
                                        };
                                };
								

								
                                class Squad_aau {
                                        name = "Squad";
                                        faction = "aftp_units_aau";
										rarityGroup = 0.5; //Faction //Faction
                                        side = 1;
                                        class sq01_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_01_tl_aau"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class sq02_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_01_gr_aau";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                        class sq03_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_01_ar_aau";
                                                rank = "PRIVATE";
                                                position[] = {0,1,0};
                                        };
										
                                        class sq04_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_01_aau";
                                                rank = "PRIVATE";
                                                position[] = {1,1,0};
                                        };
										
										class sq05_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_01_ar_aau";
                                                rank = "PRIVATE";
                                                position[] = {2,0,0};
										};
										class sq06_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_02_aau";
                                                rank = "CORPORAL"; 
                                                position[] = {0,2,0};
										};										
                                        class sq07_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_01_gr_aau";
                                                rank = "CORPORAL";
                                                position[] = {2,2,0};
                                        };
                                        class sq08_aftp_aau {
                                                side = 1;
                                                vehicle = "aftp_03_aau";
                                                rank = "CORPORAL";
                                                position[] = {3,3,0};
                                        };
                                };
                        };
                };	
				
				                class aftp_units_afg {
                        name = "AFTP A-TACS FG Company";
						
						class SpecOps {
							name ="SF Operators";
							class divers_afg {
								name = "Diver team"
								faction = "aftp_units_afg";
										rarityGroup = 0.5; //Faction
								side = 1;
                                        class dt01_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_04_afg"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
										class dt02_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_04_afg"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,1,0}; //Position in the formation
                                        };
										class dt03_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_04_afg"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {1,0,0}; //Position in the formation
                                        };
										class dt04_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_04_afg"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {1,1,0}; //Position in the formation
                                        };
							};
							
															class Sniperteam_afg {
                                        name = "Sniper Team";
                                        faction = "aftp_units_afg";
										rarityGroup = 0.5; //Faction //Faction
                                        side = 1;
                                        class st01_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_05_afg"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class st02_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_05_afg";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                };
														class sfoperators_afg {
								name = "SF Team"
								faction = "aftp_units_afg";
										rarityGroup = 0.5; //Faction
								side = 1;
                                        class sf01_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_sf_afg"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
										class sf02_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_sf_afg"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {1,0,0}; //Position in the formation
                                        };
										class sf03_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_sf_afg"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,1,0}; //Position in the formation
                                        };
										class sf04_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_sf_afg"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {1,1,0}; //Position in the formation
                                        };
							};
						};
                        class Infantry {
                                name = "Infantry";
                                class Fireteam_afg {
                                        name = "Fireteam";
                                        faction = "aftp_units_afg";
										rarityGroup = 0.5; //Faction
                                        side = 1;
                                        class ft01_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_01_tl_afg"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class ft02_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_01_gr_afg";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                        class ft03_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_01_ar_afg";
                                                rank = "PRIVATE";
                                                position[] = {0,1,0};
                                        };
										
                                        class ft04_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_01_afg";
                                                rank = "PRIVATE";
                                                position[] = {1,1,0};
                                        };
                                };
								

								
                                class Squad_afg {
                                        name = "Squad";
                                        faction = "aftp_units_afg";
										rarityGroup = 0.5; //Faction //Faction
                                        side = 1;
                                        class sq01_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_01_tl_afg"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class sq02_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_01_gr_afg";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                        class sq03_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_01_ar_afg";
                                                rank = "PRIVATE";
                                                position[] = {0,1,0};
                                        };
										
                                        class sq04_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_01_afg";
                                                rank = "PRIVATE";
                                                position[] = {1,1,0};
                                        };
										
										class sq05_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_01_ar_afg";
                                                rank = "PRIVATE";
                                                position[] = {2,0,0};
										};
										class sq06_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_02_afg";
                                                rank = "CORPORAL"; 
                                                position[] = {0,2,0};
										};										
                                        class sq07_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_01_gr_afg";
                                                rank = "CORPORAL";
                                                position[] = {2,2,0};
                                        };
                                        class sq08_aftp_afg {
                                                side = 1;
                                                vehicle = "aftp_03_afg";
                                                rank = "CORPORAL";
                                                position[] = {3,3,0};
                                        };
                                };
                        };
                };	
				
				                class aftp_units_ale {
                        name = "AFTP A-TACS LE Company";
						
						class SpecOps {
							name ="SF Operators";
							class divers_ale {
								name = "Diver team"
								faction = "aftp_units_ale";
										rarityGroup = 0.5; //Faction
								side = 1;
                                        class dt01_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_04_ale"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
										class dt02_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_04_ale"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,1,0}; //Position in the formation
                                        };
										class dt03_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_04_ale"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {1,0,0}; //Position in the formation
                                        };
										class dt04_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_04_ale"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {1,1,0}; //Position in the formation
                                        };
							};
														class sfoperators_ale {
								name = "SF Team"
								faction = "aftp_units_ale";
										rarityGroup = 0.5; //Faction
								side = 1;
                                        class sf01_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_sf_ale"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
										class sf02_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_sf_ale"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {1,0,0}; //Position in the formation
                                        };
										class sf03_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_sf_ale"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,1,0}; //Position in the formation
                                        };
										class sf04_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_sf_ale"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {1,1,0}; //Position in the formation
                                        };
							};
						};
                        class Infantry {
                                name = "Infantry";
                                class Fireteam_ale {
                                        name = "Fireteam";
                                        faction = "aftp_units_ale";
										rarityGroup = 0.5; //Faction
                                        side = 1;
                                        class ft01_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_01_tl_ale"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class ft02_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_01_gr_ale";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                        class ft03_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_01_ar_ale";
                                                rank = "PRIVATE";
                                                position[] = {0,1,0};
                                        };
										
                                        class ft04_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_01_ale";
                                                rank = "PRIVATE";
                                                position[] = {1,1,0};
                                        };
                                };
								
								/*
								
								add when sniper ghillie ready
								
								class Sniperteam_ale {
                                        name = "Sniper Team";
                                        faction = "aftp_units_ale";
										rarityGroup = 0.5; //Faction //Faction
                                        side = 1;
                                        class st01_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_05_ale"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class st02_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_05_ale";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                };
								
								*/
								
                                class Squad_ale {
                                        name = "Squad";
                                        faction = "aftp_units_ale";
										rarityGroup = 0.5; //Faction //Faction
                                        side = 1;
                                        class sq01_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_01_tl_ale"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class sq02_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_01_gr_ale";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                        class sq03_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_01_ar_ale";
                                                rank = "PRIVATE";
                                                position[] = {0,1,0};
                                        };
										
                                        class sq04_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_01_ale";
                                                rank = "PRIVATE";
                                                position[] = {1,1,0};
                                        };
										
										class sq05_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_01_ar_ale";
                                                rank = "PRIVATE";
                                                position[] = {2,0,0};
										};
										class sq06_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_02_ale";
                                                rank = "CORPORAL"; 
                                                position[] = {0,2,0};
										};										
                                        class sq07_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_01_gr_ale";
                                                rank = "CORPORAL";
                                                position[] = {2,2,0};
                                        };
                                        class sq08_aftp_ale {
                                                side = 1;
                                                vehicle = "aftp_03_ale";
                                                rank = "CORPORAL";
                                                position[] = {3,3,0};
                                        };
                                };
                        };
                };	
				
				                class aftp_units_mca {
                        name = "AFTP Multicam Alpine Company";
						
						class SpecOps {
							name ="SF Operators";
							
							/*
							
							add when ready 
							
							class divers_mca {
								name = "Diver team"
								faction = "aftp_units_mca";
										rarityGroup = 0.5; //Faction
								side = 1;
                                        class dt01_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_04_mca"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
										class dt02_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_04_mca"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,1,0}; //Position in the formation
                                        };
										class dt03_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_04_mca"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {1,0,0}; //Position in the formation
                                        };
										class dt04_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_04_mca"; //Class name of desired solider
                                                rank = "PRIVATE"; // Rank
                                                position[] = {1,1,0}; //Position in the formation
                                        };
							};
							
							*/
														class sfoperators_mca {
								name = "SF Team"
								faction = "aftp_units_mca";
										rarityGroup = 0.5; //Faction
								side = 1;
                                        class sf01_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_sf_mca"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
										class sf02_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_sf_mca"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {1,0,0}; //Position in the formation
                                        };
										class sf03_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_sf_mca"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {0,1,0}; //Position in the formation
                                        };
										class sf04_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_sf_mca"; //Class name of desired solider
                                                rank = "CORPORAL"; // Rank
                                                position[] = {1,1,0}; //Position in the formation
                                        };
							};
						};
                        class Infantry {
                                name = "Infantry";
                                class Fireteam_mca {
                                        name = "Fireteam";
                                        faction = "aftp_units_mca";
										rarityGroup = 0.5; //Faction
                                        side = 1;
                                        class ft01_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_01_tl_mca"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class ft02_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_01_gr_mca";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                        class ft03_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_01_ar_mca";
                                                rank = "PRIVATE";
                                                position[] = {0,1,0};
                                        };
										
                                        class ft04_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_01_mca";
                                                rank = "PRIVATE";
                                                position[] = {1,1,0};
                                        };
                                };
								
								/*
								
								add when sniper ghillie ready
								
								class Sniperteam_mca {
                                        name = "Sniper Team";
                                        faction = "aftp_units_mca";
										rarityGroup = 0.5; //Faction //Faction
                                        side = 1;
                                        class st01_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_05_mca"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class st02_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_05_mca";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                };
								
								*/
								
                                class Squad_mca {
                                        name = "Squad";
                                        faction = "aftp_units_mca";
										rarityGroup = 0.5; //Faction //Faction
                                        side = 1;
                                        class sq01_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_01_tl_mca"; //Class name of desired solider
                                                rank = "SERGEANT"; // Rank
                                                position[] = {0,0,0}; //Position in the formation
                                        };
                                        class sq02_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_01_gr_mca";
                                                rank = "CORPORAL";
                                                position[] = {1,0,0};
                                        };
                                        class sq03_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_01_ar_mca";
                                                rank = "PRIVATE";
                                                position[] = {0,1,0};
                                        };
										
                                        class sq04_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_01_mca";
                                                rank = "PRIVATE";
                                                position[] = {1,1,0};
                                        };
										
										class sq05_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_01_ar_mca";
                                                rank = "PRIVATE";
                                                position[] = {2,0,0};
										};
										class sq06_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_02_mca";
                                                rank = "CORPORAL"; 
                                                position[] = {0,2,0};
										};										
                                        class sq07_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_01_gr_mca";
                                                rank = "CORPORAL";
                                                position[] = {2,2,0};
                                        };
                                        class sq08_aftp_mca {
                                                side = 1;
                                                vehicle = "aftp_03_mca";
                                                rank = "CORPORAL";
                                                position[] = {3,3,0};
                                        };
                                };
                        };
                };	
				
				
				
				
				
				
				
				
				
				
				
				
				
        };     
};