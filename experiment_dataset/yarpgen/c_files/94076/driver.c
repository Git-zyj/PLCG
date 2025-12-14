#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8323684218332880964LL;
long long int var_8 = -6406947338551964246LL;
signed char var_12 = (signed char)-94;
int zero = 0;
unsigned char var_16 = (unsigned char)67;
unsigned short var_17 = (unsigned short)14078;
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
