#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)26;
unsigned long long int var_4 = 502034876019878069ULL;
short var_6 = (short)21965;
unsigned int var_9 = 3749933412U;
long long int var_16 = 2046918593078827111LL;
signed char var_18 = (signed char)102;
int zero = 0;
short var_20 = (short)-10710;
unsigned char var_21 = (unsigned char)250;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
