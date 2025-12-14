#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4020716979429319968ULL;
long long int var_2 = -1495918711808768025LL;
signed char var_3 = (signed char)-126;
unsigned int var_4 = 36530450U;
int var_6 = -326780571;
short var_10 = (short)-2439;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 3303454516115078825ULL;
signed char var_15 = (signed char)35;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)20610;
short var_21 = (short)-30388;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
