#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3680254116742736615ULL;
short var_1 = (short)-22928;
unsigned short var_5 = (unsigned short)34062;
unsigned short var_6 = (unsigned short)30331;
int var_7 = -87642666;
unsigned long long int var_8 = 6958840337037186236ULL;
int zero = 0;
long long int var_10 = 6364402348996499256LL;
_Bool var_11 = (_Bool)0;
long long int var_12 = -1919635384849399076LL;
unsigned long long int var_13 = 11334260507301091129ULL;
unsigned short var_14 = (unsigned short)33514;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 3844033246U;
short var_17 = (short)14493;
unsigned short var_18 = (unsigned short)13418;
long long int var_19 = 1909682408229007972LL;
long long int var_20 = 5402526600966555787LL;
short var_21 = (short)3757;
unsigned short var_22 = (unsigned short)6900;
short var_23 = (short)-9634;
_Bool var_24 = (_Bool)1;
long long int var_25 = -690451866886246332LL;
int var_26 = 1020768438;
signed char var_27 = (signed char)-114;
_Bool var_28 = (_Bool)1;
unsigned int var_29 = 3370164350U;
unsigned short var_30 = (unsigned short)22859;
unsigned long long int var_31 = 1579350605675094731ULL;
unsigned int var_32 = 3996631170U;
long long int var_33 = 6308415486007547854LL;
unsigned long long int var_34 = 7784844732450331132ULL;
unsigned int var_35 = 3914279386U;
unsigned char var_36 = (unsigned char)201;
long long int var_37 = -1179817086812612023LL;
_Bool var_38 = (_Bool)1;
long long int var_39 = -1648764843299225865LL;
long long int var_40 = 5683350231298118194LL;
short var_41 = (short)16794;
unsigned char var_42 = (unsigned char)71;
long long int var_43 = -5827201590473476674LL;
unsigned long long int var_44 = 18382338730055382555ULL;
short arr_1 [10] ;
long long int arr_2 [10] ;
unsigned char arr_3 [10] ;
short arr_4 [10] [10] ;
unsigned long long int arr_5 [19] [19] ;
unsigned char arr_7 [19] ;
unsigned short arr_8 [19] ;
unsigned long long int arr_9 [19] [19] [19] ;
unsigned short arr_11 [19] ;
unsigned long long int arr_12 [19] [19] [19] ;
long long int arr_14 [19] [19] [19] ;
long long int arr_15 [19] [19] ;
_Bool arr_17 [19] [19] [19] [19] ;
int arr_18 [19] [19] [19] [19] ;
short arr_19 [19] [19] ;
long long int arr_20 [19] [19] [19] [19] [19] ;
unsigned long long int arr_22 [19] [19] [19] [19] [19] [19] ;
long long int arr_26 [19] ;
long long int arr_29 [19] [19] [19] ;
signed char arr_31 [19] ;
short arr_32 [19] ;
unsigned short arr_34 [19] ;
long long int arr_35 [19] [19] [19] [19] ;
_Bool arr_36 [19] [19] [19] ;
long long int arr_37 [19] [19] [19] ;
long long int arr_38 [19] [19] [19] [19] [19] [19] ;
unsigned int arr_45 [19] [19] ;
long long int arr_47 [19] [19] [19] [19] ;
unsigned short arr_49 [19] [19] [19] ;
unsigned long long int arr_13 [19] [19] ;
unsigned char arr_40 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)23509;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 1872409455754007278LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-23095;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_5 [i_0] [i_1] = 3686431950858519805ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = (unsigned short)60778;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 4188555194805989992ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_11 [i_0] = (unsigned short)37541;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 16462469718128258886ULL : 3233145430137834881ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = -5712090970626805916LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_15 [i_0] [i_1] = -7406625113064183419LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -288571181 : 1456416276;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_19 [i_0] [i_1] = (short)-24989;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? -7295429057659762489LL : 5683762692586814561LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 4300981743137691381ULL : 15385938877732045224ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 2545611518890137310LL : 5782591379186211106LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 915815465316831860LL : -4649105427273936488LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? (signed char)45 : (signed char)113;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_32 [i_0] = (i_0 % 2 == 0) ? (short)-10298 : (short)-17484;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_34 [i_0] = (i_0 % 2 == 0) ? (unsigned short)18459 : (unsigned short)46168;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 5355791520716261357LL : 4891859480510685284LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 8542084251748966937LL : 7192893482783196488LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 19; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 19; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? 5375236003737045452LL : -3514359234631807551LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_45 [i_0] [i_1] = 1911343647U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_47 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? -1461592099987864946LL : -5034425553344344692LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = (unsigned short)49580;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? 4838247025722297092ULL : 12843472906170565073ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_40 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)31 : (unsigned char)151;
}

void checksum() {
    hash(&seed, var_10);
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_40 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
