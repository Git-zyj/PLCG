#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1910534934U;
unsigned short var_1 = (unsigned short)17242;
_Bool var_2 = (_Bool)0;
int var_3 = -1961694735;
unsigned short var_4 = (unsigned short)4208;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)22798;
unsigned int var_8 = 1499879253U;
unsigned short var_9 = (unsigned short)46966;
int zero = 0;
short var_10 = (short)6707;
short var_11 = (short)-386;
unsigned short var_12 = (unsigned short)33487;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
