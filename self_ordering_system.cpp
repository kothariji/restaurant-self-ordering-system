#include<iostream>      // basic i/o operations
#include<string>        //for string operations
#include<stdlib.h>      //for system("CLS")
#include<windows.h>     //for _sleep(200);
#include <ctime>     //for date and time
using namespace std;
string category_list[10][6]= {
                                    {"Shahi","Kilo","Shirin & Sherbet","Kebab Koobideh","Biryani Combos"/*,"0"*/},
                                    {"Bestsellers","Sandwhiches and Burgers","Meal Box","Meals","Breakfast","0"},
                                    {"Thali","Soups and Salads","Starters","Main Course","Rice and Biryani","Fried Rice and Noodles"},
                                    {"Starters","Soups","Main Course","Breads","Rice and Biryani","0"},
                                    {"Starters","Main Course","Snacks","Breads","Rice and Biryani","0"},
                                    {"Starters","Main Course","Seafood Special","Chinese","Drinks","0"},
                                    {"Light Work","Govind special","Non Veg","Chinese","Light Drinks","0"},
                                    {"Starters","Ganesh course","Non Veg","Chinese","Light Drinks","0"},
                                    {"Biryani","Mutton","Gavran Chicken"," Eggs ","Bhakri ","0"},
                                    {" McSaver Breakfast ","Burger"," Meals","McSave Snacks","All about veg and non veg","0"}
                            };
