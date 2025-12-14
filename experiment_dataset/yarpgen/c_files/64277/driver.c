#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2314283337U;
short var_1 = (short)5921;
int var_2 = 948727155;
unsigned char var_3 = (unsigned char)83;
int var_4 = 670812576;
signed char var_5 = (signed char)0;
long long int var_6 = 648279904873204190LL;
short var_7 = (short)16499;
int var_8 = -723085890;
unsigned long long int var_9 = 9617049554594793593ULL;
unsigned char var_10 = (unsigned char)204;
unsigned long long int var_11 = 6118271014089278393ULL;
unsigned short var_12 = (unsigned short)32456;
unsigned char var_14 = (unsigned char)181;
int zero = 0;
short var_15 = (short)-794;
long long int var_16 = 3595728187790810375LL;
int var_17 = 1205667422;
short var_18 = (short)1209;
long long int var_19 = 4954307612409027089LL;
long long int var_20 = 984997385549761214LL;
signed char var_21 = (signed char)-11;
long long int var_22 = -1509362032761701647LL;
unsigned short var_23 = (unsigned short)12518;
unsigned char var_24 = (unsigned char)53;
unsigned long long int var_25 = 15664184201038008480ULL;
int var_26 = -1260829669;
unsigned char var_27 = (unsigned char)17;
short var_28 = (short)9634;
long long int arr_1 [24] ;
unsigned char arr_3 [24] [24] ;
unsigned int arr_7 [12] [12] ;
int arr_11 [12] [12] [12] ;
unsigned char arr_17 [12] ;
int arr_20 [25] ;
signed char arr_22 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -1078583386229787281LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)64;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = 1344495489U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = -932529566;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_17 [i_0] = (unsigned char)51;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_20 [i_0] = -1829290377;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (signed char)-36 : (signed char)55;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
