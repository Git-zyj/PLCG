#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14059611434250358148ULL;
unsigned char var_1 = (unsigned char)71;
long long int var_2 = -1436354386558870991LL;
int var_3 = 1513274725;
long long int var_5 = 2899903597264594353LL;
unsigned long long int var_9 = 9389202136219066815ULL;
unsigned int var_10 = 3579416415U;
long long int var_14 = 6644300936320737589LL;
int zero = 0;
unsigned char var_15 = (unsigned char)114;
long long int var_16 = 5924402397810771978LL;
int var_17 = 88720248;
unsigned long long int var_18 = 7684502172016204266ULL;
unsigned long long int var_19 = 1911258893143621861ULL;
int arr_1 [20] ;
unsigned char arr_6 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 233679353;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)43 : (unsigned char)29;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
