#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1463265401;
unsigned int var_1 = 3774153731U;
unsigned int var_2 = 125826817U;
signed char var_3 = (signed char)-55;
unsigned int var_4 = 2377908055U;
unsigned char var_5 = (unsigned char)45;
long long int var_6 = 4212739546242453740LL;
unsigned int var_7 = 936547668U;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 3123171585691456417ULL;
int var_10 = -1441773134;
signed char var_11 = (signed char)56;
long long int var_12 = 6587147806234611854LL;
unsigned short var_13 = (unsigned short)40308;
_Bool var_14 = (_Bool)1;
int zero = 0;
short var_15 = (short)24963;
unsigned short var_16 = (unsigned short)19162;
signed char var_17 = (signed char)68;
long long int var_18 = -2137463950980820312LL;
unsigned short var_19 = (unsigned short)39584;
unsigned long long int var_20 = 14078484707460653837ULL;
unsigned char var_21 = (unsigned char)246;
unsigned int var_22 = 118766462U;
unsigned char var_23 = (unsigned char)246;
short var_24 = (short)-5951;
int var_25 = 1358818431;
signed char var_26 = (signed char)48;
short var_27 = (short)19934;
int var_28 = -1410622464;
int var_29 = -956467153;
int var_30 = -1188173324;
unsigned long long int var_31 = 14116359263473001006ULL;
_Bool var_32 = (_Bool)0;
short var_33 = (short)3365;
unsigned long long int var_34 = 4951798115764847388ULL;
unsigned long long int var_35 = 13039441230312969621ULL;
unsigned short var_36 = (unsigned short)20652;
short var_37 = (short)16216;
int var_38 = -277944313;
unsigned short var_39 = (unsigned short)35534;
int var_40 = 475289147;
short var_41 = (short)10734;
unsigned char arr_0 [12] [12] ;
unsigned int arr_1 [12] ;
signed char arr_2 [12] [12] ;
short arr_4 [24] ;
unsigned int arr_5 [24] [24] ;
unsigned int arr_6 [24] ;
unsigned int arr_7 [24] ;
short arr_8 [24] [24] ;
unsigned short arr_13 [17] ;
long long int arr_19 [17] [17] ;
unsigned int arr_21 [17] [17] [17] ;
unsigned short arr_23 [17] ;
_Bool arr_26 [17] [17] [17] [17] ;
signed char arr_35 [17] ;
unsigned int arr_39 [20] ;
unsigned short arr_41 [20] ;
signed char arr_42 [20] [20] ;
short arr_43 [20] [20] [20] ;
unsigned short arr_48 [20] [20] ;
signed char arr_52 [20] [20] ;
unsigned char arr_53 [20] ;
unsigned short arr_57 [18] [18] ;
unsigned char arr_3 [12] [12] ;
unsigned short arr_9 [24] ;
unsigned int arr_10 [24] ;
short arr_11 [24] ;
long long int arr_14 [17] ;
int arr_17 [17] ;
long long int arr_18 [17] [17] ;
unsigned short arr_25 [17] [17] [17] ;
unsigned short arr_30 [17] [17] [17] [17] ;
int arr_31 [17] ;
unsigned short arr_36 [17] [17] ;
long long int arr_46 [20] [20] [20] [20] ;
unsigned int arr_47 [20] [20] [20] ;
unsigned char arr_50 [20] ;
unsigned short arr_51 [20] ;
_Bool arr_54 [20] [20] ;
unsigned int arr_55 [20] ;
long long int arr_58 [18] ;
unsigned int arr_69 [10] ;
unsigned short arr_73 [10] ;
short arr_74 [10] ;
short arr_75 [10] ;
unsigned long long int arr_76 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 3380805233U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)24299;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 3734350861U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 4179768763U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 1148397035U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (short)7011;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = (unsigned short)40777;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? -3472111547992163571LL : 7421562517221146452LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = 2369263932U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_23 [i_0] = (unsigned short)58929;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_35 [i_0] = (signed char)-57;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_39 [i_0] = (i_0 % 2 == 0) ? 167969299U : 1133900188U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_41 [i_0] = (i_0 % 2 == 0) ? (unsigned short)56279 : (unsigned short)60732;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_42 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)3 : (signed char)-42;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_43 [i_0] [i_1] [i_2] = (short)-2127;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_48 [i_0] [i_1] = (unsigned short)34841;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_52 [i_0] [i_1] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_53 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_57 [i_0] [i_1] = (unsigned short)42321;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned short)10443;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 1170336105U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = (short)29684;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = 4366831745549631410LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = 1688121623;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_18 [i_0] [i_1] = 306308225347178902LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_25 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned short)28020 : (unsigned short)57865;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)65404 : (unsigned short)12415;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_31 [i_0] = (i_0 % 2 == 0) ? -1620251396 : 474692248;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_36 [i_0] [i_1] = (unsigned short)20444;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_46 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -4639296386023186886LL : 2860845111079342691LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 3869839162U : 4241929688U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_50 [i_0] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_51 [i_0] = (unsigned short)53321;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_54 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_55 [i_0] = 2731588517U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_58 [i_0] = 5869683273376912352LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_69 [i_0] = 1775599495U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_73 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29374 : (unsigned short)8031;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_74 [i_0] = (i_0 % 2 == 0) ? (short)3594 : (short)32442;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_75 [i_0] = (i_0 % 2 == 0) ? (short)-2548 : (short)12766;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_76 [i_0] = (i_0 % 2 == 0) ? 2887053524252371264ULL : 3534184835136415521ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_25 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_31 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_46 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_47 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_50 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_51 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_54 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_55 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_58 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_69 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_73 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_74 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_75 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_76 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
