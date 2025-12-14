#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 465428596U;
int var_1 = 1185218575;
short var_2 = (short)3142;
long long int var_3 = -1223087157477798679LL;
short var_4 = (short)20290;
short var_5 = (short)4201;
unsigned char var_6 = (unsigned char)102;
short var_7 = (short)-25854;
_Bool var_8 = (_Bool)0;
long long int var_9 = -8805017793541466471LL;
int zero = 0;
short var_10 = (short)-17298;
unsigned int var_11 = 2159387563U;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)29;
unsigned short var_14 = (unsigned short)2059;
int var_15 = 1049169413;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
