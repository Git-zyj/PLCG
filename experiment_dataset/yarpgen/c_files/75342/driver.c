#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 626499873446080933ULL;
long long int var_3 = -1939036904294192192LL;
short var_4 = (short)22034;
unsigned long long int var_5 = 4881002260934293931ULL;
unsigned short var_6 = (unsigned short)44616;
long long int var_7 = -4884356505345461475LL;
unsigned short var_8 = (unsigned short)17684;
unsigned long long int var_9 = 17403380866442283036ULL;
unsigned int var_10 = 3192914039U;
int var_12 = 1549368004;
int zero = 0;
unsigned int var_13 = 4018868059U;
int var_14 = -1035336749;
signed char var_15 = (signed char)103;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 10575693836597301991ULL;
int var_18 = -1348585426;
unsigned long long int var_19 = 4403149810473679773ULL;
unsigned long long int arr_0 [12] [12] ;
signed char arr_2 [12] ;
unsigned int arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 7989647535312511702ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (signed char)5;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 1067597021U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
