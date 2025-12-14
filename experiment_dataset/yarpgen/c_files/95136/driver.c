#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_9 = (short)-11653;
unsigned long long int var_11 = 13594074886664598153ULL;
_Bool var_12 = (_Bool)1;
unsigned long long int var_15 = 17775266996751078857ULL;
int var_19 = 450370424;
int zero = 0;
short var_20 = (short)28269;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
