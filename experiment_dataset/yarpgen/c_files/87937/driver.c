#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9883142925985064067ULL;
unsigned long long int var_4 = 2804129590859887200ULL;
unsigned long long int var_5 = 4747554418511675343ULL;
unsigned long long int var_7 = 1992208856080094481ULL;
long long int var_9 = -861132184361660286LL;
int zero = 0;
unsigned long long int var_11 = 17947479993453593948ULL;
unsigned char var_12 = (unsigned char)2;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
