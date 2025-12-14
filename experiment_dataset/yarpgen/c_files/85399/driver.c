#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12253662691311647911ULL;
unsigned char var_4 = (unsigned char)144;
unsigned char var_7 = (unsigned char)234;
int zero = 0;
long long int var_14 = 4330190760563336503LL;
unsigned short var_15 = (unsigned short)12513;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
