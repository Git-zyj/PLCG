#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)46;
unsigned char var_3 = (unsigned char)251;
int var_4 = -591746357;
short var_5 = (short)-3077;
unsigned long long int var_16 = 15753353673571729059ULL;
int zero = 0;
signed char var_20 = (signed char)114;
unsigned long long int var_21 = 16859821398365778969ULL;
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
