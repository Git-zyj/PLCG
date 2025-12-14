#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-3548;
short var_1 = (short)26407;
short var_3 = (short)-1417;
unsigned char var_4 = (unsigned char)145;
unsigned char var_9 = (unsigned char)154;
unsigned short var_12 = (unsigned short)10605;
unsigned long long int var_13 = 9693315899039190145ULL;
unsigned short var_15 = (unsigned short)11597;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 17372011066008049610ULL;
unsigned char var_18 = (unsigned char)163;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
