#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)14280;
unsigned int var_1 = 1310004461U;
unsigned long long int var_2 = 9187887148849452909ULL;
unsigned char var_3 = (unsigned char)120;
int var_4 = -1080930801;
unsigned short var_7 = (unsigned short)5565;
int zero = 0;
int var_10 = 842571444;
unsigned short var_11 = (unsigned short)39044;
unsigned char var_12 = (unsigned char)92;
_Bool var_13 = (_Bool)1;
_Bool arr_1 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
