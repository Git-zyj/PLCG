#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47333;
short var_4 = (short)-16234;
unsigned int var_5 = 357605709U;
unsigned char var_7 = (unsigned char)39;
unsigned int var_10 = 1301158494U;
unsigned int var_14 = 1156945824U;
int zero = 0;
unsigned char var_18 = (unsigned char)191;
unsigned long long int var_19 = 157211810454644765ULL;
unsigned int var_20 = 4090153434U;
int var_21 = -250575847;
unsigned short var_22 = (unsigned short)50493;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
