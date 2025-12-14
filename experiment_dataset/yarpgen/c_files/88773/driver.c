#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1146148047;
unsigned char var_1 = (unsigned char)214;
unsigned short var_16 = (unsigned short)20262;
int zero = 0;
unsigned long long int var_17 = 9212741985955315158ULL;
signed char var_18 = (signed char)114;
void init() {
}

void checksum() {
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
