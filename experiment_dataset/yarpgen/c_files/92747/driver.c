#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8948557472958221849LL;
int var_3 = -39141870;
_Bool var_5 = (_Bool)0;
short var_10 = (short)-8766;
int zero = 0;
unsigned int var_11 = 1213301590U;
unsigned int var_12 = 3467607164U;
short var_13 = (short)19564;
short var_14 = (short)6961;
int arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = -1261157974;
}

void checksum() {
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
