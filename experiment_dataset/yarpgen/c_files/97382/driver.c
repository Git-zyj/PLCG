#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -97211714;
unsigned long long int var_2 = 9937368670607164986ULL;
unsigned short var_3 = (unsigned short)43704;
short var_4 = (short)25752;
int zero = 0;
unsigned short var_17 = (unsigned short)64504;
unsigned char var_18 = (unsigned char)131;
signed char var_19 = (signed char)10;
_Bool var_20 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
