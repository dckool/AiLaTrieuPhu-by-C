#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream.h>
#include<windows.h>
#include<time.h>
long tien=25000;
char c,t;
int chon;
int a[100];
struct dapan
{
	char cauA[30],cauB[30],cauC[30],cauD[30];
};
struct cauhoi
{
	char noidung[1000];
	dapan dap_an;
	int dapandung;
};
struct macau
{
	int No;
	cauhoi cau_hoi;
};
struct node
{
	macau data;
	node* link;
};
struct list
{
	node* first;
	node* last;
};
void taolist(list &l)
{
	l.first=l.last=NULL;	
}
node* getnode (macau x)
{
	node* p = new node();
	if (p==NULL)
	{
		printf("\nko the cap phat vung nho");
		exit(0);
	}
	p->data=x;
	p->link=NULL;
	return p;	
}
void addnode(list &l,node* p)
{
	if(l.first==NULL)
	{
		l.first=p;
		l.last=l.first;
	}
	else
	{
		p->link=l.first;
		l.first=p;
	}
}
void insert(list &l,macau x)
{
	node* p = getnode(x);			  
	if (p==NULL)
		return;
	addnode(l,p);	
}
void docfile(list &l,macau &x)
{
	FILE *fl=fopen("E:\\\CacDoAn\\ailatrieuphuByC\\AiLaTrieuPhu\\QuestionFULL.txt","r");
	if ( fl == NULL )
		{
			cout << "Cannot open file.\n";
			exit(1);
		} 		

	while(!feof(fl))
	{
		fscanf(fl,"%d-%[^-]-%[^-]-%[^-]-%[^-]-%[^-]-%d\n",&x.No,&x.cau_hoi.noidung,&x.cau_hoi.dap_an.cauA,&x.cau_hoi.dap_an.cauB,&x.cau_hoi.dap_an.cauC,&x.cau_hoi.dap_an.cauD,&x.cau_hoi.dapandung);
		insert(l,x);
	}
	fclose(fl);
}
//doi mau
void testcolor(int n)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),n);
}
// chon dap an
int chondapan()
{
	int x;
	while(true)
	{
		x=getch();
		if(x==49||x==50||x==51||x==52 || x==53)
			return x;
	}
}