string dish_list[10][6][6] ={
                                {
  /*1*/                             {"Dum Gosht Biryani","Subz-e-Biryani(Reg) ","Murgh Makhani Biryani","Zaikedaar Biryani    ","Lazeez Bhuna Biryani","Subz Falafel Biryani"},
                                    {"Dum Gosht Biryani","Subz-e-Biryani(kilo)","Murgh Makhani Biryani","Zaikedaar Biryani    ","Subz Falafel Biryani","Paneer Subz Biryani "},
                                    {"Swig Jeera Masala","Swig Green Apple    ","Chocolate Ecstacy    ","Ayran(Buttermilk)    ","Mint Raita          ","Mughlai Gravy       "},
                                    {"Falafel-e-Khaas  ","Murgh Kefta         ","Murgh Kefta Mini     ","Falafel-e-Khaas Mini ","Murgh Koobideh      ","Gosht Haleem        "},
                                    {"Jashn-e-Biryani  ","Jashn-e-Biryani(Non)","Share-e-Biryani(Veg) ","Share-e-Biryani(Non) ","Shahi M Dastarkhwan ","Shahi Gosht Dastkwan"},
                                },
                                {
  /*2*/                             {"Veg Exotica Pizza","Tandoori Pizza Veg  ","Tempura Fish Finger  ","Cheese Crumble Stick ","Bulgogi Chicken Pizza","Veg Alfredo Pasta  "},
                                    {"Grill Sandwhich  ","Veg Club Sandwhich  ","Grill Cheese Toast   ","Fruit Jam Sandwhich  ","Belgium Waffle Toast ","Grill Egg Sandwhich"},
                                    {"Veg Fried Rice   ","Veg Schezwan Rice   ","Veg Kimchi Fried Rice","Veg Hakka Noodles    ","Chicken Fried Rice   ","Chicken     Noodles"},
                                    {"Cottage Steak    ","Cheese Crumble Steak","Stuffed Chicken Rice ","Gochujang Roast Steak","Fish Crumble Steak   ","Roast Chicken Meal "},
                                    {"Fried Egg        ","Scrambled Egg       ","Hash Brown Omelette  ","African Omelette     ","Baked West Omelette  ","Japanese Omurice   "},
                                },
                                {
  /*3*/                             {"Malhar Egg Thali ","Malhar Chicken Thali","Malhar Chicken Thali ","Malhar Mutton Thali  ","Malhar Fish Thali    ","Malhar Veg Thali   "},
                                    {"Veg Manchow Soup ","Veg Hot & Sour Soup ","Veg Sweet Corn Soup  ","Tomato Soup          ","Pepperi Lemon Soup   ","Hot Manchow Soup   "},
                                    {"Veg Spring Roll  ","Veg Manchurian Dry  ","Veg Crispy           ","Chilli Paneer Dry    ","Paneer Mongolian     ","Black Pepper Salt  "},
                                    {"Veg Diwani Handi ","Veg Kolhapuri       ","Veg Maratha          ","Veg Jaipuri          ","Veg Jalfrezi         ","Kadhai Paneer      "},
                                    {"Paneer Pulao     ","Green Peas Pulao    ","Mushroom Pulao       ","Dal Khichdi          ","Curd Rice            ","Steamed Rice       "},
                                    {"Veg Fried Rice   ","Veg Schezwan Rice   ","Veg Triple Fried Rice","Chicken Fried Rice   ","Chicken Fried Rice   ","Chicken Triple Rice"}
                                },
                                {
   /*4*/                            {"Paneer Tikka     ","Cheese Paneer Tikka ","Paneer Malai Tikka   ","Aaloo Tikka          ","Chilly Potatoe       ","Aaloo Jeera        "},
                                    {"Veg Manchow Soup ","Hot n Sour Soup     ","Creame Of Tomato Soup","Cream-o-Mushroom Soup","Chicken Manchow Soup ","Chicken Sukka Soup "},
                                    {"Paneer Masala    ","Paneer Tikka Masala ","Paneer Pasanda       ","Paneer Handge        ","Cheese Paneer Masala ","Chicken Tika Masala"},
                                    {"Butter roti      ","Masala roti         ","Plain Nan            ","Lachha Paratha       ","Butter Kulcha        ","Aaloo Paratha      "},
                                    {"Steamed Rice     ","Veg Pulav           ","Paneer Pulav         ","Paneer Biryani       ","curd rice            ","Dal Khichadi       "}
                                },
                                {
    /*5*/                           {"Cheese Methi     ","Hyderabadi Aaloo    ","Paneer Angara Kebab  ","Chicken 65           ","Chicken Sukka        ","Paneer ke Tilkay   "},
                                    {"Special Samruddhi","Aaloo Jeera         ","Green Peas Masala    ","Lasuni Palak         ","Paneer Methi Chaman  ","Murgh jeera Masala "},
                                    {"Cheese Pineapple ","Cheese Pakora       ","Plain Cheese         ","Finger Chips         ","Onion Cheese Pakora  ","Paneer Pakora      "},
                                    {"Plain roti       ","Butter Roti         ","Plain Paratha        ","Plain Naan           ","Butter Naan          ","Mirch Aaloo Paratha"},
                                    {"Veg Pulao        ","Steamed Rice        ","Jeera Rice           ","Chicken Pulao        ","Daal Khichdi         ","Hyderabadi Biryani "}
                                },
                                {
    /*6*/                           {"five spicy corn  ","hot potato coriander","hunan cottage cheese ","burnt garlic soup    ","pho soup             ","jung chilly chicken"},
                                    {"special veg thali","veg butter masala   ","veg chilli bhuna     ","veg kolhapuri        ","dum alu punjabi      ","kaju masala        "},
                                    {"pomfrst          ","surmai and prawns   ","bombil               ","rawas                ","baby surmai          ","chiken tikka       "},
                                    {"veg manchurian   ","veg 65/chilly       ","gobi 65              ","panner chilly        ","chicken hot pan      ","chicken lolly pop  "},
                                    {"Masala tea       ","coffee              ","cold coffee          ","lassi                ","orange juice         ","apple milk shake   "}
                                },
                                {
         /*7*/                      {"five spicy corn  ","stuff potato chilli ","hunan style cheese   ","burnt garlic soup    ","pho soup             ","chilly baali fish  "},
                                    {"Govind special   ","veg butter masala   ","veg bhuna            ","veg kolhapuri        ","malai kofta          ","veg assorted kadhai"},
                                    {"butter chicken   ","chicken kadhai      ","prawns               "," methi chicken       ","mutton korma         ","baby surmai        "},
                                    {"veg manchurian   ","veg 65/chilly       ","egg fried rice       ","chicken hakka noddles","chicken fried rice   ","fish chilly        "},
                                    {"Gulab lassi      ","orange juice        ","apple milk shake     ","strawberry milk shake","mango milk shake     ","double sunday chole"}
                                },
                                {
           /*8*/                    {"Kakori kebabs    ","stir fired chicken  ","Micro Paneer Tikkas ","Aloo and Dal Tikki  "," Cheese Balls          "," Chicken Satay     "},
                                    {"Ganesh spl. veg  ","veg butter masala   ","kaju masala         ","paneer rajwada      ","paneer mumtaz          ","paneer bhurji      "},
                                    {"Chicken Escalope ","Mutton Korma        ","Pina Colada Pork Rib","Tandoori Lamb Chops "," Malabar Fish Biryani  ","Keema Samosa Dip   "},
                                    {"Sichuan Pork     ","Braised Pork Balls  ","Shrimp with Vermicel","Dumplings           ","Chow Mein              ","Vermicelli Rolls   "},
                                    {"Mojito           ","Long Island Iced Tea","Manhattan           ","Daiquiri            ","Margarita              ","Bloody Mary        "}
                                },
                                {
             /*9*/                  {"Sindhi Biryani   ","The Bombay Biryani  ","The Malabar Biryani ","The Kampuri Biryani ","The Arcot Biryani      ","The Zakir Biryani  "},
                                    {"Galouti Kebab    ","Laziz Lamb Handi    ","Khatta Meat         ","Parsi Mutton Cutlets","Rajasthani Laal Maas   ","Bhindiwala Meat    "},
                                    {"Sp. chicken handi","Spl. chicken masala ","Gavaran chicken fry ","chicken lollipop    ","Sp. Chicken nyahri     ","Spl. chicken lazeez"},
                                    {"Anda Curry       ","Egg Chaat           ","Garlic Fried Rice   ","Anda Biryani        ","Tomato Egg Curry       ","Stuffed Egg        "},
                                    {"Jowar bhakri     ","Bajra bhakri        ","Nachni bhakri       ","aloo stuffed bhakri ","Paneer bhakri          ","Cheese bhakri      "}
                                },
                                {
            /*10*/                  {"mcaloo tikki meal","Mcsaver mcegg meal  ","chatpata aloo meal  ","Mexican mcaloo meal ","Mcsaver chicken meal   ","Pizza mcpuff meal  "},
                                    {"McAloo Tki Burger","Chatpata Naan - Aloo","Chatpata Naan -Kebab","Chicken Kebab Burger","McVeggie Burger        ","McChicken Burger   "},
                                    {"Rice bowl comos  ","Rice meals          ","Mcveggiecappuccino  ","Mcsaver mcegg meal  ","Mcsaver chatpata n meal","Mc kids combo      "},
                                    {"McAloo Tki Burger","McEgg Burger        ","Pizza McPuff        ","Masala Wedges       ","fries                  ","Diet Coke          "},
                                    {"Grill Chatpt Aloo","McEgg Burger        ","Aloo Tikki Wheat Bun","Chatpata Naan Aloo  ","McEgg with Whole Bun   "," Veg Surprise      "}
                                }

                            };
