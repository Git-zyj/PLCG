#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-96;
unsigned long long int var_3 = 10355877053298924659ULL;
unsigned int var_4 = 3694254835U;
unsigned int var_13 = 1348474559U;
unsigned long long int var_14 = 18110844927649405064ULL;
unsigned char var_16 = (unsigned char)48;
int zero = 0;
short var_18 = (short)8425;
unsigned short var_19 = (unsigned short)32182;
signed char var_20 = (signed char)-125;
unsigned char var_21 = (unsigned char)132;
void init() {
}

void checksum() {
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
