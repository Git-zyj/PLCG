#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2495;
long long int var_5 = 5821284836341608020LL;
unsigned char var_8 = (unsigned char)123;
short var_9 = (short)-12887;
int zero = 0;
unsigned long long int var_11 = 14642033983248127529ULL;
short var_12 = (short)-29866;
int var_13 = -4075819;
unsigned char var_14 = (unsigned char)144;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
