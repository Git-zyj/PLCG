#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_7 = 524251631U;
unsigned short var_8 = (unsigned short)38956;
short var_9 = (short)-6275;
unsigned short var_10 = (unsigned short)1182;
short var_11 = (short)-32737;
long long int var_12 = -1111673004757263541LL;
int zero = 0;
unsigned char var_16 = (unsigned char)60;
unsigned short var_17 = (unsigned short)47221;
long long int var_18 = 73783324509347953LL;
long long int var_19 = 6012447271177040501LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
