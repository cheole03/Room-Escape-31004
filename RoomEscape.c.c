#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

char name[30];

//�� 1 
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

//�� 2

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
	
	printf("����� �̸��� �����ΰ�? : ");
	scanf("%s", name);
	
	printf("�̸��� %s�� �����Ͽ����ϴ�.\n", name);
	sleep(1);
	printf("�� ������ ���۵˴ϴ�.");
	sleep(4);
	system("cls");
	
	sleep(3);
	printf("1991�� 12�� 26�� ���� ��� �� ģ����� ������ ����.\n");
	sleep(3);
	printf("������ �ִ� TV���� �ҷ��� �ر��Ǿ��ٴ� ������ ������ �־���.\n");
	sleep(3);
	printf("������ �����鼭 �̲������� ������ įį������.\n");
	sleep(3);
	printf("�Ͼ���� ������� �� �� ���� �濡 ���� �ִ�.\n");
	sleep(3);
	system("cls");
	printf("\"���� �������� �����ϳ�.\"\t-�ƿ����� ���\n");
	sleep(3);
	printf("[%s]: �� ������ ���� ���� �����̳�..", name);
	sleep(3);
	
	choise();	
}

int choise(){
	
	int menu;
	
	while(TRUE){
		if(keyh == TRUE && keyb == TRUE && key == FALSE && room_2 == FALSE){
			system("cls");
			printf("���� ��ġ�� ����� �� �� ����.\n");
			sleep(3);
			system("cls");
			printf("���踦 �����.\n");
			keyh = FALSE;
			keyb = FALSE;
			key = TRUE;
			sleep(3);			
		}
		system("cls");
		printf("���� �ѷ�����.\n");
		printf("1. ħ��\n2. ����\n3. å��\n4. �����\n5. ���Թ�\n6. �ݰ�\n");
		if(dropbook == TRUE){
			printf("7. ��å\n");
		}
		printf("�� ��� Ȯ���ұ�?\n");
		scanf("%d", &menu);
		
		switch(menu){
			//ħ�� 
			case 1:
				bed();
				break;
			//����
			case 2:
				cloth();
				break;
			
			// å�� 
			case 3:
				books();
				break;

			//����� 
			case 4:
				ref();
				break;
				
			//���Թ� 
			case 5:
				if(room_2== TRUE){
					choise_2();
				}
				gate();
				break;
			//�ݰ� 
			case 6:
				if(safe_key == TRUE) room2_safe();
				safe();
				break;
				
			//��å 
			case 7:
				if(dropbook == FALSE){
					system("cls");
					printf("�Է¿���");
					sleep(3);
					choise();
				}
				else{
					system("cls"); 
					printf("��å�� Ȯ���ߴ�.\n");
					sleep(1);
					printf("Mikhail Gorbachev(������ ����������) ���: 19310302 \n");
					sleep(5);
				}
			default:
				system("cls");
				printf("�Է¿���");
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
		printf("0. ������\n1. ħ����\n2. ħ���\n");
		scanf("%d", &menu);
		switch(menu){
			case 0:
				choise();
				break;
			case 1:
				system("cls");
				printf("�̺Ұ� �������� �ƹ��͵� ����.\n");
				sleep(3);
				break; 
			case 2:
				system("cls");
				if(bed_check == TRUE){
					printf("ħ��ؿ��� �ƹ��͵� ����.");
					sleep(3);
					choise();
				}
				printf("���������� �ִ�. �����ġ�� �ִµ�?.\n1. ����\n0. �׳ɵд�.\n");
				scanf("%d", &menu);
				if(menu == 1){
					printf("��й�ȣ �Է�: ");
					scanf("%d", &password);
					if(password == passnum){
						system("cls");
						printf("�� ������ �����.");
						keyh = TRUE;
						bed_check = TRUE;
						sleep(3);
						choise();
						break;
					}
					else{
						system("cls");
						printf("��й�ȣ�� Ʋ���� ����.");
						sleep(3);
						choise();
					}
				}
				else if(menu == 0){
					choise();
				}
			default:
				system("cls");
				printf("�Է¿���");
				sleep(3);
				break;
			}
	}
}

int cloth(){
	int menu;
	system("cls");
	printf("1. ����\n2. Ƽ����\n");
	scanf("%d", &menu);
	if(menu == 1){
		system("cls");
		printf("������ �����̴�.");
		sleep(5);
		choise();
	}
	else if(menu == 2){
		system("cls");
		printf("Ƽ������ SOVIET %d��� �����ִ�.", clonum);
		sleep(5);
		choise();
	}
	else{
		system("cls");
		printf("�Է¿���");
		sleep(3);
		choise();
	}
}

int books(){
	system("cls");
	printf("å �α��� �����ִ�.\n");
	sleep(3);
	printf("å ������ ������ �ʴ´�..���� 8�����ΰŰ���..\n");
	sleep(3);
	printf("�޸� �����ִ�. ****%d\n", booknum);
	sleep(5);
	choise();
}

int ref(){
	int menu;
	
	while(TRUE){
		system("cls");
		printf("����ǰ� �õ����� �ִ�.\n");
		printf("0. ������\n1. �����\n2. �õ���\n");
		scanf("%d", &menu);
		switch(menu){
			case 0:
				choise();
				break;
			case 1:
				system("cls");
				printf("�ݶ�� ���� �ִ�.\n�Ѵ� �����Ǿ� ���δ�.");
				sleep(3);
				break;
			case 2:
				if(ref_check == TRUE){
					system("cls");
					printf("�ƹ��͵� ����.");
					sleep(3);
					choise();
					break;
				}
				system("cls");
				printf("�� �� ���� ���ڰ� �ִ�.\n");
				sleep(3);
				printf("0.������\n1.����\n");
				scanf("%d", &menu);
				if(menu == 1){
					system("cls");
					printf("������ �����.");
					keyb = TRUE;
					sleep(3);
					ref_check = TRUE;
					choise();
				}
				else{
					printf("�Է¿���\n");
					sleep(3);
					break;
				}
			default:
				printf("�Է¿���");
				break;
		}
	}
}
int gate(){
	int password;
	system("cls");
	printf("�����ġ�� �ִ�.\n");
	printf("��й�ȣ �Է�: ");
	scanf("%d", &password);
	if(password == 19310302){
		system("cls");
		printf("���� ����ϴ� ������ ǰ��ä ���� ���� �ɾ�����.\n");
		sleep(3);
		system("cls");
		printf("���������� �̾��� ��ο���.\n");
		sleep(3);
		system("cls && color 0f");
		printf("[%s] ������ �� �� ����. �������� �ѷ�����.", name);
		room_2 = TRUE;
		sleep(3);
		choise_2();
	}
	else{
		system("cls");
		printf("��й�ȣ�� Ʋ���� ����.\n");
		sleep(3);
		choise();
		
	}
}

int safe(){
	int menu;
	
	while(TRUE){
		system("cls");
		if(dropbook == TRUE){
			printf("�̹� �� ����ִ� �ݰ���. �� �̻� ���°� ����.\n");
			sleep(3); 
			choise();
		} 
		printf("�ݰ��� �ִ�.\n");
		printf("0. ������\n1. ����\n2. ��������\n");
		scanf("%d", &menu);
		switch(menu){
			case 0:
				choise();
			case 1:
				if(key == TRUE){
					system("cls");
					printf("����� �ݰ��� ������.\n");
					sleep(3);
					printf("��å�� �����.\n��å�� Ȯ�� �Ͽ���.\n");
					sleep(3);
					printf("Mikhail Gorbachev(������ ����������) ���: 19310302 \n");
					sleep(5);
					dropbook = TRUE;
					choise();
				}
				else{
					system("cls");
					printf("���谡 �ʿ��ϴ�.");
					sleep(3);
					choise();
					break;
				}
			case 2:
				system("cls");
				printf("�ܴ��� ö�� �Ǿ��ִ�.\n���� �ʹ� ������.");
				sleep(3);
				break;
			default:
				system("cls");
				printf("�Է¿���");
				sleep(3);
				break; 
		}
	}
}

int choise_2(){
	int menu;
	if(keyb == TRUE && iron_mold == TRUE && hammer == TRUE && driver == FALSE){
		printf("�������� Ʋ�� �ְ� ��ġ�� ��� ������ -����̹� ���� �����.\n");
		driverb = TRUE;
		keyb = FALSE;
		sleep(3);
	}
	if(driverb == TRUE && driverh == TRUE){
		printf("����̹� �ɰ� ����̹� �����̸� ���ƴ�.\n");
		sleep(3);
		system("cls"); 
		printf("- ����̹��� �����.");
		driverh = FALSE;
		driverb = FALSE;
		driver = TRUE;
		sleep(3);
	}
	while(TRUE){
		system("cls");
		printf("���� �ѷ�����.\n");
		printf("0. ���� ��\n1. ����\n2. ��Ź\n3. ����\n4. ī��\n5. ö��\n");
		printf("�� ��� Ȯ���ұ�? \n");
		
		scanf("%d", &menu);
		
		switch(menu){
			//����
			case 1:
				sofa();
				break;
			
			//��Ź 
			case 2:
				table();
				break;
				
			//���� 
			case 3:
				if(chair_check == TRUE){
					system("cls");
					printf("���ڴ� �� �̻� ���� ����.\n");
					sleep(3);
					break;
				}
				chair();
			//ī�� 
			case 4:
				capet();
				break;
			
			//ö�� 
			case 5:
				iron_panel();
				break; 
			//������ 
			case 0:
				choise();
				break;
			
			//�Է¿��� 
			default:
				printf("�Է¿���");
				sleep(3);
				break;
		}
	}
}

int capet(){
	system("cls"); 
	if(capet_check == FALSE){
		printf("ī���� Ȯ���� ���Ҵ�.\n");
		sleep(3);
		printf("���� �� ��ȭ���� ��������.\n");
		sleep(3);
		printf("ī���� ������� ���� Ȩ�� �ִ�.\n");
		sleep(3);
		printf("�� ũ�⸦ ����.. �ݰ����� �Ӹ��κа� ũ�Ⱑ �Ȱ�����?\n");
		sleep(3);
		printf("�ٽ� �ݰ��� ���� ���踦 ��������.\n");
		sleep(3);
		safe_key = TRUE;
		capet_check = TRUE;
		choise_2();
	}
	printf("���� Ȩ�� �ִ�.\n");
	if(keyh == TRUE){
		system("cls");
		printf("������ Ȩ�� �� ��������.\n");
		sleep(3);
		printf("�ݼ� Ʋ�� �����.");
		iron_mold = TRUE;
		keyh = FALSE;
		sleep(3);
		choise_2();
		
		
	}
	else{
		system("cls");
		printf("�ƹ��͵� �� �� ����.\n");
		sleep(3);
		choise_2();
	}
}

int room2_safe(){
	system("cls");
	printf("�ݰ��� �ִ� ���踦 ì���.\n");
	sleep(3);
	printf("���踦 �и��Ͽ���.\n�� ������ ������ �����.\n");
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
		printf("�������� �� ���Ĵ�.");
		sleep(3);
		choise_2();
	}
	while(TRUE){
		system("cls");
		printf("���İ� �ִ�.\n");
		printf("1. ���´�\n2. �ű��\n");
		scanf("%d", &menu);
		
		switch(menu){
			case 1:
				system("cls");
				printf("�������� ���йۿ� ����.\n");
				sleep(3);
				break;
			case 2:
				system("cls");
				printf("���İ� �ִ� �ڸ��� ��ġ�� �ִ�.\n");
				sleep(3);
				printf("��ġ�� �����.\n");
				sleep(3);
				hammer = TRUE;
				sofa_check = TRUE;
				choise_2();
				break;
			defaul:
				system("cls");
				printf("�Է¿���");
				sleep(3);
				break;
		}
	}
}

