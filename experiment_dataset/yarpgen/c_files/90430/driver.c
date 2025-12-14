#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 823997722U;
unsigned short var_1 = (unsigned short)2569;
int var_2 = 1702041101;
unsigned char var_3 = (unsigned char)29;
int var_4 = -528901604;
signed char var_6 = (signed char)-43;
signed char var_7 = (signed char)-113;
unsigned char var_10 = (unsigned char)182;
unsigned char var_11 = (unsigned char)214;
int zero = 0;
unsigned long long int var_14 = 18129978878681479179ULL;
unsigned short var_15 = (unsigned short)21156;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)31;
void init() {
}

void checksum() {
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
