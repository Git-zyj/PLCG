#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 14689092486169703589ULL;
unsigned short var_2 = (unsigned short)6078;
short var_4 = (short)13180;
_Bool var_5 = (_Bool)1;
long long int var_9 = -2331988327111000046LL;
int zero = 0;
unsigned short var_10 = (unsigned short)16121;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 3926172949U;
unsigned long long int var_13 = 223892103429415608ULL;
long long int var_14 = -5524972640514629711LL;
short arr_1 [10] ;
signed char arr_2 [10] [10] [10] ;
unsigned long long int arr_3 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-10199;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-126;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 11504655932441901349ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
