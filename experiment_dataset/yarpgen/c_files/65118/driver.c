#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)10;
int var_6 = -575415861;
_Bool var_7 = (_Bool)1;
long long int var_8 = 216039271764293408LL;
int var_11 = 841644663;
signed char var_12 = (signed char)-102;
int zero = 0;
signed char var_16 = (signed char)-35;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)23776;
void init() {
}

void checksum() {
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
