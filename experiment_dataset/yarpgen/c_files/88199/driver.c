#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -6998380158019875791LL;
short var_8 = (short)-602;
long long int var_9 = -6971149695868489355LL;
long long int var_11 = -7968460071298309916LL;
int zero = 0;
unsigned short var_12 = (unsigned short)51473;
unsigned short var_13 = (unsigned short)10173;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
