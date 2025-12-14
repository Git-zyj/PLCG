#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2709579525U;
_Bool var_3 = (_Bool)0;
long long int var_4 = 5305342889906256922LL;
short var_6 = (short)-25007;
unsigned short var_7 = (unsigned short)18011;
int var_9 = -1874387799;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned short var_12 = (unsigned short)40781;
int var_13 = 1990665497;
unsigned char var_14 = (unsigned char)215;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)25;
unsigned char var_18 = (unsigned char)22;
unsigned short var_19 = (unsigned short)34584;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-6657;
int var_22 = 2079563457;
unsigned short var_23 = (unsigned short)48761;
unsigned long long int var_24 = 12202579213641337779ULL;
long long int var_25 = 5050256652010260330LL;
unsigned short arr_0 [19] ;
short arr_1 [19] ;
int arr_2 [19] ;
_Bool arr_3 [19] [19] ;
short arr_5 [19] ;
unsigned short arr_6 [19] ;
_Bool arr_7 [19] ;
unsigned long long int arr_9 [19] ;
unsigned int arr_11 [19] [19] [19] [19] ;
unsigned int arr_13 [19] [19] [19] [19] ;
unsigned short arr_18 [19] ;
unsigned int arr_4 [19] [19] [19] ;
long long int arr_8 [19] ;
long long int arr_17 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned short)17130;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (short)-10578;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = -1114463090;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (short)2314;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_6 [i_0] = (unsigned short)27856;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = 5905210352185688370ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 4200402949U : 1208146109U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 1035739112U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_18 [i_0] = (i_0 % 2 == 0) ? (unsigned short)49158 : (unsigned short)57934;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = 2041703608U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = -4161550525026207625LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? 8753799148954684835LL : -2898169542253266057LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_4 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_17 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
