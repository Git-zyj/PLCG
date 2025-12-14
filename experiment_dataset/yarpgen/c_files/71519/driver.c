#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)34731;
unsigned short var_2 = (unsigned short)20231;
unsigned char var_3 = (unsigned char)192;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned short var_13 = (unsigned short)51412;
int zero = 0;
unsigned int var_17 = 2659421724U;
unsigned int var_18 = 767679500U;
long long int var_19 = -8039336092025573169LL;
unsigned short var_20 = (unsigned short)9129;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
