#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1169671326970979150LL;
unsigned long long int var_1 = 9289672416933901056ULL;
unsigned long long int var_4 = 4481485315133819066ULL;
unsigned long long int var_5 = 8836047235286774804ULL;
unsigned int var_7 = 435325600U;
unsigned int var_8 = 1556829837U;
unsigned long long int var_9 = 819230460638687169ULL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 4139450419U;
long long int var_12 = -6197412274008763337LL;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)19;
long long int var_15 = 57283369893137053LL;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 4065742185U;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)132;
unsigned char var_20 = (unsigned char)201;
_Bool var_21 = (_Bool)0;
long long int var_22 = 7902015648694997610LL;
unsigned int var_23 = 175843769U;
_Bool var_24 = (_Bool)1;
long long int var_25 = 6157314231601390921LL;
_Bool var_26 = (_Bool)0;
_Bool var_27 = (_Bool)0;
long long int var_28 = 6120240925642626308LL;
unsigned char var_29 = (unsigned char)210;
_Bool var_30 = (_Bool)1;
long long int var_31 = -5351051297001730570LL;
unsigned char var_32 = (unsigned char)224;
unsigned char var_33 = (unsigned char)23;
unsigned char var_34 = (unsigned char)215;
_Bool var_35 = (_Bool)1;
unsigned char var_36 = (unsigned char)228;
unsigned long long int var_37 = 13666852569905387955ULL;
unsigned long long int var_38 = 2086814020829401785ULL;
unsigned int var_39 = 2279169977U;
unsigned int var_40 = 888715271U;
long long int var_41 = 4657463157977120545LL;
long long int var_42 = -6251546081468482214LL;
unsigned long long int var_43 = 14113703269892181965ULL;
_Bool var_44 = (_Bool)1;
unsigned long long int var_45 = 9134976689057401228ULL;
long long int var_46 = 1854470345382589740LL;
_Bool var_47 = (_Bool)1;
unsigned int var_48 = 2359858968U;
unsigned char var_49 = (unsigned char)80;
long long int var_50 = 3249284394454432677LL;
long long int var_51 = -2003782187247406377LL;
unsigned int var_52 = 3487806187U;
_Bool var_53 = (_Bool)0;
_Bool var_54 = (_Bool)1;
unsigned char var_55 = (unsigned char)137;
_Bool var_56 = (_Bool)0;
_Bool var_57 = (_Bool)0;
long long int var_58 = 6148727785031857982LL;
unsigned long long int var_59 = 13769948985217293935ULL;
long long int var_60 = -2922439278751187912LL;
unsigned long long int var_61 = 2986943031135995770ULL;
_Bool var_62 = (_Bool)1;
long long int var_63 = -75612470457240590LL;
unsigned int var_64 = 2276797914U;
long long int var_65 = -6416799931834020172LL;
unsigned long long int var_66 = 13214593556942640299ULL;
long long int var_67 = 3409608342300702486LL;
_Bool var_68 = (_Bool)0;
unsigned int var_69 = 584177097U;
long long int var_70 = -5429264980397028130LL;
_Bool var_71 = (_Bool)0;
_Bool var_72 = (_Bool)1;
long long int var_73 = 3642580959255586224LL;
unsigned long long int var_74 = 448798234008731943ULL;
long long int var_75 = -4195365788498622568LL;
long long int var_76 = 2788763951286016919LL;
long long int arr_1 [10] [10] ;
long long int arr_2 [10] [10] ;
long long int arr_8 [21] ;
long long int arr_9 [21] [21] [21] ;
_Bool arr_12 [21] [21] [21] [21] [21] [21] ;
long long int arr_13 [21] [21] [21] ;
long long int arr_29 [21] [21] [21] [21] ;
_Bool arr_30 [21] [21] ;
unsigned long long int arr_34 [21] [21] [21] [21] ;
long long int arr_35 [21] [21] [21] [21] [21] [21] ;
_Bool arr_47 [21] ;
long long int arr_57 [21] [21] ;
unsigned char arr_68 [21] [21] [21] [21] [21] ;
_Bool arr_81 [22] ;
_Bool arr_82 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = 5619900725889710533LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 2264117503063208732LL : -240250387371327104LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 1004217982521192196LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -7984782400466822019LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = -6782944179030899714LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = -1682426852298815220LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_30 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = 11343387768331886862ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? 2459020151792435264LL : 2038418428049344055LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_47 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_57 [i_0] [i_1] = -224544633104921879LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_68 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_81 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_82 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
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
    hash(&seed, var_57);
    hash(&seed, var_58);
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
    hash(&seed, var_74);
    hash(&seed, var_75);
    hash(&seed, var_76);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