void xuat(macau x)
{
	printf("%s\n",x.cau_hoi.noidung);
	printf("A. %s\n",x.cau_hoi.dap_an.cauA);
	printf("B. %s\n",x.cau_hoi.dap_an.cauB);
	printf("C. %s\n",x.cau_hoi.dap_an.cauC);
	printf("D. %s\n",x.cau_hoi.dap_an.cauD);
}
void xuatketqua(macau x,int chon,int cau)
{
	if(chon==(int)x.cau_hoi.dapandung)
	{
		switch(chon)
		{
			case 49:
				system("cls");
				printf("Cau %d: ",cau);
				printf("%s\n",x.cau_hoi.noidung);
				testcolor(10);
				printf("A. %s\n",x.cau_hoi.dap_an.cauA);
				testcolor(7);
				printf("B. %s\n",x.cau_hoi.dap_an.cauB);
				printf("C. %s\n",x.cau_hoi.dap_an.cauC);
				printf("D. %s\n",x.cau_hoi.dap_an.cauD);
				testcolor(14);
				printf("CHINH XAC..XIN CHUC MUNG =))))");
				tien=tien*2;
				testcolor(13);
				printf("\nSo tien dang co hien tai: %d VND\n",tien);
				testcolor(7);
				break;
			case 50:
				system("cls");
				printf("Cau %d: ",cau);
				printf("%s\n",x.cau_hoi.noidung);
				testcolor(7);
				printf("A.%s\n",x.cau_hoi.dap_an.cauA);
				testcolor(10);
				printf("B.%s\n",x.cau_hoi.dap_an.cauB);
				testcolor(7);
				printf("C. %s\n",x.cau_hoi.dap_an.cauC);
				printf("D. %s\n",x.cau_hoi.dap_an.cauD);
				testcolor(14);
				printf("CHINH XAC..XIN CHUC MUNG =))))");
				tien=tien*2;
				testcolor(13);
				printf("\nSo tien dang co hien tai: %d VND\n",tien);
				break;
			case 51:
				system("cls");
				printf("Cau %d: ",cau);
				printf("%s\n",x.cau_hoi.noidung);
				testcolor(7);
				printf("A. %s\n",x.cau_hoi.dap_an.cauA);
				printf("B. %s\n",x.cau_hoi.dap_an.cauB);
				testcolor(10);
				printf("C. %s\n",x.cau_hoi.dap_an.cauC);
				testcolor(7);
				printf("D. %s\n",x.cau_hoi.dap_an.cauD);
				testcolor(14);
				printf("CHINH XAC..XIN CHUC MUNG =))))");
				tien=tien*2;
				testcolor(13);
				printf("\nSo tien dang co hien tai: %d VND\n",tien);
				testcolor(7);
				break;
			default :
				system("cls");
				printf("Cau %d: ",cau);
				printf("%s\n",x.cau_hoi.noidung);
				testcolor(7);
				printf("A. %s\n",x.cau_hoi.dap_an.cauA);
				printf("B. %s\n",x.cau_hoi.dap_an.cauB);
				printf("C. %s\n",x.cau_hoi.dap_an.cauC);
				testcolor(10);
				printf("D. %s\n",x.cau_hoi.dap_an.cauD);
				//testcolor(7);
				testcolor(14);
				printf("CHINH XAC..XIN CHUC MUNG =))))");
				tien=tien*2;
				testcolor(13);
				printf("\nSo tien dang co hien tai: %d VND\n",tien);
				testcolor(7);
				break;
		}
	}
	if (chon==53)
		{
			printf("\nBan co 4 su tro giup: \n\t1. Goi dien thoai cho nguoi than \n\t2. 50:50 \n\t3. Hoi y kien khan gia\n\t4. Dung cuoc choi\n\t5. Quay lai cuoc choi\n");
			int trogiup;
			scanf("%d",&trogiup);
			switch(trogiup)
			{
					case 1:
					srand(time(NULL));
					printf("Toi nghi ban nen chon dap an %c!!\n",rand()%4+65);
					Sleep(3000);
					system("cls");
					printf("Cau %d: ",cau);
					printf("%s\n",x.cau_hoi.noidung);
					printf("A. %s\n",x.cau_hoi.dap_an.cauA);
					printf("B. %s\n",x.cau_hoi.dap_an.cauB);
					printf("C. %s\n",x.cau_hoi.dap_an.cauC);
					printf("D. %s\n",x.cau_hoi.dap_an.cauD);
					xuatketqua(x,chondapan(),cau);
					break;
					case 2: 
						if (x.cau_hoi.dapandung==49)
						{
							system("cls");
							printf("Cau %d: ",cau);
							printf("%s\n",x.cau_hoi.noidung);
							printf("A. %s\n",x.cau_hoi.dap_an.cauA);
							printf("C. %s\n",x.cau_hoi.dap_an.cauC);
							xuatketqua(x,chondapan(),cau);
						}
						if (x.cau_hoi.dapandung==50)
						{
							system("cls");
							printf("Cau %d: ",cau);
							printf("%s\n",x.cau_hoi.noidung);
							printf("A. %s\n",x.cau_hoi.dap_an.cauA);
							printf("B. %s\n",x.cau_hoi.dap_an.cauB);
							xuatketqua(x,chondapan(),cau);
						}
						if (x.cau_hoi.dapandung==51)
						{
							system("cls");
							printf("Cau %d: ",cau);
							printf("%s\n",x.cau_hoi.noidung);
							printf("A. %s\n",x.cau_hoi.dap_an.cauA);
							printf("C. %s\n",x.cau_hoi.dap_an.cauC);
							xuatketqua(x,chondapan(),cau);
						}
						if (x.cau_hoi.dapandung==52)
						{
							system("cls");
							printf("Cau %d: ",cau);
							printf("%s\n",x.cau_hoi.noidung);
							printf("A. %s\n",x.cau_hoi.dap_an.cauA);
							printf("D. %s\n",x.cau_hoi.dap_an.cauD);
							xuatketqua(x,chondapan(),cau);
						}
						break;
					case 3:
						if (x.cau_hoi.dapandung==49)
						{
							system("cls");
							printf("Cau %d: ",cau);
							printf("%s\n",x.cau_hoi.noidung);
							printf("A. %s	%d phan tram\n",x.cau_hoi.dap_an.cauA,70);
							printf("B. %s	%d phan tram\n",x.cau_hoi.dap_an.cauB,10);
							printf("C. %s	%d phan tram\n",x.cau_hoi.dap_an.cauC,19);
							printf("D. %s	%d phan tram\n",x.cau_hoi.dap_an.cauD,11);
							xuatketqua(x,chondapan(),cau);
						}	
							if (x.cau_hoi.dapandung==50)
						{
							system("cls");
							printf("Cau %d: ",cau);
							printf("%s\n",x.cau_hoi.noidung);
							printf("A. %s	%d phan tram\n",x.cau_hoi.dap_an.cauA,6);
							printf("B. %s	%d phan tram\n",x.cau_hoi.dap_an.cauB,69);
							printf("C. %s	%d phan tram\n",x.cau_hoi.dap_an.cauC,14);
							printf("D. %s	%d phan tram\n",x.cau_hoi.dap_an.cauD,11);
							xuatketqua(x,chondapan(),cau);
						}
							if (x.cau_hoi.dapandung==51)
						{
							system("cls");
							printf("Cau %d: ",cau);
							printf("%s\n",x.cau_hoi.noidung);
							printf("A. %s	%d phan tram\n",x.cau_hoi.dap_an.cauA,18);
							printf("B. %s	%d phan tram\n",x.cau_hoi.dap_an.cauB,12);
							printf("C. %s	%d phan tram\n",x.cau_hoi.dap_an.cauC,63);
							printf("D. %s	%d phan tram\n",x.cau_hoi.dap_an.cauD,7);
							xuatketqua(x,chondapan(),cau);
						}
							if (x.cau_hoi.dapandung==52)
						{
							system("cls");
							printf("Cau %d: ",cau);
							printf("%s\n",x.cau_hoi.noidung);
							printf("A. %s	%d phan tram\n",x.cau_hoi.dap_an.cauA,1);
							printf("B. %s	%d phan tram\n",x.cau_hoi.dap_an.cauB,1);
							printf("C. %s	%d phan tram\n",x.cau_hoi.dap_an.cauC,1);
							printf("D. %s	%d phan tram\n",x.cau_hoi.dap_an.cauD,97);
							xuatketqua(x,chondapan(),cau);
						}
						break;
					case 4:
						printf("\nBan da quyet dinh dung cuoc choi!!!\nThat la sang suot ^^");
						printf("\nBan se ra ve voi phan thuong: %d\nByeeeeeeeeee\n",tien);
						exit(1);
					case 5:
						system("cls");
						if(cau == 5||cau == 10|| cau == 15)
						{
							testcolor(12);
							printf("\tDay la mot trong 3 moc quan trong\n");
							testcolor(14);
						}
						printf("Cau %d:",cau);
						xuat(x);
						xuatketqua(x,chondapan(),cau);
						break;
							
			}
		}
	if(chon!=x.cau_hoi.dapandung && chon!=53)
	{
		testcolor(12);
		if (chon==49)
			t='A';
		if (chon==50)
			t='B';
		if (chon==51)
			t='C';
		if (chon==52)
			t='D';
		if(cau<5)
			tien=0;
		if(cau>=5 && cau< 10)
			tien=600000;
		if(cau>10)
			tien=15200000;
		printf("Rat tiec dap an %c chua phai la cau tra loi dung",t);
		testcolor(14);
		printf("\nTro choi ket thuc T.T\n");
		testcolor(13);
		printf("Ban dat duoc so tien la: %d VND\n",tien);
		testcolor(7);
		exit(0);
	}
}  


