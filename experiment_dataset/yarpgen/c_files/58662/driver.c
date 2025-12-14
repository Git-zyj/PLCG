#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)203;
signed char var_7 = (signed char)110;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)53109;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 3273253480793550992LL;
void init() {
}

void checksum() {
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
