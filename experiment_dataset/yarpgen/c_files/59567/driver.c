#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10995916293011523437ULL;
short var_7 = (short)-10348;
short var_9 = (short)12655;
_Bool var_11 = (_Bool)1;
int zero = 0;
short var_17 = (short)12167;
signed char var_18 = (signed char)55;
unsigned long long int var_19 = 7906992644829621528ULL;
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
