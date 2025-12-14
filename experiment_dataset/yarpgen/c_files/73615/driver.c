#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10136002716799984778ULL;
unsigned char var_10 = (unsigned char)223;
signed char var_13 = (signed char)-91;
long long int var_17 = 5277258833311063882LL;
signed char var_18 = (signed char)-49;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)-25527;
short var_21 = (short)-7162;
void init() {
}

void checksum() {
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