int dish_price[10][6][6] =   {
                                    {
                                    {420,430,390,380,410,390},
                                    {410,420,450,390,410,380},
                                    {160,150,140,130,150,160},
                                    {240,250,260,240,250,210},
                                    {260,240,210,230,250,210},
                                                            },
{
                                    {210,230,240,250,260,280},
                                    {140,150,160,180,130,160},
                                    {190,210,200,210,180,190},
                                    {320,310,350,340,350,310},
                                    {50,60,80,70,90,95},
                                                            },
{
                                    {320,350,360,380,410,350},
                                    {180,190,160,140,130,190},
                                    {190,170,160,150,160,150},
                                    {290,310,300,290,270,320},
                                    {190,160,180,160,150,180},
                                    {210,230,220,240,250,320}
                                                            },
{
                                    {180,190,170,180,190,190},
                                    {120,130,160,140,120,160},
                                    {280,290,270,280,290,260},
                                    {35,40,45,55,65,65},
                                    {50,60,60,70,80,110},
                                    {160,180,180,170,160,160}
                                                            },
{
                                    {380,390,350,340,370,300},
                                    {280,290,270,250,280,310},
                                    {70,80,90,80,110,95},
                                    {20,25,30,40,45,50},
                                    {150,160,180,190,210,230},
                                    {45,30,45,40,30,40}
                                                            },
{
                                    {210,250,320,350,180,310},
                                    {380,350,390,360,320,360},
                                    {360,370,370,380,340,320},
                                    {80,50,60,45,40,40},
                                    {180,190,180,170,150,190},
                                    {20,30,50,60,80,90}
                                                            },
{
                                    {240,220,230,240,150,260},
                                    {270,280,290,210,220,200},
                                    {210,240,250,210,170,180},
                                    {150,190,180,200,230,240},
                                    {60,80,50,60,60,90},
                                    {50,90,120,100,110,90}
                                                            },
{
                                    {310,320,330,240,160,280},
                                    {290,240,280,260,310,190},
                                    {310,330,290,310,290,180},
                                    {220,240,180,190,210,120},
                                    {190,90,120,140,110,130},
                                    {45,30,45,40,30,40}
                                                            },
{

                                    {370,350,330,330,240,250},
                                    {150,150,780,320,330,350},
                                    {720,320,350,250,380,240},
                                    {240,80,80,80,50,35},
                                    {35,35,20,30,40,50},
                                    {45,30,45,40,30,40}
                                                            },

{
                                    {179,186,195,196,214,149},
                                    {49,89,129,79,149,129},
                                    {150,231,245,186,195,99},
                                    {49,89,109,89,79,65},
                                    {51,55,58,64,65,19},
                                    {45,30,45,40,30,40}
                                                            }
                    };
