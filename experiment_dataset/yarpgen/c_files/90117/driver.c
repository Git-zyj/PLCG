#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)19509;
unsigned long long int var_7 = 14455524972260159233ULL;
unsigned char var_10 = (unsigned char)159;
int zero = 0;
unsigned long long int var_12 = 15253257395144163710ULL;
unsigned char var_13 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
