#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1408323736;
signed char var_6 = (signed char)34;
unsigned char var_7 = (unsigned char)238;
int var_8 = -1255136186;
unsigned char var_9 = (unsigned char)245;
int zero = 0;
long long int var_12 = -8950964239262917378LL;
short var_13 = (short)-31157;
signed char var_14 = (signed char)-80;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
