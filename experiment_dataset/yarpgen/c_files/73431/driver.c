#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)32;
unsigned long long int var_4 = 9449264304599945682ULL;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)-52;
short var_9 = (short)-14300;
unsigned long long int var_10 = 2343604395569510839ULL;
unsigned long long int var_11 = 11504668216741726019ULL;
int var_12 = -2101520554;
short var_13 = (short)23514;
int zero = 0;
signed char var_17 = (signed char)-55;
unsigned int var_18 = 3231515458U;
unsigned int var_19 = 4239308224U;
unsigned int var_20 = 2892021686U;
unsigned int var_21 = 167040572U;
signed char var_22 = (signed char)-103;
short var_23 = (short)13171;
unsigned long long int var_24 = 1647743336948289311ULL;
_Bool var_25 = (_Bool)1;
signed char var_26 = (signed char)9;
_Bool var_27 = (_Bool)0;
unsigned char var_28 = (unsigned char)109;
unsigned char var_29 = (unsigned char)91;
int var_30 = -1441194935;
long long int var_31 = -4810386840382915659LL;
unsigned char var_32 = (unsigned char)209;
signed char var_33 = (signed char)120;
short var_34 = (short)-13030;
signed char var_35 = (signed char)33;
unsigned short var_36 = (unsigned short)29507;
unsigned short var_37 = (unsigned short)47058;
signed char var_38 = (signed char)51;
unsigned long long int var_39 = 14446536611232211078ULL;
unsigned long long int var_40 = 8023873609367070090ULL;
int var_41 = -35212365;
unsigned int var_42 = 2318089885U;
int var_43 = -1349343731;
int var_44 = 2130817447;
short var_45 = (short)14413;
long long int var_46 = 2071023607376961825LL;
unsigned int var_47 = 511561646U;
short var_48 = (short)13841;
signed char var_49 = (signed char)107;
signed char var_50 = (signed char)-5;
unsigned long long int var_51 = 15724210544453579699ULL;
int var_52 = -685520326;
_Bool var_53 = (_Bool)0;
signed char var_54 = (signed char)30;
unsigned long long int var_55 = 8673739794248991198ULL;
_Bool var_56 = (_Bool)1;
unsigned long long int var_57 = 16003072423441585284ULL;
unsigned char var_58 = (unsigned char)152;
int var_59 = 308964060;
signed char var_60 = (signed char)82;
unsigned short var_61 = (unsigned short)47898;
int var_62 = 1285672171;
long long int var_63 = -6156160855447772937LL;
unsigned long long int var_64 = 14988693473068484910ULL;
signed char var_65 = (signed char)35;
short var_66 = (short)-20923;
short var_67 = (short)-347;
_Bool var_68 = (_Bool)1;
signed char var_69 = (signed char)-10;
unsigned char var_70 = (unsigned char)36;
signed char arr_1 [13] ;
long long int arr_6 [13] ;
unsigned long long int arr_7 [13] [13] [13] ;
unsigned long long int arr_10 [13] [13] [13] [13] ;
int arr_12 [13] [13] [13] [13] [13] ;
unsigned short arr_15 [13] [13] [13] ;
int arr_23 [24] ;
unsigned short arr_25 [24] [24] [24] ;
int arr_34 [24] [24] [24] [24] ;
_Bool arr_35 [24] [24] [24] [24] ;
long long int arr_38 [24] [24] [24] [24] [24] ;
unsigned short arr_42 [24] [24] ;
_Bool arr_43 [24] [24] [24] ;
long long int arr_46 [24] [24] ;
int arr_50 [24] [24] [24] [24] [24] ;
long long int arr_54 [24] ;
unsigned short arr_55 [24] [24] [24] [24] ;
short arr_59 [24] [24] [24] [24] ;
short arr_64 [24] [24] [24] [24] [24] [24] ;
signed char arr_69 [24] [24] [24] ;
_Bool arr_73 [24] [24] [24] [24] ;
signed char arr_82 [24] [24] [24] [24] [24] [24] [24] ;
unsigned int arr_91 [24] [24] [24] ;
unsigned long long int arr_94 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)-45;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = -8003223707354298513LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 17953987296920558132ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 17741346213747882349ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] = 670692661;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)11747;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = -521888394;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (unsigned short)24715;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = -1629970996;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_35 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = 5109944312656717065LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_42 [i_0] [i_1] = (unsigned short)1561;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_46 [i_0] [i_1] = 5985546615934552345LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] = -1483869666;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_54 [i_0] = -3522717251393937944LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_55 [i_0] [i_1] [i_2] [i_3] = (unsigned short)46860;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_59 [i_0] [i_1] [i_2] [i_3] = (short)5490;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_64 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)22964;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_69 [i_0] [i_1] [i_2] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_73 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 24; ++i_6) 
                                arr_82 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_6 % 2 == 0) ? (signed char)-115 : (signed char)102;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_91 [i_0] [i_1] [i_2] = 2991767108U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_94 [i_0] [i_1] [i_2] [i_3] = 12274098570534618400ULL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
