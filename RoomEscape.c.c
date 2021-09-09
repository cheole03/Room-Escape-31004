#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

char name[30];

//방 1 
int choise();
int bed();
int cloth();
int books();
int ref();
int gate();
int safe();

int ref_check = FALSE;

int clonum;
int booknum;

int passnum;

int bed_check;

int keyh = FALSE;
int keyb = FALSE;

int key = FALSE;

int dropbook = FALSE;

int check = 0;

//방 2

int room2_safe();
int safe_key = FALSE;

int sofa();
int hammer = FALSE;
int sofa_check = FALSE;

int room_2 = FALSE;

int choise_2(); 

int table();
int wood_piece = FALSE;

int chair();
int chair_check = FALSE;
int riter = FALSE;

int capet();
int capet_check = FALSE; 

int iron_panel();
int iron_mold = FALSE; 

int gate2();

int driverb = FALSE;
int driverh = FALSE;
int driver = FALSE;

int main(){
	
	system ("color 0f");
	int menu;
	
	srand(time(NULL));
	
	clonum = (rand()%9000) + 1000;
	booknum = (rand()%9000) + 1000;
	
	passnum = (clonum * 10000) + booknum;
	
	printf("당신의 이름은 무엇인가? : ");
	scanf("%s", name);
	
	printf("이름을 %s로 설정하였습니다.\n", name);
	sleep(1);
	printf("곧 게임이 시작됩니다.");
	sleep(4);
	system("cls");
	
	sleep(3);
	printf("1991년 12월 26일 나는 방과 후 친구들과 매점에 갔다.\n");
	sleep(3);
	printf("매점에 있는 TV에서 소련이 붕괴되었다는 뉴스가 나오고 있었다.\n");
	sleep(3);
	printf("매점을 나가면서 미끄러졌고 눈앞이 캄캄해졌다.\n");
	sleep(3);
	printf("일어나보니 어딘지도 알 수 없는 방에 갇혀 있다.\n");
	sleep(3);
	system("cls");
	printf("\"안은 생각보다 깨끗하네.\"\t-아오오니 대사\n");
	sleep(3);
	printf("[%s]: 방 구조를 보니 방이 원룸이네..", name);
	sleep(3);
	
	choise();	
}

int choise(){
	
	int menu;
	
	while(TRUE){
		if(keyh == TRUE && keyb == TRUE && key == FALSE && room_2 == FALSE){
			system("cls");
			printf("둘이 합치면 열쇠로 될 것 같다.\n");
			sleep(3);
			system("cls");
			printf("열쇠를 얻었다.\n");
			keyh = FALSE;
			keyb = FALSE;
			key = TRUE;
			sleep(3);			
		}
		system("cls");
		printf("방을 둘러보자.\n");
		printf("1. 침대\n2. 옷장\n3. 책장\n4. 냉장고\n5. 출입문\n6. 금고\n");
		if(dropbook == TRUE){
			printf("7. 공책\n");
		}
		printf("자 어디를 확인할까?\n");
		scanf("%d", &menu);
		
		switch(menu){
			//침대 
			case 1:
				bed();
				break;
			//옷장
			case 2:
				cloth();
				break;
			
			// 책장 
			case 3:
				books();
				break;

			//냉장고 
			case 4:
				ref();
				break;
				
			//출입문 
			case 5:
				if(room_2== TRUE){
					choise_2();
				}
				gate();
				break;
			//금고 
			case 6:
				if(safe_key == TRUE) room2_safe();
				safe();
				break;
				
			//공책 
			case 7:
				if(dropbook == FALSE){
					system("cls");
					printf("입력오류");
					sleep(3);
					choise();
				}
				else{
					system("cls"); 
					printf("공책을 확인했다.\n");
					sleep(1);
					printf("Mikhail Gorbachev(미하일 고르바초프) 출생: 19310302 \n");
					sleep(5);
				}
			default:
				system("cls");
				printf("입력오류");
				sleep(3);
				break;
		}
	}
	
}

