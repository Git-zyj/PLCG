#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16073359331296958987ULL;
unsigned int var_6 = 3174153945U;
int var_8 = -734996921;
long long int var_9 = 6691884662119094429LL;
unsigned short var_11 = (unsigned short)57327;
int var_12 = 1629054639;
int zero = 0;
unsigned short var_13 = (unsigned short)41365;
unsigned int var_14 = 3966981006U;
unsigned char var_15 = (unsigned char)37;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
