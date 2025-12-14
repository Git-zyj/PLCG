#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12689780174066035198ULL;
unsigned short var_2 = (unsigned short)19737;
signed char var_4 = (signed char)101;
int var_7 = -1530484982;
signed char var_8 = (signed char)106;
int zero = 0;
signed char var_11 = (signed char)-111;
signed char var_12 = (signed char)-2;
signed char var_13 = (signed char)-86;
signed char var_14 = (signed char)21;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
