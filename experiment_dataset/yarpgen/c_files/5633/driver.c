#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_3 = (_Bool)0;
unsigned short var_5 = (unsigned short)49264;
short var_7 = (short)-29785;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_12 = (signed char)105;
unsigned long long int var_13 = 2323896465426872032ULL;
signed char var_14 = (signed char)57;
unsigned int var_15 = 2283589911U;
unsigned int var_16 = 772122857U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
