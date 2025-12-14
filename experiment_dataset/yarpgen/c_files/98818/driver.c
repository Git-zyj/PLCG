#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)9198;
int var_3 = 1607795572;
long long int var_4 = 5933035183008048645LL;
short var_5 = (short)28697;
unsigned char var_7 = (unsigned char)232;
unsigned char var_9 = (unsigned char)210;
long long int var_10 = 2245316828172200056LL;
unsigned char var_11 = (unsigned char)226;
unsigned int var_13 = 3096561168U;
int zero = 0;
signed char var_14 = (signed char)-88;
unsigned char var_15 = (unsigned char)225;
long long int var_16 = -3596540299456657253LL;
unsigned char var_17 = (unsigned char)233;
unsigned long long int var_18 = 11317356848934534627ULL;
_Bool var_19 = (_Bool)1;
int var_20 = 73716915;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)61827;
long long int var_23 = -4177827458414373223LL;
_Bool var_24 = (_Bool)0;
unsigned long long int var_25 = 4448252469318476881ULL;
signed char var_26 = (signed char)-57;
unsigned char var_27 = (unsigned char)132;
signed char var_28 = (signed char)17;
unsigned char var_29 = (unsigned char)70;
unsigned int var_30 = 1825525809U;
int var_31 = 1877920570;
unsigned char var_32 = (unsigned char)144;
unsigned int var_33 = 585053981U;
_Bool var_34 = (_Bool)1;
signed char var_35 = (signed char)-40;
unsigned char var_36 = (unsigned char)165;
signed char var_37 = (signed char)-84;
unsigned short var_38 = (unsigned short)8047;
unsigned int var_39 = 4082083964U;
unsigned short var_40 = (unsigned short)56109;
long long int var_41 = -4883629446264579763LL;
unsigned char var_42 = (unsigned char)245;
unsigned long long int var_43 = 18409162505187910438ULL;
signed char var_44 = (signed char)109;
long long int var_45 = -1665079540864035378LL;
short arr_0 [13] ;
signed char arr_1 [13] ;
long long int arr_2 [13] ;
long long int arr_3 [13] ;
unsigned short arr_4 [13] [13] ;
unsigned char arr_10 [13] [13] [13] ;
long long int arr_19 [17] ;
long long int arr_20 [17] ;
int arr_22 [17] ;
signed char arr_23 [17] ;
unsigned int arr_27 [17] [17] ;
unsigned long long int arr_30 [17] [17] [17] [17] [17] [17] ;
signed char arr_31 [17] [17] [17] [17] ;
unsigned char arr_33 [17] ;
unsigned char arr_36 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (short)-7753;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (signed char)67;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 7333187778139001649LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 6650377808390781157LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)53169;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_19 [i_0] = 3595097695336800540LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = 7588681093190744336LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_22 [i_0] = -551550851;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_23 [i_0] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? 3227140802U : 328784447U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 5550589904893600060ULL : 12161708382181493524ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_33 [i_0] = (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_36 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)247 : (unsigned char)55;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
