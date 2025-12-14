#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3723151374261964890ULL;
unsigned char var_2 = (unsigned char)48;
_Bool var_3 = (_Bool)0;
long long int var_4 = 2920487229464423825LL;
int var_8 = -694261811;
long long int var_15 = 6382718909016214888LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)245;
unsigned int var_19 = 3715439358U;
unsigned short var_20 = (unsigned short)43705;
short var_21 = (short)-10460;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
