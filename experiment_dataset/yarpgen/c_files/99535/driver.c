#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5898864769266889745ULL;
unsigned int var_2 = 1253444705U;
signed char var_3 = (signed char)85;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 11959721362047585929ULL;
long long int var_7 = -9112050190067589172LL;
unsigned char var_8 = (unsigned char)190;
unsigned short var_9 = (unsigned short)34148;
int zero = 0;
unsigned int var_10 = 1210083014U;
unsigned long long int var_11 = 15042652857359455780ULL;
_Bool var_12 = (_Bool)1;
int var_13 = -975546665;
long long int var_14 = -3329838176671613606LL;
long long int arr_0 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = 3088609266658679851LL;
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
