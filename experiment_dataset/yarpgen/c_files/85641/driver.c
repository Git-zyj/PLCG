#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2752747713U;
long long int var_1 = -4853095579713724961LL;
unsigned char var_2 = (unsigned char)214;
long long int var_3 = 4779048207541687589LL;
int var_4 = -1458694605;
long long int var_5 = 5282507490993410120LL;
short var_6 = (short)18264;
long long int var_7 = 3748901974643182241LL;
long long int var_8 = -8522650222891282029LL;
unsigned long long int var_9 = 11475061337490544495ULL;
int var_10 = 726116663;
short var_11 = (short)14088;
long long int var_12 = -337166435092647418LL;
short var_13 = (short)-29305;
long long int var_14 = -1523304524907772874LL;
short var_15 = (short)32489;
unsigned char var_16 = (unsigned char)15;
short var_17 = (short)9693;
unsigned char var_18 = (unsigned char)203;
int zero = 0;
unsigned long long int var_19 = 987923004843466865ULL;
unsigned long long int var_20 = 4988373937242325900ULL;
unsigned long long int var_21 = 10376060691475868156ULL;
short var_22 = (short)-10707;
long long int var_23 = -361650616112760352LL;
unsigned short var_24 = (unsigned short)46214;
int var_25 = 1167776910;
int var_26 = -1126112251;
int var_27 = 1802733334;
_Bool var_28 = (_Bool)0;
int var_29 = 822875498;
short var_30 = (short)13754;
unsigned int var_31 = 2103109289U;
unsigned short var_32 = (unsigned short)24621;
unsigned int var_33 = 3090033486U;
_Bool var_34 = (_Bool)1;
long long int var_35 = -6714613516523138094LL;
int var_36 = 687536150;
_Bool var_37 = (_Bool)0;
long long int var_38 = 1554037348582663793LL;
int var_39 = 1663603756;
short var_40 = (short)27016;
signed char var_41 = (signed char)-71;
unsigned char arr_7 [17] [17] [17] ;
long long int arr_21 [17] [17] [17] [17] [17] ;
long long int arr_25 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)152 : (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -8057718304670024342LL : -5982123296809884966LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_25 [i_0] [i_1] = (i_1 % 2 == 0) ? -7137202637900149471LL : -502609007392078430LL;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_25 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
