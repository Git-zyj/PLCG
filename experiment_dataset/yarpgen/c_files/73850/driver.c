#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)184;
unsigned int var_9 = 3664177371U;
int var_10 = -1343555450;
int zero = 0;
unsigned short var_12 = (unsigned short)2544;
unsigned short var_13 = (unsigned short)38587;
unsigned long long int var_14 = 242349349111716036ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