int table(){
	int menu;
	system("cls");
	if(driverh == TRUE && wood_piece == TRUE){
		printf("�������� ��Ź�ۿ� ����.");
		sleep(3);
		choise_2();
	}
	
	while(TRUE){
		
		system("cls");
		
		printf("��Ź ������ ȭ�а� ���ʰ� �ִ�.\n");
		printf("1. ȭ���� �μ���\n2. ���ʸ� �¿��\n");
		scanf("%d", &menu);
		switch(menu){
			case 1:
				system("cls");
				if(wood_piece == TRUE){
					printf("�̹� �����ִ�.");
					sleep(3);
					choise_2();
				}
				printf("ȭ���� �ν����� ���������� ���Դ�.\n");
				sleep(3);
				printf("���������� �����.\n");
				wood_piece = TRUE;
				break;
				
			case 2:
				if(riter == TRUE){
					printf("���ʿ� ���� �ٿ���.\n");
					sleep(3);
					printf("���ʰ� �� ������ ���� ���δ�.\n");
					sleep(3);
					printf("����̹� �����̸� �����.\n");
					driverh = TRUE;
					sleep(3);
					choise_2();
				}
				else{
					printf("�����Ͱ� ����.");
					sleep(3);
					choise_2();
				}
			default:
				system("cls");
				printf("�Է¿���");
				sleep(3);
				choise_2();
				break;
		}
	}
} 

