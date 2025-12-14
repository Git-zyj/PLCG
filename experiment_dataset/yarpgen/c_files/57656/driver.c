#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)84;
unsigned int var_6 = 4082700192U;
unsigned short var_8 = (unsigned short)52122;
unsigned char var_9 = (unsigned char)88;
int zero = 0;
unsigned long long int var_18 = 7318744984219630577ULL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 2627792484023345409ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
