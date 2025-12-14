#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2901131286U;
unsigned short var_5 = (unsigned short)40320;
unsigned char var_6 = (unsigned char)159;
unsigned short var_9 = (unsigned short)65240;
int zero = 0;
int var_17 = 504101631;
unsigned int var_18 = 3338055972U;
unsigned int var_19 = 1785541538U;
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
