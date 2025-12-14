#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29063;
_Bool var_2 = (_Bool)0;
unsigned short var_4 = (unsigned short)38971;
unsigned char var_6 = (unsigned char)159;
int var_8 = -1930555414;
short var_9 = (short)29091;
unsigned char var_10 = (unsigned char)76;
int zero = 0;
unsigned long long int var_17 = 470403111218498643ULL;
signed char var_18 = (signed char)105;
void init() {
}

void checksum() {
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
