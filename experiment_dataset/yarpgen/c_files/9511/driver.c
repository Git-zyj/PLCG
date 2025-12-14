#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)224;
unsigned short var_12 = (unsigned short)29648;
int var_13 = -1201584479;
int zero = 0;
unsigned short var_17 = (unsigned short)11171;
unsigned long long int var_18 = 17246417549082661095ULL;
signed char var_19 = (signed char)-14;
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
