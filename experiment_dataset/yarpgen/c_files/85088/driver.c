#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16405015349548682338ULL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 3033463427U;
unsigned short var_10 = (unsigned short)26532;
int zero = 0;
unsigned char var_11 = (unsigned char)240;
unsigned short var_12 = (unsigned short)27353;
unsigned long long int var_13 = 1806930236927747293ULL;
unsigned int var_14 = 927794485U;
unsigned char var_15 = (unsigned char)104;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 7500692226434344533ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
