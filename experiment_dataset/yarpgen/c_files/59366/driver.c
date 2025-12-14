#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3642907576657284190LL;
int var_3 = -1301644110;
unsigned short var_7 = (unsigned short)9990;
int zero = 0;
unsigned short var_16 = (unsigned short)51817;
unsigned long long int var_17 = 7620061293082006551ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
