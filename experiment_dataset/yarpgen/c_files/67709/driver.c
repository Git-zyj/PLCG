#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7942928175937001652LL;
int var_5 = -585208525;
long long int var_10 = -4590273572527376492LL;
unsigned short var_13 = (unsigned short)25584;
int zero = 0;
unsigned long long int var_17 = 4825371936897628076ULL;
unsigned short var_18 = (unsigned short)18643;
long long int var_19 = 8177095890637254589LL;
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
