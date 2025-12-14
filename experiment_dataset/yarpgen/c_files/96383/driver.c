#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5406283372935813564ULL;
int var_2 = 781806994;
unsigned long long int var_3 = 5986448763426966445ULL;
long long int var_4 = -6710316353907226232LL;
signed char var_6 = (signed char)4;
unsigned long long int var_7 = 9379808949755168922ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_14 = 16067084498695770125ULL;
unsigned long long int var_16 = 12517875131735316493ULL;
unsigned char var_17 = (unsigned char)89;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 3993004242234349255ULL;
int zero = 0;
unsigned long long int var_20 = 3559640907604332706ULL;
int var_21 = -1699327850;
signed char var_22 = (signed char)-8;
unsigned short var_23 = (unsigned short)9527;
unsigned char arr_3 [25] [25] [25] ;
_Bool arr_6 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
