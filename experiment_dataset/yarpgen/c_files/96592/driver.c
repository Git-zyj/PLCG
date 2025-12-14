#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13359480003941723301ULL;
unsigned short var_3 = (unsigned short)9187;
long long int var_4 = -6281501598619998232LL;
short var_5 = (short)-10611;
int var_6 = 57316780;
signed char var_9 = (signed char)112;
int zero = 0;
long long int var_15 = -879039061836435639LL;
long long int var_16 = 3903885551641941071LL;
unsigned long long int var_17 = 13837397585465146255ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
