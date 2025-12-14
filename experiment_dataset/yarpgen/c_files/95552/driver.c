#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3615762762U;
int var_5 = -916916182;
unsigned char var_7 = (unsigned char)47;
unsigned char var_10 = (unsigned char)36;
unsigned short var_12 = (unsigned short)17214;
int zero = 0;
signed char var_13 = (signed char)15;
int var_14 = 840555591;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
