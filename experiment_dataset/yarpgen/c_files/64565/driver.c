#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4149916319567437714LL;
_Bool var_9 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
long long int var_16 = 3341548497858317406LL;
long long int var_17 = 4340543627184590908LL;
unsigned char var_18 = (unsigned char)222;
short var_19 = (short)-7211;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