int bed(){
	int menu;
	int password;
	while(TRUE){
		system("cls");
		printf("0. 나가기\n1. 침대위\n2. 침대밑\n");
		scanf("%d", &menu);
		switch(menu){
			case 0:
				choise();
				break;
			case 1:
				system("cls");
				printf("이불과 베개에도 아무것도 없다.\n");
				sleep(3);
				break; 
			case 2:
				system("cls");
				if(bed_check == TRUE){
					printf("침대밑에는 아무것도 없다.");
					sleep(3);
					choise();
				}
				printf("서류가방이 있다. 잠금장치가 있는데?.\n1. 연다\n0. 그냥둔다.\n");
				scanf("%d", &menu);
				if(menu == 1){
					printf("비밀번호 입력: ");
					scanf("%d", &password);
					if(password == passnum){
						system("cls");
						printf("쇳 조각을 얻었다.");
						keyh = TRUE;
						bed_check = TRUE;
						sleep(3);
						choise();
						break;
					}
					else{
						system("cls");
						printf("비밀번호가 틀린거 같다.");
						sleep(3);
						choise();
					}
				}
				else if(menu == 0){
					choise();
				}
			default:
				system("cls");
				printf("입력오류");
				sleep(3);
				break;
			}
	}
}

int cloth(){
	int menu;
	system("cls");
	printf("1. 정장\n2. 티셔츠\n");
	scanf("%d", &menu);
	if(menu == 1){
		system("cls");
		printf("깨끗한 정장이다.");
		sleep(5);
		choise();
	}
	else if(menu == 2){
		system("cls");
		printf("티셔츠에 SOVIET %d라고 써져있다.", clonum);
		sleep(5);
		choise();
	}
	else{
		system("cls");
		printf("입력오류");
		sleep(3);
		choise();
	}
}

int books(){
	system("cls");
	printf("책 두권이 꽂혀있다.\n");
	sleep(3);
	printf("책 제목이 보이지 않는다..대충 8글자인거같네..\n");
	sleep(3);
	printf("메모가 적혀있다. ****%d\n", booknum);
	sleep(5);
	choise();
}

int ref(){
	int menu;
	
	while(TRUE){
		system("cls");
		printf("냉장실과 냉동실이 있다.\n");
		printf("0. 나가기\n1. 냉장실\n2. 냉동실\n");
		scanf("%d", &menu);
		switch(menu){
			case 0:
				choise();
				break;
			case 1:
				system("cls");
				printf("콜라와 물이 있다.\n둘다 오래되어 보인다.");
				sleep(3);
				break;
			case 2:
				if(ref_check == TRUE){
					system("cls");
					printf("아무것도 없다.");
					sleep(3);
					choise();
					break;
				}
				system("cls");
				printf("알 수 없는 상자가 있다.\n");
				sleep(3);
				printf("0.나간다\n1.연다\n");
				scanf("%d", &menu);
				if(menu == 1){
					system("cls");
					printf("원반을 얻었다.");
					keyb = TRUE;
					sleep(3);
					ref_check = TRUE;
					choise();
				}
				else{
					printf("입력오류\n");
					sleep(3);
					break;
				}
			default:
				printf("입력오류");
				break;
		}
	}
}
int gate(){
	int password;
	system("cls");
	printf("잠금장치가 있다.\n");
	printf("비밀번호 입력: ");
	scanf("%d", &password);
	if(password == 19310302){
		system("cls");
		printf("나는 기대하는 마음을 품은채 문을 열고 걸었지만.\n");
		sleep(3);
		system("cls");
		printf("다음방으로 이어진 통로였다.\n");
		sleep(3);
		system("cls && color 0f");
		printf("[%s] 절망만 할 수 없지. 다음방을 둘러보자.", name);
		room_2 = TRUE;
		sleep(3);
		choise_2();
	}
	else{
		system("cls");
		printf("비밀번호가 틀린거 같다.\n");
		sleep(3);
		choise();
		
	}
}

