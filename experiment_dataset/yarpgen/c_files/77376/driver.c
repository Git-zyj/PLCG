#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)11218;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)176;
short var_8 = (short)22110;
unsigned short var_9 = (unsigned short)15393;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)-22293;
signed char var_14 = (signed char)21;
unsigned long long int var_15 = 6908414901209958177ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
