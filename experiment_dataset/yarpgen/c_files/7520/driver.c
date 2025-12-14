#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-13893;
unsigned int var_3 = 2252288811U;
int var_4 = 1335732931;
int var_10 = -1687419049;
int zero = 0;
short var_13 = (short)17237;
long long int var_14 = -8107581971831838659LL;
unsigned char var_15 = (unsigned char)105;
unsigned int var_16 = 3459683061U;
int var_17 = 169740087;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
