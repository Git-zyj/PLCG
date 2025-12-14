#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 10793267844145732513ULL;
unsigned char var_9 = (unsigned char)125;
short var_12 = (short)-3199;
short var_14 = (short)21498;
int zero = 0;
signed char var_18 = (signed char)-73;
short var_19 = (short)-20360;
unsigned int var_20 = 4292791628U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
