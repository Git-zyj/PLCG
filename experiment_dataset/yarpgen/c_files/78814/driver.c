#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)22;
unsigned short var_4 = (unsigned short)54980;
signed char var_6 = (signed char)34;
unsigned short var_8 = (unsigned short)62859;
unsigned long long int var_14 = 8010597532065801017ULL;
int zero = 0;
short var_16 = (short)26305;
short var_17 = (short)9676;
int var_18 = -230661623;
void init() {
}

void checksum() {
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
