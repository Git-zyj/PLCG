#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)159;
unsigned short var_5 = (unsigned short)32372;
_Bool var_6 = (_Bool)1;
unsigned short var_12 = (unsigned short)35295;
unsigned long long int var_15 = 9468037571397031593ULL;
int zero = 0;
long long int var_18 = -4010547441679229072LL;
int var_19 = -295488360;
int var_20 = 190825204;
unsigned int var_21 = 2589847959U;
_Bool var_22 = (_Bool)0;
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
