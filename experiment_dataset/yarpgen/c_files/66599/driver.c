#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)4;
unsigned int var_7 = 3695495423U;
unsigned char var_8 = (unsigned char)16;
unsigned char var_9 = (unsigned char)60;
signed char var_10 = (signed char)-71;
signed char var_11 = (signed char)-25;
int var_13 = -295158964;
unsigned char var_16 = (unsigned char)180;
int zero = 0;
unsigned int var_17 = 1693628889U;
_Bool var_18 = (_Bool)1;
long long int var_19 = -2015019164775853326LL;
int var_20 = -327300933;
void init() {
}

void checksum() {
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
