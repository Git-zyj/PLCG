#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-119;
short var_5 = (short)-30596;
unsigned short var_6 = (unsigned short)23516;
unsigned long long int var_8 = 7818514195238053919ULL;
unsigned short var_9 = (unsigned short)13627;
unsigned int var_11 = 553995565U;
int zero = 0;
unsigned char var_16 = (unsigned char)180;
int var_17 = 1727280897;
short var_18 = (short)-19154;
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
