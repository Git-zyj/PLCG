#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)0;
unsigned short var_9 = (unsigned short)15277;
unsigned short var_12 = (unsigned short)21501;
unsigned short var_14 = (unsigned short)51674;
int zero = 0;
signed char var_16 = (signed char)44;
_Bool var_17 = (_Bool)1;
unsigned int var_18 = 947357540U;
int var_19 = -1525685398;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)53990;
_Bool var_22 = (_Bool)1;
signed char var_23 = (signed char)-74;
int var_24 = -350980087;
unsigned short var_25 = (unsigned short)60623;
long long int var_26 = 6446812880752429319LL;
unsigned long long int var_27 = 17434632474994152750ULL;
signed char var_28 = (signed char)12;
unsigned short var_29 = (unsigned short)12552;
_Bool arr_1 [15] ;
unsigned short arr_4 [14] [14] ;
signed char arr_5 [14] ;
unsigned short arr_7 [22] ;
int arr_8 [22] ;
unsigned int arr_10 [22] ;
int arr_12 [22] [22] [22] [22] ;
unsigned long long int arr_16 [22] ;
unsigned short arr_6 [14] ;
_Bool arr_18 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)49397;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = (signed char)-112;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned short)57203;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 514754864;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 575620349U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -946607482 : 1407308081;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = 16909219852860468697ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned short)27777;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = (_Bool)0;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