int chair(){
	int menu;
	system("cls");
	printf("���ڰ� �ִ�.");
	while(TRUE){
		system("cls");
		printf("1. ���� ���´�.\n2. �Ʒ��� ���ɴ�\n");
		scanf("%d", &menu);
		switch(menu){
			case 1:
				system("cls");
				printf("�ƹ��͵� ����.\n");
				sleep(3);
				break;
			case 2:
				system("cls");
				printf("���� �ؿ� Ȩ�� �ִ�.\n");
				if(wood_piece == TRUE){
					system("cls");
					printf("���������� �־���.\n");
					sleep(3);
					printf("�����͸� �����.");
					riter = TRUE;
					chair_check = TRUE;
					sleep(3);
					choise_2();
				}
				else{
					system("cls");
					printf("�̴�δ� �ƹ��͵� �� �� ����.\n");
					sleep(3);
					choise_2();
					break;
				}
			default:
				printf("�Է¿���");
				break;
		}
	}
}

int iron_panel(){
	system("cls");
	printf("����� �ܴ��� �����Ǿ� �ִ�.\n");
	if(driver == TRUE){
		printf("����̹��� ö���� ����´�.\n");
		sleep(3);
		printf("[&s]�ȿ� ��ư������ �ִµ�?\n", name);
		sleep(3);
		printf("��ư�� ������.");
		sleep(3);
		system("cls");
		printf("��ư�� ������ õ���� ��������.");
		sleep(3);
		system("cls");
		printf("���� �绡�� ��Ź������ ������, ������ ũ�� ��ġģ �ʾҴ�.");
		sleep(3);
		system("cls");
		printf("õ���� ���ʸ� ������ ���� ��簡 �����.");
		sleep(3);
		system("cls");
		printf("���� �� ���� �ö󰬰� ��ħ�� ������ ���� �� �־���.");
		sleep(3);
		system("cls");
		printf("���� ������ �� �� �濡 �������� �𸥴�.");
		sleep(3);
		system("cls"); 
		printf("THE END");
		return 0; 
	}
	else{
		system("cls");
		printf("����̹��� ì�ܿ���.");
		sleep(3);
		choise_2();
		sleep(3);
		choise_2();
	}
}