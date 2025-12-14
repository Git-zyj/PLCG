#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5136575404053943045LL;
short var_6 = (short)16608;
unsigned short var_8 = (unsigned short)13619;
int var_9 = 2074332364;
unsigned int var_13 = 4013929302U;
int var_14 = 1433610096;
int zero = 0;
unsigned short var_16 = (unsigned short)58635;
unsigned long long int var_17 = 6938281729609236238ULL;
unsigned int var_18 = 1064261055U;
unsigned int var_19 = 30370145U;
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
