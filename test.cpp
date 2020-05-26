#include<iostream>
#include<conio.h>
#include<string.h>
#include <stdlib.h>
using namespace std;

bool Testface(char kt)
{

	if(kt=='1') return true;
	else  return false;
}
bool Testface1(char kt)
{
	
	if(	Testface(kt)==true) return true;
	else return false;
   
}

bool Testid(string id)
{
	int d=0;
	for(int i=0;i<id.length();i++)
	{
	
		if((id[0]=='1'&& id[1]=='2'&&id[2]=='3') ) d=1;
	
	}
	
	if(d==1) return true;
	else return false;
}
bool Testid1(string id)
{
	if(Testid(id)==false) return false;
	else return true;
}
bool Den_do(string id, char kt)
{
	if((	Testface1(kt)==true)&&(Testid1(id)==true)) return true;
	else return false;
}
int Testtime(int time)
{
	//int tg=0;
	if(time<8||time>17) return 0;
	if (time==17) return 1;
	if(time>=8&&time<=17) 
	{
	 return 2;
	}
}
int Testtime1(int time)
{
	if(Testtime(time)==0) return 0;
	if(Testtime(time)==1) return 0;
	if(Testtime(time)==2) return 1;
}
bool Testid_face(string id, char kt,int time)
{
 	if((Testid(id)==true)&&(Testface(kt)==true)&&(Testtime(time)==2) )return true;
	 else return false;	
}
int Testdays(int day)
{
	//int thu=0;
	if(day==2||day==4||day==6) return 1;
	else if(day==3||day==5||day==7||day==8) return 2;
}
int  Test_khung_muon(char muon)
{
 if(muon=='2') return true;
 else return false;	
}
bool  Test_khung_doc(char doc)
{
 if(doc=='1') return true;
 else return false;	
}
int Nhan_dang_su_co_khung_tiep_nhan(string id,char kt)
{
		if(Den_do(id,kt)==false) return 1;//khung tiep nhan loi tra ve 1
}

int Nhan_dang_su_co_khung_muon(int day,int time,char muon)
{
//	int khung=0;
	if(Testdays(day)==2 && Test_khung_muon(muon)==false&& Testtime(time)==2) return 2;//khung muon
}
int Nhan_dang_su_co_khung_doc(int day,int time,char doc)
{
	if(Testdays(day)==1 && Test_khung_doc(doc)==false&& Testtime(time)==2) return 3;//khung doc
}
int Nhan_dang_su_co_khung_gio(int time)
{
	if(Testtime(time)==0||Testtime(time)==1) return 4; //khung gio
}
bool TestFloor(char floor)
{
	if(floor=='1') return true;
	else return false;
}
bool TestArea(char area)
{
	if(area=='1') return true;
	else return false;
}
bool TestBook(char book)
{
	if(book=='1') return true;
	else return false;
}



