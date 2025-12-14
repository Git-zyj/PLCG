#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)48;
int var_1 = 1381734549;
unsigned int var_3 = 815633788U;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 1387750575U;
int zero = 0;
unsigned int var_14 = 330865245U;
unsigned long long int var_15 = 10802007639447316110ULL;
unsigned long long int var_16 = 7310044125908040279ULL;
int var_17 = -1547284738;
unsigned long long int var_18 = 9507355683473151124ULL;
unsigned int arr_2 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 3782706626U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
