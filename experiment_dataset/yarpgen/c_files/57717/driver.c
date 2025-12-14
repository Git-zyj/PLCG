#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1513065214;
short var_2 = (short)31951;
signed char var_3 = (signed char)-21;
int var_4 = -1653311820;
long long int var_6 = 2932460206790499144LL;
long long int var_9 = -8159545095180901649LL;
int zero = 0;
int var_11 = -2099569949;
unsigned short var_12 = (unsigned short)20587;
unsigned char var_13 = (unsigned char)30;
long long int var_14 = 8643465053835878920LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
