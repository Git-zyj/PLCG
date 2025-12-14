#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 130762704027260687ULL;
unsigned int var_8 = 3261752831U;
short var_9 = (short)15907;
int zero = 0;
unsigned short var_17 = (unsigned short)27181;
unsigned short var_18 = (unsigned short)26245;
unsigned char var_19 = (unsigned char)129;
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
