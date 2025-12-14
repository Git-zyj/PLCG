#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-101;
long long int var_5 = -4151296252848198133LL;
unsigned long long int var_8 = 10491328408593622919ULL;
int zero = 0;
int var_10 = 178289139;
unsigned short var_11 = (unsigned short)248;
unsigned char var_12 = (unsigned char)249;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
