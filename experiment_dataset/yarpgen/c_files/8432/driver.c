#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17941100170842043867ULL;
unsigned long long int var_7 = 10139971727001150841ULL;
int var_8 = 1253382372;
unsigned long long int var_9 = 15176593860371335667ULL;
int zero = 0;
unsigned short var_16 = (unsigned short)39367;
unsigned long long int var_17 = 6630064549680322528ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
