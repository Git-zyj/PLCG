#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60242;
unsigned short var_5 = (unsigned short)167;
_Bool var_6 = (_Bool)0;
short var_7 = (short)-24196;
unsigned short var_9 = (unsigned short)12586;
long long int var_12 = 7541185362825495730LL;
unsigned short var_14 = (unsigned short)41125;
unsigned long long int var_15 = 4149097952758608866ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)49;
signed char var_17 = (signed char)120;
void init() {
}

void checksum() {
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