int safe(){
	int menu;
	
	while(TRUE){
		system("cls");
		if(dropbook == TRUE){
			printf("이미 텅 비어있는 금고다. 더 이상 없는거 같다.\n");
			sleep(3); 
			choise();
		} 
		printf("금고가 있다.\n");
		printf("0. 나가기\n1. 연다\n2. 때려본다\n");
		scanf("%d", &menu);
		switch(menu){
			case 0:
				choise();
			case 1:
				if(key == TRUE){
					system("cls");
					printf("열쇠로 금고를 열었다.\n");
					sleep(3);
					printf("공책을 얻었다.\n공책을 확인 하였다.\n");
					sleep(3);
					printf("Mikhail Gorbachev(미하일 고르바초프) 출생: 19310302 \n");
					sleep(5);
					dropbook = TRUE;
					choise();
				}
				else{
					system("cls");
					printf("열쇠가 필요하다.");
					sleep(3);
					choise();
					break;
				}
			case 2:
				system("cls");
				printf("단단한 철로 되어있다.\n손이 너무 아프다.");
				sleep(3);
				break;
			default:
				system("cls");
				printf("입력오류");
				sleep(3);
				break; 
		}
	}
}

int choise_2(){
	int menu;
	if(keyb == TRUE && iron_mold == TRUE && hammer == TRUE && driver == FALSE){
		printf("쇳조각을 틀에 넣고 망치로 찍어 누르니 -드라이버 심을 얻었다.\n");
		driverb = TRUE;
		keyb = FALSE;
		sleep(3);
	}
	if(driverb == TRUE && driverh == TRUE){
		printf("드라이버 심과 드라이버 손잡이를 합쳤다.\n");
		sleep(3);
		system("cls"); 
		printf("- 드라이버를 얻었다.");
		driverh = FALSE;
		driverb = FALSE;
		driver = TRUE;
		sleep(3);
	}
	while(TRUE){
		system("cls");
		printf("방을 둘러보자.\n");
		printf("0. 이전 방\n1. 소파\n2. 식탁\n3. 의자\n4. 카펫\n5. 철판\n");
		printf("자 어디를 확인할까? \n");
		
		scanf("%d", &menu);
		
		switch(menu){
			//소파
			case 1:
				sofa();
				break;
			
			//식탁 
			case 2:
				table();
				break;
				
			//의자 
			case 3:
				if(chair_check == TRUE){
					system("cls");
					printf("의자는 더 이상 볼게 없다.\n");
					sleep(3);
					break;
				}
				chair();
			//카펫 
			case 4:
				capet();
				break;
			
			//철판 
			case 5:
				iron_panel();
				break; 
			//이전방 
			case 0:
				choise();
				break;
			
			//입력오류 
			default:
				printf("입력오류");
				sleep(3);
				break;
		}
	}
}

int capet(){
	system("cls"); 
	if(capet_check == FALSE){
		printf("카펫을 확인해 보았다.\n");
		sleep(3);
		printf("왠지 모를 위화감이 느껴진다.\n");
		sleep(3);
		printf("카펫을 들췄더니 원형 홈이 있다.\n");
		sleep(3);
		printf("이 크기를 봐선.. 금고열쇠 머리부분과 크기가 똑같은데?\n");
		sleep(3);
		printf("다시 금고로 가서 열쇠를 가져오자.\n");
		sleep(3);
		safe_key = TRUE;
		capet_check = TRUE;
		choise_2();
	}
	printf("원형 홈이 있다.\n");
	if(keyh == TRUE){
		system("cls");
		printf("원반이 홈에 딱 끼워졌다.\n");
		sleep(3);
		printf("금속 틀을 얻었다.");
		iron_mold = TRUE;
		keyh = FALSE;
		sleep(3);
		choise_2();
		
		
	}
	else{
		system("cls");
		printf("아무것도 할 수 없다.\n");
		sleep(3);
		choise_2();
	}
}

int room2_safe(){
	system("cls");
	printf("금고에 있는 열쇠를 챙겼다.\n");
	sleep(3);
	printf("열쇠를 분리하였다.\n쇳 조각과 원반을 얻었다.\n");
	sleep(3);
	keyh = TRUE;
	keyb = TRUE;
	key = FALSE;
	safe_key = FALSE;
	choise();
}