class restaurant
{
    struct node
    {
        string name;
        int point[3];
        int price;
        struct node *sibling;
        struct node *next;
    }*head=NULL,*t0,*t,*t1,*t2,*t3,*t4,*temp;

    struct node1
    {
        string name1;
        int point1;
        int price1;
        int quantity1;
        struct node1 *sibling1;
        struct node1 *next1;
    }*nhead=NULL,*nt0,*nt,*nt1,*nt2,*nt3,*nt4,*ntemp;

    public:

        void load_data(int res)
        {
            int sc,category=6;
            for(int cat1=0;cat1<category;cat1++)
            {
                if(category_list[res][cat1] != "0")
                {
                    temp = new node;
                    temp->name = category_list[res][cat1];
                    temp->point[0]=cat1+1;
                    temp->sibling=NULL;
                    temp->next=NULL;
                    if(head==NULL)
                        head=temp;
                    else
                    {
                        t0 = new node;
                        t0 = head;
                        while(t0->next!=NULL)
                            t0=t0->next;
                        t0->next=temp;
                    }
                    for(int j=0;j<6;j++)
                        insert_dish(temp,j,cat1,res);
                }
            }
        }

        void insert_dish(node *t2,int x,int x2,int x1)
        {
            int ssc;
            t = new node;
            t->point[0]=t2->point[0];
            t->point[1]=x+1;
            t->name = dish_list[x1][x2][x];
            t->price = dish_price[x1][x2][x];
            t->sibling=NULL;
            t->next=NULL;
            if(t2->sibling==NULL)
                t2->sibling=t;
            else
            {
                t2=t2->sibling;
                while(t2->next!=NULL)
                    t2=t2->next;
                t2->next=t;
            }
        }