void RandomSo(int n,int a[])
{
	srand( time(NULL) );
	a[0]=1+rand()%19;
	if(a[0]<=5)
		for(int j=1;j<=n;j++)
				a[j]=a[0]+j;
	else
		if(a[0]>=15)
				for(int j=1;j<=n;j++)
					a[j]=a[0]-j;
		else
			if(a[0]>5 && a[0]<=10)
				for(int j=1;j<=n;j++)
					a[j]=j;
			else
				{
					a[1]=n;
					for(int j=2;j<=15;j++)
						a[j]=a[j-1]-1;
				}
}
//phan giao dien choi game
void playgame(list l)
{	
	node*p;
	int i=1,socau=0;
	for(p=l.first;p!=NULL;p=p->link)
	{
		socau++;
	}
	RandomSo(socau,a);
	while(i<=15)
	{	
		testcolor(14);
		if (i==5 || i== 10||i==15)
		{
			testcolor(12);
			printf("\tDay la mot trong 3 moc quan trong\n");
			testcolor(14);
			for(p=l.first;p!=NULL;p=p->link)
			{
				if(p->data.No == a[i])
				{
					printf("Cau %d: ",i);
					xuat(p->data);
					xuatketqua(p->data,chondapan(),i);
					testcolor(13);
					printf("CAU TIEP THEO\n\tLOADING.........");
					testcolor(7);
					Sleep(1500);
					system("cls");
				}
			}
		}
		else
		{
			for(p=l.first;p!=NULL;p=p->link)
			{
				if(p->data.No == a[i])
				{
					printf("Cau %d: ",i);
					xuat(p->data);
					xuatketqua(p->data,chondapan(),i);
					testcolor(13);
					printf("CAU TIEP THEO\n\tLOADING.........");
					testcolor(7);
					Sleep(1500);
					system("cls");
				}
			}
		}
		if (i==15)
		{
				testcolor(14);
				printf("\nBan da tro thanh trieu phu!!!!!");
				printf("\nXin Chuc Mung");
				printf("\nTro choi ket thuc!!\n");
				testcolor(7);
				exit(1);
		}
		i++;
	}
}
void menu()
{
	system("cls");
	testcolor(11);
	printf("\n\t\tChao mung quy ban va cac vi den voi chuong trinh\n\t\t\t\t'AI LA TRIEU PHU'");
	printf("\n\tChuong trinh duoc thiet ke boi Chien, M.Cuong && H.Cuong =))");
	testcolor(13);
	printf("\n\tBan se trai qua 15 cau hoi voi 3 moc quan trong la 5, 10 va 15");
	printf("\n\tNhap vao 1, 2, 3, 4 cho cac dap an A, B, C, D");
	printf("\n\tBam phim 5 de dung quyen tro giup");
	printf("\n\tBan co 4 su tro giup \n\t\t1. Goi dien thoai cho nguoi than \n\t\t2. 50:50 \n\t\t3. Hoi y kien khan gia\n\t\t4. Dung cuoc choi\n");
	printf("\n\tBam phim bat ki de choi!!!\n");
	getch();
	printf("\n\tChung ta bat dau di AI LA TRIEU PHU...\n\t\t\tLoading....:v");
	Sleep(1500);
	system("cls");
}
void ThemCauHoi()
{
	char cauhoithem[1000],cautlA[30],cautlB[30],cautlC[30],cautlD[30];
	int macauhoithem;
	int ma;
	FILE *fl=fopen("C:\\Users\\Chien\\Desktop\\ThanhQuaDauTay CCC\\QuestionFULL.txt","a");
	testcolor(14);
	if ( fl == NULL )
		{
			cout << "Cannot open file.\n";
			exit(1);
		} 		
	cout<<"Nhap ma so cau:\n";
	scanf("%d",&macauhoithem);
	fprintf(fl,"%d-",macauhoithem);
	cout<<"Nhap cau hoi :\n";
	fflush(stdin);
	gets(cauhoithem);
	fprintf(fl,"%s-",cauhoithem);
	cout<<"Nhap dap an A:\n";
	gets(cautlA);
	fprintf(fl,"%s-",cautlA);
	cout<<"Nhap dap an B:\n";
	gets(cautlB);
	fprintf(fl,"%s-",cautlB);
	cout<<"Nhap dap an C:\n";
	gets(cautlC);
	fprintf(fl,"%s-",cautlC);
	cout<<"Nhap dap an D:\n";
	gets(cautlD);
	fprintf(fl,"%s-",cautlD);
	cout<<"Nhap ma cau tl dung(1-4):\n";
	ma=getchar();
	fprintf(fl,"%d\n",ma);
	fclose(fl);
	testcolor(7);
}
void TimCauHoi(list l)
{
	node*p;
	int mch;
	cout<<"Nhap ma cau hoi can tim:\n";
	cin>>mch;
	for(p=l.first;p!=NULL;p=p->link)
	{
		if(mch==p->data.No)
		{
			cout<<"Cau hoi "<<mch<<":";
			xuat(p->data);
			break;
		}
	if(p==NULL)
		cout<<"Ko tim thay cau hoi!!\n";
	}
}
int main()
{
	list l;	
	macau x;
	taolist(l);
	docfile(l,x);
	int chon;
	do
	{
		printf("=========MENU==============");
		printf("\n1. Choi");
		printf("\n2. Xem toan bo cau hoi");
		printf("\n3. Them 1 cau hoi");
		printf("\n4. Tim cau hoi");
		printf("\n6. Thoat\n");
		scanf("%d",&chon);
		switch(chon)
		{
			case 1: 
				menu();
				playgame(l);
				break;
			case 2:
		 		{int i=1;
				node* p=l.first;
				while(p!=NULL)
				{
					printf("Cau %d: ",i);
					xuat(p->data);
					p=p->link;
					i++;
				}
				printf("Nhan nut bat ki de tro lai MENU!\n");
				getch();
				break;
				}
			case 4:
				TimCauHoi(l);
				getch();
				break;
			case 3:
				ThemCauHoi();
		}
		system("cls");
	}while (chon!=6);
	return 0;
}
