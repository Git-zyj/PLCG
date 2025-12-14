#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3998060243U;
unsigned short var_3 = (unsigned short)6960;
unsigned char var_6 = (unsigned char)145;
unsigned short var_7 = (unsigned short)54598;
long long int var_9 = 1039678914193159164LL;
unsigned short var_14 = (unsigned short)8373;
int zero = 0;
long long int var_17 = 2248630684705035275LL;
unsigned char var_18 = (unsigned char)167;
long long int var_19 = 7570985208249848343LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
