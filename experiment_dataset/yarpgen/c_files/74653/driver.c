#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -541369429;
unsigned short var_7 = (unsigned short)47797;
unsigned int var_9 = 234178492U;
int zero = 0;
int var_14 = -1379705876;
int var_15 = -2042449375;
unsigned char var_16 = (unsigned char)82;
unsigned short var_17 = (unsigned short)26075;
unsigned int var_18 = 2267852831U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
