#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-3;
unsigned char var_1 = (unsigned char)158;
int var_2 = 1505441497;
short var_3 = (short)-24136;
long long int var_4 = 1188764790051854839LL;
int zero = 0;
long long int var_15 = -205233776119980630LL;
unsigned int var_16 = 3713515757U;
short var_17 = (short)25391;
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