int sofa(){
	int menu;
	if(sofa_check == TRUE){
		system("cls");
		printf("엉망으로 된 쇼파다.");
		sleep(3);
		choise_2();
	}
	while(TRUE){
		system("cls");
		printf("소파가 있다.\n");
		printf("1. 찢는다\n2. 옮긴다\n");
		scanf("%d", &menu);
		
		switch(menu){
			case 1:
				system("cls");
				printf("찢었더니 솜털밖에 없다.\n");
				sleep(3);
				break;
			case 2:
				system("cls");
				printf("소파가 있던 자리에 망치가 있다.\n");
				sleep(3);
				printf("망치를 얻었다.\n");
				sleep(3);
				hammer = TRUE;
				sofa_check = TRUE;
				choise_2();
				break;
			defaul:
				system("cls");
				printf("입력오류");
				sleep(3);
				break;
		}
	}
}

int table(){
	int menu;
	system("cls");
	if(driverh == TRUE && wood_piece == TRUE){
		printf("어질러진 식탁밖에 없다.");
		sleep(3);
		choise_2();
	}
	
	while(TRUE){
		
		system("cls");
		
		printf("식탁 위에는 화분과 양초가 있다.\n");
		printf("1. 화분을 부순다\n2. 양초를 태운다\n");
		scanf("%d", &menu);
		switch(menu){
			case 1:
				system("cls");
				if(wood_piece == TRUE){
					printf("이미 깨져있다.");
					sleep(3);
					choise_2();
				}
				printf("화분을 부쉈더니 나무조각이 나왔다.\n");
				sleep(3);
				printf("나무조각을 얻었다.\n");
				wood_piece = TRUE;
				break;
				
			case 2:
				if(riter == TRUE){
					printf("양초에 불을 붙였다.\n");
					sleep(3);
					printf("양초가 다 녹으니 무언가 보인다.\n");
					sleep(3);
					printf("드라이버 손잡이를 얻었다.\n");
					driverh = TRUE;
					sleep(3);
					choise_2();
				}
				else{
					printf("라이터가 없네.");
					sleep(3);
					choise_2();
				}
			default:
				system("cls");
				printf("입력오류");
				sleep(3);
				choise_2();
				break;
		}
	}
} 

int chair(){
	int menu;
	system("cls");
	printf("의자가 있다.");
	while(TRUE){
		system("cls");
		printf("1. 위를 찢는다.\n2. 아래를 살핀다\n");
		scanf("%d", &menu);
		switch(menu){
			case 1:
				system("cls");
				printf("아무것도 없다.\n");
				sleep(3);
				break;
			case 2:
				system("cls");
				printf("의자 밑에 홈이 있다.\n");
				if(wood_piece == TRUE){
					system("cls");
					printf("나무조각을 넣었다.\n");
					sleep(3);
					printf("라이터를 얻었다.");
					riter = TRUE;
					chair_check = TRUE;
					sleep(3);
					choise_2();
				}
				else{
					system("cls");
					printf("이대로는 아무것도 할 수 없다.\n");
					sleep(3);
					choise_2();
					break;
				}
			default:
				printf("입력오류");
				break;
		}
	}
}

int iron_panel(){
	system("cls");
	printf("나사로 단단히 고정되어 있다.\n");
	if(driver == TRUE){
		printf("드라이버로 철판을 떼어냈다.\n");
		sleep(3);
		printf("[&s]안에 버튼같은게 있는데?\n", name);
		sleep(3);
		printf("버튼을 눌렀다.");
		sleep(3);
		system("cls");
		printf("버튼을 누르자 천장이 무너졌다.");
		sleep(3);
		system("cls");
		printf("나는 재빨리 식탁밑으로 숨었고, 다행이 크게 다치친 않았다.");
		sleep(3);
		system("cls");
		printf("천장이 한쪽만 무너진 덕에 경사가 생겼다.");
		sleep(3);
		system("cls");
		printf("나는 그 위로 올라갔고 마침내 밖으로 나올 수 있었다.");
		sleep(3);
		system("cls");
		printf("나는 아직도 왜 그 방에 갇힌지는 모른다.");
		sleep(3);
		system("cls"); 
		printf("THE END");
		return 0; 
	}
	else{
		system("cls");
		printf("드라이버를 챙겨오자.");
		sleep(3);
		choise_2();
		sleep(3);
		choise_2();
	}
}
