#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 767171300;
unsigned short var_4 = (unsigned short)61427;
unsigned short var_6 = (unsigned short)21484;
unsigned short var_7 = (unsigned short)23087;
int zero = 0;
unsigned char var_18 = (unsigned char)187;
long long int var_19 = 5194027817155759513LL;
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
