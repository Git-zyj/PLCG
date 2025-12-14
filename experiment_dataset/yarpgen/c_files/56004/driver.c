#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6147503525997824361LL;
unsigned long long int var_1 = 110701480417308464ULL;
int var_2 = -1724647139;
long long int var_3 = 2487301630939947271LL;
long long int var_4 = -3382713015464982173LL;
int var_5 = -169211786;
unsigned long long int var_6 = 2265778721927876128ULL;
unsigned char var_7 = (unsigned char)28;
unsigned char var_8 = (unsigned char)196;
long long int var_9 = 6629291457703071424LL;
int zero = 0;
unsigned char var_10 = (unsigned char)200;
unsigned long long int var_11 = 7953248630313863291ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