        void display_restaurant(string restname)
        {

            int cat_choice,al=1,final1;
            while(al)
            {
                system("CLS");
                temp = new node;
                temp=head;
                cout<<"\t\t\t=================================================================="<<endl;
                cout<<"\t\t\t\t                ::"<<restname<<"::                    "<<endl;
                cout<<"\t\t\t=================================================================="<<endl;
                while(temp!=NULL)
                {
                    cout<<"\t\t\t.................................................................."<<endl;
                    cout<<"\t\t\t\t\t"<<temp->point[0]<<"\t"<<temp->name<<endl;
                    cout<<"\t\t\t.................................................................."<<endl;
                    //display_subtopic(temp);
                    temp=temp->next;
                }
                cout<<"\n\n\t\t\tSelect the Category OR PRESS 0 TO DISPLAY ORDER LIST:- ";
                cin>>final1;
                if(final1!=0)
                {
                    //cout<<"Select the category:- ";
                    //cin>>cat_choice;
                    temp = head;
                    while(temp!=NULL)
                    {
                        if(temp->point[0]==final1)
                            display_subtopic(temp);
                        temp=temp->next;
                    }
                }
                else
                    return;
          }
        }
        void display_subtopic(node *t2)
        {
            system("CLS");
            int dish_choice,dish_quantity=1;
            t = new node;
            t=t2->sibling;
            cout<<"\n\n\t\t\t━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━"<<endl;
            cout<<"\t\t\t\tID\tDish Name\t\t\tDish Price";
            cout<<"\n\t\t\t━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━"<<endl;
            while(t!=NULL)
            {
                cout<<"\t\t\t\t"<<t->point[1]<<"\t"<<t->name<<"\t\t"<<t->price<<endl;
                cout<<"\t\t\t━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━"<<endl;
                t=t->next;
            }
            cout<<"\n\t\t\tselect dish:- ";
            cin>>dish_choice;
            cout<<"\t\t\tEnter Quantity:- ";
            cin>>dish_quantity;
            t=t2->sibling;
            while(t!=NULL)
            {
                    if(t->point[1]==dish_choice)
                    {
                        ntemp = new node1;
                        ntemp->name1 = t->name;
                        ntemp->price1 = t->price;
                        ntemp->quantity1 = dish_quantity;
                        ntemp->point1=1;
                        ntemp->sibling1=NULL;
                        ntemp->next1=NULL;
                        if(nhead==NULL)
                            nhead=ntemp;
                        else
                        {
                            nt0 = new node1;
                            nt0 = nhead;
                            while(nt0->next1!=NULL)
                                nt0=nt0->next1;
                            nt0->next1=ntemp;
                        }
                    break;
                    }
                    t=t->next;
            }
        }
    void display_orderlist(string cusname,long long int mobile,string restname)
    {
        ntemp = new node1;
        ntemp = nhead;
        int ordercount = 0,total=0;
        system("CLS");
    cout<<"\n\t\t\t░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
    _sleep(200);
    cout<<"\t\t\t▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<<endl;
    _sleep(200);
    cout<<"\t\t\t▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"<<endl;
    _sleep(200);
    cout<<"\t\t\t██████████████████████████████████████████████████████████████████"<<endl;
    //cout<<"\t\t\t=================================================================="<<endl;
    cout<<"\t\t\t\t                "<<restname<<"                    "<<endl;
    _sleep(200);
    cout<<"\t\t\t━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ "<<endl;
    _sleep(200);
    cout<<"\t\t\t Date:- ";
    system("date/t");
    _sleep(200);
    cout<<"\t\t\t Time:- ";
    system("time/t");
    _sleep(200);
    srand((unsigned)time(0));
    int i;
    i = (rand()%200)+1;
    cout<<"\t\t\t▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒Order id:-"<<i<<"▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<<endl;
     _sleep(200);
    cout<<"\t\t\tName:- "<<cusname<<"\t\t\tMob:- "<<mobile<<endl;
    _sleep(200);
    cout<<"\t\t\t━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ "<<endl;
        cout<<"\t\t\tDish Name\t\tDish Price   Quantity     Net Price\n"<<endl;
        while(ntemp!=NULL)
        {
            ordercount++;
            ntemp->point1 = ordercount;
            cout<<"\t\t\t"<<ntemp->name1<<"\t"<<ntemp->price1<<"\t\t"<<ntemp->quantity1<<"\t\t"<<ntemp->price1*ntemp->quantity1<<endl;
            total = total + ((ntemp->price1)*(ntemp->quantity1));
            ntemp = ntemp->next1;
            _sleep(200);
        }
        cout<<"\t\t\t━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ "<<endl;
        cout<<"\t\t\t                                             Order total:- "<<total<<endl;
        cout<<"\t\t\t                                             CGST (9%):- "<<.09*total<<endl;
        cout<<"\t\t\t                                             SGST (9%):- "<<.09*total<<endl;
        cout<<"\t\t\t                                            ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ "<<endl;
        _sleep(200);
        cout<<"\t\t\t                                             Grand total:- "<<total+(0.18*total)<<endl;
        cout<<"\t\t\t━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ "<<endl;
        _sleep(1200);
        cout<<"\t\t\tScan Here:-         █║▌│ █│║▌║││█║▌│║║█║ │║║█║                    "<<endl;
        cout<<"\t\t\t━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ "<<endl;
        _sleep(200);
        cout<<"\t\t\t██████████████████████████████████████████████████████████████████"<<endl;
        _sleep(200);
        cout<<"\t\t\t▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"<<endl;
        _sleep(200);
        cout<<"\t\t\t▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒"<<endl;
        _sleep(200);
        cout<<"\t\t\t░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
        _sleep(200);
        exit(1);
    }
};
int main()
{
	restaurant b[10];
	string restaurant_list[10] = {"Behrouz Biryani","Cafe Peter","Malhar Family Restaurant","Chandani Restaurant","Samruddhi Garden","Shivar Garden","Govind Garden","Jai Ganesh Hotel","SP's Biryani House","Macdonald's"};
	for(int i=0;i<10;i++)
        b[i].load_data(i);
    int pin,fake;
    string name;
    long long int mob;
    cout<<"\n\n\n\n\n\n\n\n\t\t\t\t▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"<<endl;
    cout<<"\t\t\t\t▓▓                                        ▓▓";
    cout<<"\n\t\t\t\t▓▓    Welcome to Self-Order Creator!!!    ▓▓";
    cout<<"\n\t\t\t\t▓▓                                        ▓▓";
    cout<<"\n\t\t\t\t▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"<<endl;
    cout<<"\n\n\t\t\t\tEnter 4 digit Authentication Pin:- ";
    cin>>pin;
    system("CLS");
    if(pin==2000)
    {
        cout<<"\n\n\n\n\n\n\t\t\t\t ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ "<<endl;
        cout<<"\t\t\t\t│                                     │"<<endl;
        cout<<"\t\t\t\t│    Authentication Successful..!!!   │"<<endl;
        cout<<"\t\t\t\t│                                     │"<<endl;
        cout<<"\t\t\t\t ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ ━ "<<endl;
        _sleep(600);
        system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t\t█░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
        cout<<"\n\t\t\t\t\tSetting Database...                             3%"<<endl;
        _sleep(200);
        system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t\t██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
        cout<<"\n\t\t\t\t\tSetting Database...                             7%"<<endl;
        _sleep(200);
        system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t\t███░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
        cout<<"\n\t\t\t\t\tSetting Database...                             12%"<<endl;
        _sleep(200);
        system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t\t████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
        cout<<"\n\t\t\t\t\tSetting Database...                             18%"<<endl;
        _sleep(200);
        system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t\t█████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
        cout<<"\n\t\t\t\t\tLoading Restaurants...                          21%"<<endl;
        _sleep(200);
        system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t\t██████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
        cout<<"\n\t\t\t\t\tLoading Restaurants...                          26%"<<endl;
        _sleep(200);
        system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t\t███████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
        cout<<"\n\t\t\t\t\tLoading Restaurants...                          29%"<<endl;
        _sleep(200);
        system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t\t████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
        cout<<"\n\t\t\t\t\tLoading Dishes !!!...                           32%"<<endl;
        _sleep(200);
        system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t\t███████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
        cout<<"\n\t\t\t\t\tLoading Dishes !!!...                           36%"<<endl;
        _sleep(200);
        system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t\t███████████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
        cout<<"\n\t\t\t\t\tLoading Dishes !!!...                           41%"<<endl;
        _sleep(200);
        system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t\t██████████████████░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
        cout<<"\n\t\t\t\t\tLoading Dishes !!!...                           45%"<<endl;
        _sleep(200);
        system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t\t█████████████████████░░░░░░░░░░░░░░░░░░░░░░░░░░░"<<endl;
        cout<<"\n\t\t\t\t\tCreating Menu...                                49%"<<endl;
        _sleep(200);
        system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t\t██████████████████████████░░░░░░░░░░░░░░░░░░░░░░"<<endl;
        cout<<"\n\t\t\t\t\tCreating Menu...                                58%"<<endl;
        _sleep(200);
        system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t\t██████████████████████████████░░░░░░░░░░░░░░░░░░"<<endl;
        cout<<"\n\t\t\t\t\tCreating Menu...                                67%"<<endl;
        _sleep(200);
        system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t\t██████████████████████████████████████░░░░░░░░░░"<<endl;
        cout<<"\n\t\t\t\t\tCreating Menu...                                79%"<<endl;
        _sleep(200);
        system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t\t████████████████████████████████████████░░░░░░░░"<<endl;
        cout<<"\n\t\t\t\t\tAlmost Completed...                             84%"<<endl;
        _sleep(200);
        system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t\t██████████████████████████████████████████░░░░░░"<<endl;
        cout<<"\n\t\t\t\t\tAlmost Completed...                             95%"<<endl;
        _sleep(200);
        system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t\t██████████████████████████████████████████████░░"<<endl;
        cout<<"\n\t\t\t\t\tAlmost Completed...                             98%"<<endl;
        _sleep(200);
        system("CLS");
        cout<<"\n\n\n\n\n\t\t\t\t\t████████████████████████████████████████████████"<<endl;
        cout<<"\n\t\t\t\t\tCompleted . . . . !!!!                         100%"<<endl;
        _sleep(300);
        system("CLS");
        cin.ignore();
        cout<<"\n\n\n\n\n\n\n\n\t\t\t\t━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"<<endl;
        cout<<"\t\t\t\t\t ::::   Personal Details   ::::";
        cout<<"\n\t\t\t\t━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"<<endl;
        cout<<"\n\t\t\t\tEnter Customer Name:- ";
        getline(cin,name);
        cout<<"\n\t\t\t\tEnter Customer Mobile Number:- ";
        cin>>mob;
        cout<<"\n\n\n\t\t\t\t\tSuccessful!!!";
        _sleep(1000);
        system("CLS");
        int res_choice;
        cout<<"\n\t\t\t░▒▓█▓▒░▒▓█▓▒░▒▓█▓▒░▒▓█▓░▒▓█▓▒░▒▓█▓▒░▒▓█▓▒░▒▓██▓▒░▒▓█▓▒░▒"<<endl;
        cout<<"\t\t\t▒▓                                                    ▒▓"<<endl;
        cout<<"\t\t\t▒▓\tID\t\tRestaurant Name               ▒▓"<<endl;
        cout<<"\t\t\t▒▓                                                    ▒▓"<<endl;
        cout<<"\t\t\t░▒▓█▓▒░▒▓█▓▒░▒▓█▓▒░▒▓█▓░▒▓█▓▒░▒▓█▓▒░▒▓█▓▒░▒▓██▓▒░▒▓█▓▒░▒"<<endl;
        cout<<"\t\t\t│\t1\t\tBehrouz Biryani                │"<<endl;
        cout<<"\t\t\t━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"<<endl;
        cout<<"\t\t\t│\t2\t\tCafe Peter                     │"<<endl;
        cout<<"\t\t\t━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"<<endl;
        cout<<"\t\t\t│\t3\t\tMalhar Family Restaurant       │"<<endl;
        cout<<"\t\t\t━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"<<endl;
        cout<<"\t\t\t│\t4\t\tChandani Restaurant and Bar    │"<<endl;
        cout<<"\t\t\t━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"<<endl;
        cout<<"\t\t\t│\t5\t\tSamruddhi Garden               │"<<endl;
        cout<<"\t\t\t━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"<<endl;
        cout<<"\t\t\t│\t6\t\tShivar Garden                  │"<<endl;
        cout<<"\t\t\t━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"<<endl;
        cout<<"\t\t\t│\t7\t\tGovind Garden                  │"<<endl;
        cout<<"\t\t\t━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"<<endl;
        cout<<"\t\t\t│\t8\t\tJai Ganesh Hotel               │"<<endl;
        cout<<"\t\t\t━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"<<endl;
        cout<<"\t\t\t│\t9\t\tSP's Biryani House             │"<<endl;
        cout<<"\t\t\t━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"<<endl;
        cout<<"\t\t\t│\t10\t\tMacdonald's                    │"<<endl;
        cout<<"\t\t\t━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━"<<endl;
        cout<<"\n\t\t\tEnter the ID of the restaurant:- ";
        cin>>res_choice;
            b[res_choice-1].display_restaurant(restaurant_list[res_choice-1]);
            b[res_choice-1].display_orderlist(name , mob,restaurant_list[res_choice-1]);
    }
    else
        cout<<"\n\n\n\t\t\t\tWrong Pin....Authentication Failed !!"<<endl;
        return 0;
	}
