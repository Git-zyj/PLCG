#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 773541173;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)11078;
signed char var_5 = (signed char)-8;
signed char var_6 = (signed char)-10;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)37398;
unsigned long long int var_12 = 7429393588791218368ULL;
int zero = 0;
short var_13 = (short)-3547;
long long int var_14 = -3020633718342273788LL;
unsigned short var_15 = (unsigned short)15504;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
