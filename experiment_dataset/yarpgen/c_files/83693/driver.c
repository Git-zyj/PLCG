#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-14889;
unsigned int var_2 = 4092856624U;
unsigned char var_3 = (unsigned char)90;
unsigned short var_6 = (unsigned short)20659;
signed char var_8 = (signed char)59;
unsigned int var_9 = 439233937U;
long long int var_12 = -6490668022116827300LL;
unsigned short var_14 = (unsigned short)46499;
int zero = 0;
unsigned char var_16 = (unsigned char)42;
long long int var_17 = 3363452462039330619LL;
short var_18 = (short)-1496;
unsigned char var_19 = (unsigned char)96;
unsigned char var_20 = (unsigned char)203;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
