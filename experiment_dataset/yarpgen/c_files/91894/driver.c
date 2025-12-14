#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3213636998U;
unsigned char var_4 = (unsigned char)206;
signed char var_8 = (signed char)40;
int zero = 0;
signed char var_10 = (signed char)46;
unsigned long long int var_11 = 12066689065074623127ULL;
unsigned long long int var_12 = 1529651976123100129ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
