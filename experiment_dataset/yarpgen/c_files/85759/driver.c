#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)12250;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 2521740667U;
unsigned char var_5 = (unsigned char)93;
unsigned char var_7 = (unsigned char)22;
unsigned long long int var_8 = 1460097507501472822ULL;
long long int var_9 = -9109110287728703924LL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 3137607450558894593ULL;
int zero = 0;
short var_15 = (short)-25349;
short var_16 = (short)-11028;
long long int var_17 = 714249682134964002LL;
unsigned short var_18 = (unsigned short)63371;
signed char var_19 = (signed char)15;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
