#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-111;
unsigned int var_5 = 1568237187U;
unsigned long long int var_15 = 18349997801003146803ULL;
unsigned char var_16 = (unsigned char)59;
int zero = 0;
int var_18 = 1527594155;
unsigned short var_19 = (unsigned short)26850;
void init() {
}

void checksum() {
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
