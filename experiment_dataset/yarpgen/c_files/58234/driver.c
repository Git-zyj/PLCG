#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)187;
unsigned char var_2 = (unsigned char)86;
long long int var_3 = -4938757027894824824LL;
unsigned int var_4 = 3377673237U;
_Bool var_6 = (_Bool)0;
long long int var_7 = 635224763116610388LL;
int var_8 = 348252115;
unsigned int var_9 = 1337070067U;
long long int var_10 = -2809247485428000446LL;
int zero = 0;
long long int var_11 = -7426067148250571238LL;
long long int var_12 = -187596048784442751LL;
long long int var_13 = 1186960550105170329LL;
long long int var_14 = 8067384587771804020LL;
long long int var_15 = -657887349732305159LL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 89019537U;
long long int var_18 = -2588827474658221098LL;
long long int var_19 = -2495099735822156237LL;
long long int var_20 = 6734616978742415234LL;
unsigned char var_21 = (unsigned char)2;
long long int var_22 = 7939225232246746341LL;
long long int var_23 = 5633020546322522575LL;
long long int var_24 = -3012271061046909657LL;
long long int var_25 = 5441817102285099688LL;
int var_26 = -1297044419;
unsigned int var_27 = 3118456561U;
long long int var_28 = -5701170068719864812LL;
int var_29 = 1549324588;
long long int var_30 = 4282732593603643659LL;
long long int var_31 = 3020792432220764887LL;
_Bool var_32 = (_Bool)1;
long long int var_33 = -2322804853503722686LL;
_Bool var_34 = (_Bool)1;
long long int var_35 = 2666073998437504861LL;
unsigned int var_36 = 3047070970U;
long long int var_37 = -7506761825711114643LL;
long long int var_38 = -860157738405664060LL;
long long int var_39 = 2851052747665210537LL;
long long int var_40 = -4013732545465282495LL;
int var_41 = 649636329;
long long int var_42 = 7635476979476102871LL;
unsigned int var_43 = 3240733009U;
long long int var_44 = -4813990081775230510LL;
int var_45 = -1378926249;
unsigned int var_46 = 1865652626U;
_Bool var_47 = (_Bool)0;
unsigned char var_48 = (unsigned char)81;
long long int var_49 = -7172473391160716336LL;
long long int var_50 = 5872578314312739751LL;
long long int var_51 = -3438603839697162780LL;
long long int var_52 = 2398877240289874479LL;
long long int var_53 = 6759847593346983587LL;
long long int var_54 = -927647533232636381LL;
long long int var_55 = 1952478195120085918LL;
long long int var_56 = 2750232598212817996LL;
int arr_1 [22] [22] ;
unsigned int arr_2 [22] ;
_Bool arr_3 [22] ;
long long int arr_6 [23] ;
int arr_7 [23] ;
unsigned char arr_8 [23] ;
long long int arr_9 [23] ;
long long int arr_12 [23] [23] [23] [23] ;
unsigned char arr_16 [23] [23] [23] [23] [23] ;
long long int arr_20 [23] [23] [23] [23] [23] [23] ;
long long int arr_21 [23] [23] [23] [23] ;
int arr_22 [23] [23] [23] [23] [23] ;
long long int arr_23 [23] [23] [23] [23] [23] ;
_Bool arr_24 [23] [23] [23] ;
long long int arr_27 [23] [23] ;
long long int arr_28 [23] [23] [23] ;
long long int arr_29 [23] [23] [23] [23] ;
long long int arr_31 [23] [23] ;
int arr_34 [23] [23] [23] [23] ;
long long int arr_35 [23] [23] ;
_Bool arr_36 [23] [23] ;
unsigned int arr_41 [23] [23] [23] [23] [23] ;
long long int arr_44 [23] [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = 33188540;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 3351198572U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = -4777658077165905596LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = -2066225948;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (unsigned char)115;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 6334915720304653399LL : 5686148013243805650LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -3833680374094814747LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? -722489137376661065LL : 9218662984081683791LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 3074612792640444289LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = 1054516544;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 6132550365064377123LL : 3042858671986225787LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_27 [i_0] [i_1] = 656267117153452342LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -448968632997581524LL : 5761327972827439782LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -9191375478639946309LL : 5480877176924165375LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_31 [i_0] [i_1] = (i_1 % 2 == 0) ? 7927796914750619216LL : -3356790813485433815LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = -189667826;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_35 [i_0] [i_1] = -3927619811381749245LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_36 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 2011089392U : 1056886697U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? -719476427318499312LL : -5326538738842825990LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
