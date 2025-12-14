#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_9 = 155438556U;
int var_10 = 626787207;
unsigned char var_14 = (unsigned char)90;
int zero = 0;
unsigned short var_17 = (unsigned short)33145;
_Bool var_18 = (_Bool)1;
long long int var_19 = 5402377009726233602LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
