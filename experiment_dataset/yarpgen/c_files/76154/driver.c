#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1965523251;
unsigned char var_3 = (unsigned char)65;
unsigned long long int var_6 = 18001692425221999683ULL;
int zero = 0;
unsigned long long int var_13 = 18036428237112869135ULL;
unsigned long long int var_14 = 4348057287619566684ULL;
void init() {
}

void checksum() {
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
