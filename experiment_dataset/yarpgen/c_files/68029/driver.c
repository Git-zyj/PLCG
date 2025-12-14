#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)36799;
signed char var_2 = (signed char)5;
unsigned char var_3 = (unsigned char)243;
unsigned long long int var_5 = 2089236564468036667ULL;
short var_8 = (short)-21706;
int var_9 = 2033050611;
unsigned long long int var_10 = 2175652802434114330ULL;
int var_11 = -2004933243;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
int zero = 0;
short var_14 = (short)26613;
signed char var_15 = (signed char)94;
void init() {
}

void checksum() {
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
