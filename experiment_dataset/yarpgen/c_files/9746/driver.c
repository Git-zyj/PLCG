#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)33693;
long long int var_1 = -198348546579033742LL;
short var_7 = (short)-13893;
long long int var_12 = 7286191571519750893LL;
long long int var_17 = 7517209391081741707LL;
int zero = 0;
unsigned int var_18 = 735350199U;
unsigned short var_19 = (unsigned short)30787;
unsigned long long int var_20 = 921472964523136200ULL;
long long int var_21 = -2219612960513244094LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
