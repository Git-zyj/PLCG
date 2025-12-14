#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 3080457995439533932ULL;
unsigned short var_9 = (unsigned short)46222;
signed char var_10 = (signed char)13;
unsigned char var_17 = (unsigned char)18;
int zero = 0;
short var_20 = (short)-13503;
unsigned char var_21 = (unsigned char)244;
unsigned long long int var_22 = 1030419797373438221ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
