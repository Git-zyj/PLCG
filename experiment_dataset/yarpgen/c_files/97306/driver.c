#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)193;
long long int var_2 = -9026350855503904702LL;
unsigned short var_4 = (unsigned short)46083;
long long int var_5 = -39323474272384295LL;
unsigned short var_7 = (unsigned short)57798;
signed char var_8 = (signed char)-100;
_Bool var_9 = (_Bool)0;
unsigned long long int var_12 = 681959546794951580ULL;
int zero = 0;
short var_13 = (short)-28947;
unsigned char var_14 = (unsigned char)158;
long long int var_15 = -7248652933247594991LL;
unsigned char var_16 = (unsigned char)36;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
