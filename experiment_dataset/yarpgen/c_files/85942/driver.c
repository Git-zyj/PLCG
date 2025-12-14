#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1953527613461995984LL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 1929349584U;
int var_3 = 359713666;
unsigned long long int var_4 = 7515004369188884045ULL;
short var_5 = (short)-21008;
unsigned short var_6 = (unsigned short)3211;
unsigned short var_7 = (unsigned short)55456;
unsigned short var_8 = (unsigned short)29925;
signed char var_9 = (signed char)-100;
int zero = 0;
unsigned int var_10 = 3548263126U;
int var_11 = -1624606613;
_Bool var_12 = (_Bool)1;
int var_13 = 224407181;
unsigned char var_14 = (unsigned char)248;
long long int var_15 = 6832135961155803465LL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 302127900U;
unsigned short var_18 = (unsigned short)21951;
unsigned char var_19 = (unsigned char)74;
signed char var_20 = (signed char)-24;
unsigned long long int var_21 = 3259335457275916715ULL;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 3396357556005740428ULL;
int var_24 = 2021294174;
long long int var_25 = -8326485020099145066LL;
unsigned int var_26 = 2064087703U;
unsigned long long int var_27 = 16057803084099608894ULL;
_Bool var_28 = (_Bool)1;
unsigned char var_29 = (unsigned char)32;
unsigned long long int var_30 = 12304940625982568823ULL;
unsigned int var_31 = 347357507U;
unsigned long long int var_32 = 8611227695297616680ULL;
long long int var_33 = -4248810569723531672LL;
int var_34 = 246457633;
long long int var_35 = -8715701750828353308LL;
unsigned short var_36 = (unsigned short)52090;
unsigned char var_37 = (unsigned char)231;
signed char var_38 = (signed char)66;
unsigned long long int var_39 = 17503050152167893827ULL;
unsigned long long int var_40 = 1252912627433808825ULL;
unsigned int var_41 = 238037397U;
signed char var_42 = (signed char)-72;
short var_43 = (short)6724;
unsigned int var_44 = 918985666U;
_Bool var_45 = (_Bool)1;
signed char var_46 = (signed char)25;
_Bool var_47 = (_Bool)1;
unsigned long long int var_48 = 5219816520429246324ULL;
_Bool var_49 = (_Bool)1;
signed char var_50 = (signed char)16;
_Bool var_51 = (_Bool)0;
unsigned char var_52 = (unsigned char)199;
unsigned long long int var_53 = 15961846339865118245ULL;
unsigned int var_54 = 798757364U;
long long int var_55 = -2392343341625382770LL;
int var_56 = -27807985;
unsigned short var_57 = (unsigned short)20688;
unsigned int var_58 = 1402660048U;
unsigned short var_59 = (unsigned short)57101;
signed char var_60 = (signed char)93;
int var_61 = -781007425;
int var_62 = -1522872265;
long long int var_63 = 3432746517964276155LL;
signed char var_64 = (signed char)30;
_Bool var_65 = (_Bool)0;
signed char var_66 = (signed char)-104;
long long int var_67 = 2060647410963131944LL;
signed char var_68 = (signed char)-95;
long long int var_69 = 6499478671982701048LL;
unsigned int var_70 = 1605582817U;
long long int var_71 = -510589980989104406LL;
unsigned long long int var_72 = 8252861512181339423ULL;
unsigned short var_73 = (unsigned short)24348;
unsigned short var_74 = (unsigned short)21614;
long long int var_75 = -2256453675004440473LL;
unsigned int var_76 = 437520811U;
unsigned char var_77 = (unsigned char)203;
unsigned int var_78 = 2810156714U;
int var_79 = 207083316;
unsigned short var_80 = (unsigned short)9902;
unsigned short var_81 = (unsigned short)59778;
unsigned long long int var_82 = 16841031809930984004ULL;
_Bool arr_0 [21] [21] ;
signed char arr_1 [21] ;
long long int arr_2 [21] ;
unsigned int arr_3 [21] ;
_Bool arr_4 [16] ;
long long int arr_5 [16] [16] ;
unsigned int arr_7 [16] ;
unsigned long long int arr_8 [16] [16] ;
unsigned long long int arr_9 [16] [16] [16] [16] ;
long long int arr_11 [16] [16] [16] [16] ;
_Bool arr_13 [16] [16] ;
signed char arr_14 [16] [16] [16] ;
unsigned int arr_16 [16] [16] ;
signed char arr_17 [16] [16] ;
int arr_18 [16] [16] [16] [16] ;
unsigned short arr_20 [16] [16] ;
int arr_21 [16] [16] ;
int arr_22 [16] ;
int arr_23 [16] [16] [16] [16] [16] ;
short arr_24 [16] [16] [16] ;
unsigned int arr_25 [16] [16] ;
unsigned int arr_26 [16] [16] ;
unsigned int arr_27 [16] [16] [16] [16] [16] [16] ;
unsigned int arr_30 [16] [16] [16] [16] ;
long long int arr_31 [16] [16] [16] ;
unsigned int arr_33 [16] [16] [16] ;
unsigned int arr_34 [16] [16] [16] [16] ;
int arr_35 [16] [16] [16] ;
unsigned long long int arr_36 [16] [16] [16] [16] ;
signed char arr_37 [16] [16] [16] [16] ;
int arr_39 [16] [16] [16] [16] ;
unsigned char arr_40 [16] [16] [16] [16] [16] ;
int arr_44 [16] [16] [16] ;
unsigned int arr_46 [16] [16] [16] ;
signed char arr_48 [16] [16] [16] [16] ;
unsigned long long int arr_49 [16] [16] [16] ;
int arr_51 [16] [16] ;
long long int arr_53 [14] [14] ;
int arr_55 [14] ;
int arr_57 [14] ;
int arr_59 [14] [14] [14] [14] [14] ;
_Bool arr_66 [14] [14] [14] [14] ;
unsigned long long int arr_70 [14] [14] [14] ;
_Bool arr_77 [14] [14] [14] [14] ;
unsigned short arr_88 [16] ;
unsigned long long int arr_89 [16] ;
signed char arr_104 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)65;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 7669790160971350144LL : 2793864749052691743LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 152998873U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_5 [i_0] [i_1] = -7304287464798243635LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 843952161U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = 17275910071854582711ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 17568062677632628208ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 6256348087018244550LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_13 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)-98;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_16 [i_0] [i_1] = 2151082842U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = (signed char)63;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 893362014;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_20 [i_0] [i_1] = (unsigned short)50319;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_21 [i_0] [i_1] = -413504875;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = 1789661998;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = -15542756;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (short)8087;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_25 [i_0] [i_1] = 1552284181U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_26 [i_0] [i_1] = 446565799U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 3825308592U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = 634355295U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = -8207310288192063879LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = 2965389176U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = 3432578295U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = 440760709;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = 15729460666703190964ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = (signed char)31;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = -1539017288;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_44 [i_0] [i_1] [i_2] = -848837437;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = 2550096369U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = 14715206924158739052ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_51 [i_0] [i_1] = 1193768716;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_53 [i_0] [i_1] = -351976797981715150LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_55 [i_0] = (i_0 % 2 == 0) ? -424883984 : 893336838;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_57 [i_0] = (i_0 % 2 == 0) ? -1258444150 : 1158774844;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_59 [i_0] [i_1] [i_2] [i_3] [i_4] = 1109788640;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_66 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_70 [i_0] [i_1] [i_2] = 5353217109599277379ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_77 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_88 [i_0] = (unsigned short)13616;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_89 [i_0] = 266587975815039458ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_104 [i_0] = (signed char)43;
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
    hash(&seed, var_77);
    hash(&seed, var_78);
    hash(&seed, var_79);
    hash(&seed, var_80);
    hash(&seed, var_81);
    hash(&seed, var_82);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