main()
{
	string id; int day,lv,qh,qh1,svp,soluong;
	int time,sl=140,sl1=10,sl2=10,sl3=10,sl4=10,sl5=10,sl6=10,sl7=10,sl8=10,sl9=10,sl10=10,sl11=10,sl12=10,sl13=10,sl14=10;
	int demve = 0, ngaymuon;
	int temp_num2,temp_num1;
	int temp_num = 1;
	char kt,muon,doc,floor, area,book,chon,md,mt,mm, dd,chery,ts,mtr,vdt,hh,hh1,hh11,hh2,stt,cn,cn1;
	string dsm[500][3];
// Khai bao mang 2 chieu de chua 2 gia tri la ten sach va ma so sach
	cout<<"Kiem tra Y | N :";
	cin>>chon;
	if(chon=='Y'){
	do
	{
	
	 cout<<"\n==============================";
	 cout<<"\n1.Khong vao duoc thu vien";
	 cout<<"\n2.Khong muon duoc sach";
	 cout<<"\n3.Khong doc duoc sach";
	 cout<<"\n4.Khong tra duoc sach";
	 cout<<"\n5.Cap nhat ";
	 cout<<"\n==============================";
	 cout<<"\nVan de: "<< " ";
	 cin>>chery;
	 switch(chery)
	{
		case '1':
			{
				cout<<"Id (123_): ";//id dung se bat dau bang 123
			    cin>>id;
			    if(Testid(id)==true){
			    	cout<<"Khuon mat 1 | 0 : ";//test face dug nhan 1, sai nhan 0
				    cin>>kt;
				    if(Testface1(kt)==true){
				    		cout<<"Thoi gian den : ";
							cin>>time;
							if(Testtime1(time)==1){
								break;
							}
							else{
								cout<<"Sai khung gio :( ";
							}
					}
					else{
						cout<<"Loi nhan dien khuon mat :( ";
					}
				    
				}
				else{
					cout<<"Loi id!"<<endl;
					continue;
					
				}
				break;
			}
			
		case '2':
			{
				cout<<"Id (123_): ";//id dung se bat dau bang 123
			    cin>>id;
			    if(Testid(id)==true){
			    	cout<<"Khuon mat 1 | 0 : ";//test face dug nhan 1, sai nhan 0
				    cin>>kt;
				    if(Testface1(kt)==true){
				    		cout<<"Thoi gian den : ";
							cin>>time;
							if(Testtime1(time)==1){
									cout<<"Thu may ban den: ";  // nhap cac thu trong tuan
									cin>>day;
									if(Testdays(day)==1){
										cout<<"Dung tang 1 | 0 : ";
										cin>>floor; //dung nhan 1, sai nhan 0
										if(TestFloor(floor)==true){
												cout<<"Dung khu 1 | 0 : ";
												cin>>area;//dung nhan 1, sai nhan 0
												if(TestArea(area)==true){
													break;
												}
												else{
													cout<<"Sai khu :( (Nen xem so do thu vien truoc khi vao.... Are you OK!)";
												}
										}
										else{
											cout<<"Sai tang :( (Nen xem so do thu vien truoc khi vao.... Are you OK!)";
										}
									}
									else{
										cout<<"Ban den sai ngay";
									}
							}
							else{
								cout<<"Sai khung gio :( ";
							}
					}
					else{
						cout<<"Loi nhan dien khuon mat :( ";
					}
				    
				}
				else{
					cout<<"Loi id ! "<<endl;
					continue;
				}
				break;
			}
		case '3':
			{
				cout<<"Id (123_): ";//id dung se bat dau bang 123
			    cin>>id;
			    if(Testid(id)==true){
			    	cout<<"Khuon mat 1 | 0 : ";//test face dug nhan 1, sai nhan 0
				    cin>>kt;
				    if(Testface1(kt)==true){
				    		cout<<"Thoi gian den : ";
							cin>>time;
							if(Testtime1(time)==1){
									cout<<"Ngay den: ";  // nhap cac thu trong tuan
									cin>>day;
									if(Testdays(day)==1){
										cout<<"Dung tang 1 | 0 : ";
										cin>>floor; //dung nhan 1, sai nhan 0
										if(TestFloor(floor)==true){
												cout<<"Dung khu 1 | 0 : ";
												cin>>area;//dung nhan 1, sai nhan 0
												if(TestArea(area)==true){
													
													 	cout<<"Muon sach Y | N ";
													 	cin>>mm;
													 	cout<<"Chon linh vuc: ";
													 		while(mm != 'N')
															{
																 cout<<"\n==============================";
																 cout<<"\n1.Cac tac pham van hoc";
																 cout<<"\n2.Cac tac pham truyen thong dai chung";
																 cout<<"\n3.Triet hoc - Ton giao - Tam ly";
																 cout<<"\n4.Lich su";
																 cout<<"\n5.Dia ly va Nhan loai hoc";
																 cout<<"\n6.Khoa hoc - Chinh tri";
																 cout<<"\n7.Luat";
																 cout<<"\n8.Nghe thuat";
																 cout<<"\n9.Ngon ngu va ngon ngu hoc";
																 cout<<"\n10.Khoa hoc va toan hoc";
																 cout<<"\n11.Y te";
																 cout<<"\n12.Nong nghiep";
																 cout<<"\n13.Cong nghiep";
																 cout<<"\n14.Cong nghe";
																 cout<<"\n==============================";
																 cout<<"\nBan muon muon sach linh vuc nao ?";
																 cin>>lv;
															 switch(lv)
																{
																	case 1:
																		cout<<" Neu muon muon: 1 | Khong muon: 0" <<endl;
																		cin>>md;
																		if(md=='1'){
																			if(sl1>0){
																				cout<<"Muon sach thanh cong! :) (Thich muon muon, khong thich muon muon)"<<endl;	
																				sl1 -= 1;
																				cout<<"Doc 1 | Mang ve 0  :";
																				cin>>dd;
																				if(dd=='1') {
																					cout<<"Den khu vuc doc theo so do phan chia trong thu vien :)"<<endl;
																				} else {
																					demve = 1;
																				}
																				cout << "Neu muon tiep tuc: Y | N : "<<endl;
																				cin >> mt;
																				if(mt =='Y'){
																					continue;
																				}
																				else {
																					mm='N';
																					break;
																				}
																			} 
																			else {
																				cout<<"Het sach! :( "<<endl<<"Hay thu linh vuc khac!!!";
																				continue;
																			}
																			
																			}
																		else {
																			break;
																		}
																		break;
														case 2:
															cout<<" Neu muon muon: 1 | Khong muon: 0" <<endl;
															cin>>md;
															if(md=='1'){
																if(sl2>0){
																	cout<<"Muon sach thanh cong! :) (Thich muon muon, khong thich muon muon)"<<endl;	
																	sl2 -= 1;
																	cout<<"Doc 1 | Mang ve 0  :";
																	cin>>dd;
																	if(dd=='1') {
																		cout<<"Den khu vuc doc theo so do phan chia trong thu vien :)"<<endl;
																	} else {
																		demve = 1;
																	}
																	cout << "Neu muon tiep tuc: Y | N : "<<endl;
																	cin >> mt;
																	if(mt =='Y') {
																		continue;
																	} else {
																				mm='N';
																				break;
																			}
																} else {
																	cout<<"Het sach! :( "<<endl<<"Hay thu linh vuc khac!!!";
																	continue;
																	}
																			
															} else {
																break;
															}
														break;	
													case 3:	
														cout<<" Neu muon muon: 1 | Khong muon: 0" <<endl;
															cin>>md;
															if(md=='1'){
																if(sl3>0){
																	cout<<"Muon sach thanh cong! :) (Thich muon muon, khong thich muon muon)"<<endl;	
																	sl3 -= 1;
																	cout<<"Doc 1 | Mang ve 0  :";
																	cin>>dd;
																	if(dd=='1') {
																		cout<<"Den khu vuc doc theo so do phan chia trong thu vien :)"<<endl;
																		demve = 0;
																	} else {
																		demve = 1;
																	}
																	cout << "Neu muon tiep tuc: Y | N : "<<endl;
																	cin >> mt;
																	if(mt =='Y') {
																		continue;
																	} else {
																		mm='N';
																		break;
																	}
																} else {
																	cout<<"Het sach! :( "<<endl<<"Hay thu linh vuc khac!!!";
																	continue;
																	}
																			
															} else {
																break;
															}
														break;
													case 4:
														cout<<" Neu muon muon: 1 | Khong muon: 0" <<endl;
														cin>>md;
														if(md=='1'){
															if(sl4>0){
																cout<<"Muon sach thanh cong! :) (Thich muon muon, khong thich muon muon)"<<endl;	
																sl4 -= 1;
																cout<<"Doc 1 | Mang ve 0  :";
																cin>>dd;
																if(dd=='1') {
																	cout<<"Den khu vuc doc theo so do phan chia trong thu vien :)"<<endl;
																	demve = 0;
																} else {
																	demve = 1;
																}
																cout << "Neu muon tiep tuc: Y | N : "<<endl;
																cin >> mt;
																if(mt =='Y') {
																	continue;
																} else {
																	mm='N';
																	break;
																}
															} else {
																cout<<"Het sach! :( "<<endl<<"Hay thu linh vuc khac!!!";
																continue;
																}
																		
														} else {
															break;
														}
														break;
													case 5:
														cout<<" Neu muon muon: 1 | Khong muon: 0" <<endl;
														cin>>md;
														if(md=='1'){
															if(sl5>0){
																cout<<"Muon sach thanh cong! :) (Thich muon muon, khong thich muon muon)"<<endl;	
																sl5 -= 1;
																cout<<"Doc 1 | Mang ve 0  :";
																cin>>dd;
																if(dd=='1') {
																	cout<<"Den khu vuc doc theo so do phan chia trong thu vien :)"<<endl;
																	demve = 0;
																} else {
																	demve = 1;
																}
																cout << "Neu muon tiep tuc: Y | N : "<<endl;
																cin >> mt;
																if(mt =='Y') {
																	continue;
																} else {
																	mm='N';
																	break;
																}
															} else {
																cout<<"Het sach! :( "<<endl<<"Hay thu linh vuc khac!!!";
																continue;
																}
																		
														} else {
															break;
														}
														break;
													case 6:
														cout<<" Neu muon muon: 1 | Khong muon: 0" <<endl;
														cin>>md;
														if(md=='1'){
															if(sl6>0){
																cout<<"Muon sach thanh cong! :) (Thich muon muon, khong thich muon muon)"<<endl;	
																sl6 -= 1;
																cout<<"Doc 1 | Mang ve 0  :";
																cin>>dd;
																if(dd=='1') {
																	cout<<"Den khu vuc doc theo so do phan chia trong thu vien :)"<<endl;
																	demve = 0;
																} else {
																	demve = 1;
																}
																cout << "Neu muon tiep tuc: Y | N : "<<endl;
																cin >> mt;
																if(mt =='Y') {
																	continue;
																} else {
																	mm='N';
																	break;
																}
															} else {
																cout<<"Het sach! :( "<<endl<<"Hay thu linh vuc khac!!!";
																continue;
																}
																		
														} else {
															break;
														}
														break;
													case 7:
															cout<<" Neu muon muon: 1 | Khong muon: 0" <<endl;
														cin>>md;
														if(md=='1'){
															if(sl7>0){
																cout<<"Muon sach thanh cong! :) (Thich muon muon, khong thich muon muon)"<<endl;	
																sl7 -= 1;
																cout<<"Doc 1 | Mang ve 0  :";
																cin>>dd;
																if(dd=='1') {
																	cout<<"Den khu vuc doc theo so do phan chia trong thu vien :)"<<endl;
																	demve = 0;
																} else {
																	demve = 1;
																}
																cout << "Neu muon tiep tuc: Y | N : "<<endl;
																cin >> mt;
																if(mt =='Y') {
																	continue;
																} else {
																	mm='N';
																	break;
																}
															} else {
																cout<<"Het sach! :( "<<endl<<"Hay thu linh vuc khac!!!";
																continue;
																}
																		
														} else {
															break;
														}
														break;
													case 8:
														cout<<" Neu muon muon: 1 | Khong muon: 0" <<endl;
														cin>>md;
														if(md=='1'){
															if(sl8>0){
																cout<<"Muon sach thanh cong! :) (Thich muon muon, khong thich muon muon)"<<endl;	
																sl8 -= 1;
																cout<<"Doc 1 | Mang ve 0  :";
																cin>>dd;
																if(dd=='1') {
																	cout<<"Den khu vuc doc theo so do phan chia trong thu vien :)"<<endl;
																	demve = 0;
																} else {
																	demve = 1;
																}
																cout << "Neu muon tiep tuc: Y | N : "<<endl;
																cin >> mt;
																if(mt =='Y') {
																	continue;
																} else {
																	mm='N';
																	break;
																}
															} else {
																cout<<"Het sach! :( "<<endl<<"Hay thu linh vuc khac!!!";
																continue;
																}
																		
														} else {
															break;
														}
														break;
													case 9:
														cout<<" Neu muon muon: 1 | Khong muon: 0" <<endl;
														cin>>md;
														if(md=='1'){
															if(sl9>0){
																cout<<"Muon sach thanh cong! :) (Thich muon muon, khong thich muon muon)"<<endl;	
																sl9 -= 1;
																cout<<"Doc 1 | Mang ve 0  :";
																cin>>dd;
																if(dd=='1') {
																	cout<<"Den khu vuc doc theo so do phan chia trong thu vien :)"<<endl;
																	demve = 0;
																} else {
																	demve = 1;
																}
																cout << "Neu muon tiep tuc: Y | N : "<<endl;
																cin >> mt;
																if(mt =='Y') {
																	continue;
																} else {
																	mm='N';
																	break;
																}
															} else {
																cout<<"Het sach! :( "<<endl<<"Hay thu linh vuc khac!!!";
																continue;
																}
																		
														} else {
															break;
														}
														break;
													case 10: {
														cout<<" Neu muon muon 1 | Khong muon 0 : " ;
														cin>>md;
														if(md=='1'){
															if(sl10>0){
																cout<<endl<<"Muon sach thanh cong! :) (Thich muon muon, khong thich muon muon)"<<endl;	
																sl10 -= 1;
																cout<<"Doc 1 | Mang ve 0  :";
																cin>>dd;
																if(dd=='1') {
																	cout<<"Den khu vuc doc theo so do phan chia trong thu vien :)"<<endl;
																	demve = 0;
																} else {
																	demve = 1;
																}
																cout << "Neu muon tiep tuc: Y | N : "<<endl;
																cin >> mt;
																if(mt =='Y') {
																	continue;
																} else {
																	mm='N';
																	break;
																}
															} else {
																cout<<"Het sach! :( "<<endl<<"Hay thu linh vuc khac!!!";
																continue;
																}
																		
														} else {
															break;
														}
														break;
													}
													case 11:
														cout<<" Neu muon muon: 1 | Khong muon: 0" <<endl;
														cin>>md;
														if(md=='1'){
															if(sl11>0){
																cout<<"Muon sach thanh cong! :) (Thich muon muon, khong thich muon muon)"<<endl;	
																sl11 -= 1;
																cout<<"Doc 1 | Mang ve 0  :";
																cin>>dd;
																if(dd=='1') {
																	cout<<"Den khu vuc doc theo so do phan chia trong thu vien :)"<<endl;
																	demve = 0;
																} else {
																	demve = 1;
																}
																cout << "Neu muon tiep tuc: Y | N : "<<endl;
																cin >> mt;
																if(mt =='Y') {
																	continue;
																} else {
																	mm='N';
																	break;
																}
															} else {
																cout<<"Het sach! :( "<<endl<<"Hay thu linh vuc khac!!!";
																continue;
																}
																		
														} else {
															break;
														}
														break;
													case 12:
														cout<<" Neu muon muon: 1 | Khong muon: 0" <<endl;
														cin>>md;
														if(md=='1'){
															if(sl12>0){
																cout<<"Muon sach thanh cong! :) (Thich muon muon, khong thich muon muon)"<<endl;	
																sl12 -= 1;
																cout<<"Doc 1 | Mang ve 0  :";
																cin>>dd;
																if(dd=='1') {
																	cout<<"Den khu vuc doc theo so do phan chia trong thu vien :)"<<endl;
																	demve = 0;
																} else {
																	demve = 1;
																}
																cout << "Neu muon tiep tuc: Y | N : "<<endl;
																cin >> mt;
																if(mt =='Y') {
																	continue;
																} else {
																	mm='N';
																	break;
																}
															} else {
																cout<<"Het sach! :( "<<endl<<"Hay thu linh vuc khac!!!";
																continue;
																}
																		
														} else {
															break;
														}
														break;
													case 13:
														cout<<" Neu muon muon: 1 | Khong muon: 0" <<endl;
														cin>>md;
														if(md=='1'){
															if(sl13>0){
																cout<<"Muon sach thanh cong! :) (Thich muon muon, khong thich muon muon)"<<endl;	
																sl13 -= 1;
																cout<<"Doc 1 | Mang ve 0  :";
																cin>>dd;
																if(dd=='1') {
																	cout<<"Den khu vuc doc theo so do phan chia trong thu vien :)"<<endl;
																	demve = 0;
																} else {
																	demve = 1;
																}
																cout << "Neu muon tiep tuc: Y | N : "<<endl;
																cin >> mt;
																if(mt =='Y') {
																	continue;
																} else {
																	mm='N';
																	break;
																}
															} else {
																cout<<"Het sach! :( "<<endl<<"Hay thu linh vuc khac!!!";
																continue;
																}
																		
														} else {
															break;
														}
														break;
													case 14:
														cout<<" Neu muon muon: 1 | Khong muon: 0" <<endl;
														cin>>md;
														if(md=='1'){
															if(sl14>0){
																cout<<"Muon sach thanh cong! :) (Thich muon muon, khong thich muon muon)"<<endl;	
																sl14 -= 1;
																cout<<"Doc 1 | Mang ve 0  :";
																cin>>dd;
																if(dd=='1') {
																	cout<<"Den khu vuc doc theo so do phan chia trong thu vien :)"<<endl;
																	demve = 0;
																} else {
																	demve = 1;
																}
																cout << "Neu muon tiep tuc: Y | N : "<<endl;
																cin >> mt;
																if(mt =='Y') {
																	continue;
																} else {
																	mm='N';
																	break;
																}
															} else {
																cout<<"Het sach! :( "<<endl<<"Hay thu linh vuc khac!!!";
																continue;
																}
																		
														} else {
															break;
														}
														break;
													default: {
														cout<<"Nen lua chon theo danh sach! Thank you. ";
														continue;
													}
												}
											} 
										} else {
											cout<<"Sai khu :( (Nen xem so do thu vien truoc khi vao.... Are you OK!)";
										}
									} else{
											cout<<"Sai tang :( (Nen xem so do thu vien truoc khi vao.... Are you OK!)";
									  	}
								} else{
										cout<<"Ban den sai ngay";
								}
						} else{
								cout<<"Sai khung gio :( ";
					}
				} else{
						cout<<"Loi nhan dien khuon mat :( ";
					}
				    
			} else {
					cout<<"Loi id ! "<<endl;
					continue;	
				}
				break;		
			}
    		break;
    	case '4': 
    			{
				cout<<"Id (123_): ";//id dung se bat dau bang 123
			    cin>>id;
			    if(Testid(id)==true){
			    	cout<<"Khuon mat 1 | 0 : ";//test face dug nhan 1, sai nhan 0
				    cin>>kt;
				    if(Testface1(kt)==true){
				    		cout<<"Thoi gian den : ";
							cin>>time;
							if(Testtime1(time)==1){
								cout<<"Muon tra 1 | 0 :"<<endl;
								cin>>mtr;
								while(mtr == '1'){
									 cout<<"\n==============================";
									 cout<<"\n1.Khong dung id sach";
									 cout<<"\n2.Sach bi hu hong";
									 cout<<"\n3.Tra sach qua thoi gian quy dinh";
									 cout<<"\n==============================";
									 cout<<"\nVan de: "<< " ";
									 cin>>vdt;
								switch(vdt){
									case '1':
										cout<<"Id sach (123_): ";
										cin>>id;
										if(Testid(id)==true){
											cout<<"Dung Id";
											break;
										}
										else{
											cout<<"Sai Id";
											continue;
										}
										break;
									case '2':
										 cout<<"Muc do hu hong:  ";
										 cout<<"\n==============================";
										 cout<<"\n1.Hu hong nhe";
										 cout<<"\n2.Hu hong nang";
										 cout<<"\n==============================";
										 cout<<"\nVan de: "<< " ";
										 cin>>hh1;
										switch(hh1){
											case '1':
												cout<<"So lan vi pham: ";
												cin>>svp;
												if(svp<=2)
												{
												 cout<<"\n==============================";
												 cout<<"\n1.Sach ban";
												 cout<<"\n2.Sach rach(<15%)suong suong :( ahihi";
												 cout<<"\n==============================";
												 cout<<"\nVan de: "<< " ";
												 cin>>hh11;
												 switch(hh11){
												 	case '1':
												 		cout<<"Bi phat: 30.000d";
												 		break;
												 	case '2':
												 		cout<<"Bi phat: 50.000d";
												 		break;
												 }
												}
												else if(svp<5){
												 cout<<"\n==============================";
												 cout<<"\n1.Sach ban";
												 cout<<"\n2.Sach rach(<15%)suong suong :( ahihi";
												 cout<<"\n==============================";
												 cout<<"\nVan de: "<< " ";
												 cin>>hh11;
												 switch(hh11){
												 	case '1':
												 		cout<<"Bi phat: 30.000d + 20.000d";
												 		break;
												 	case '2':
												 		cout<<"Bi phat: 50.000d  + 30.000d";
												 		break;
												 }
												}
												else {
													cout<<"Khong duoc muon sach trong ki tiep theo :(";
													break;
												}
												
												 break;
											case '2':
												 cout<<"So lan vi pham: ";
												 cin>>svp;
												 if(svp<=2){
												 	 cout<<"\n==============================";
													 cout<<"\n1.Bi rach (15% - 35%)";
													 cout<<"\n2.Bi rach (>35%)";
													 cout<<"\n==============================";
													 cout<<"\nVan de: "<< " ";
													 cin>>hh2;
													 switch(hh2){
													 	case '1':
													 		cout<<"Bi phat: 150.000d +100.000d";
													 		break;
													 	case '2':
													 		cout<<"Khong duoc muon them sach trong ki hien tai. ";
													 		break;
													 }
												 }
												 else if(svp<4){
												 	 cout<<"\n==============================";
													 cout<<"\n1.Bi rach (15% - 35%)";
													 cout<<"\n2.Bi rach (>35%)";
													 cout<<"\n==============================";
													 cout<<"\nVan de: "<< " ";
													 cin>>hh2;
													 switch(hh2){
													 	case '1':
													 		cout<<"Bi phat: 150.000d + 200.000d ";
													 		cout<<endl<<"Khong duoc muon sach trong ki tiep theo.";
													 		break;
													 	case '2':
													 		cout<<"Khong duoc muon sach trong vong 1 nam ";
													 		break;
												 }
												 }
												 else{
												 	cout<<"Chan the!:(";
												 }
												
												 break;
												
											
										}
										break;
									case '3':
										cout<<"Tinh trang sach binh thuong  1 | 0 : ";
										cin>>stt;
										if(stt=='1'){
											cout<<"Qua han bao nhieu ngay:  ";
											cin>>qh;
											if(qh<=7){
												cout<<"Bi phat: Canh cao!";
											}
											else if(qh<=14 ){
												cout<<"Bi phat: 10k/1 cuon";
											}
											else {
												cout<<"Bi phat: Khong duoc muon sach trong ki tiep theo ";
											}
											break;
										} else {
											cout<<"Quay ve buoc 2 de xet hinh phat cu the cho tung truong hop sach hong. :)";
											break;
										}
								}
							}
						}
							else{
								cout<<"Sai khung gio :( ";
							}
					}
					else{
						cout<<"Loi nhan dien khuon mat :( ";
					}
				    
				}
				else{
					cout<<"Loi id!"<<endl;
					continue;
					
				}
				
				break;
			}
			 break;	
		case '5':
			{
				cout<<"Cap nhat 1 | 0 : ";
				cin>>cn;
				if(cn == '1'){
					 cout<<"\n==============================";
					 cout<<"\n1.Cap nhat dau sach moi.";
					 cout<<"\n2.Cap nhat so luong sach con trong thu vien.";
					 cout<<"\n==============================";
					 cout<<"\nVan de: "<< " ";
					 cin>>cn1;
					 switch(cn1){
					 	case '1':
					 		for (int i = 0;i<500;i++){				
					 			if (dsm[i][0] != ""){
					 				temp_num++;
					 			};
					 		}; 
					 		// Kiem tra so luong sach hien co trong co so du lieu
					 		cout<<"So dau sach moi nhap vao: ";
					 		cin>>soluong;
					 		//Nhap so luong sach can cap nhat
					 		temp_num2 = temp_num + soluong;
					 		for (int j = temp_num;j < temp_num2;j++){
					 				cout<<"Nhap ma so cuon sach thu "<<j<<": ";
					 				cin>>dsm[j][0];
					 				cout<<"\nNhap ten cuon sach thu "<<j<<": ";
					 				cin>>dsm[j][1];
					 				//Nhap du lieu
					 			};
					 		break;
					 	case '2':
					 		int dem = 0;
					 		for (int i = 0;i<500;i++){
					 			if (dsm[i][0].empty()){
					 				dem++;
					 			}; //Dem so phan tu rong trong mang
					 		};
					 		int remain = 500;
					 		remain = remain - dem; //So sach co trong database chinh la so luong phan tu co chua gia tri trong mang
					 		cout<<"So dau sach trong thu vien la "<<remain;
					 		break;
					 }
				}
			}
			break;
		}
			
} while(chon!='N');
	
}
}
