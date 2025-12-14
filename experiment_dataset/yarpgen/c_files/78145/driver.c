#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)215;
long long int var_7 = -5457406649715874530LL;
unsigned int var_13 = 3228523556U;
int zero = 0;
unsigned long long int var_14 = 4079502440648352718ULL;
unsigned int var_15 = 986408228U;
void init() {
}

void checksum() {
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
