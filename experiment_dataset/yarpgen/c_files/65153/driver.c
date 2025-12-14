#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4163560614U;
unsigned char var_2 = (unsigned char)197;
signed char var_5 = (signed char)-45;
long long int var_7 = 2021187889329298278LL;
int zero = 0;
long long int var_16 = 5736462871553207152LL;
unsigned long long int var_17 = 7793189986886613748ULL;
unsigned char var_18 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
