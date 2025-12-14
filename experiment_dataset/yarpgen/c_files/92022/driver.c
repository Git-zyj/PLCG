#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-11606;
signed char var_5 = (signed char)-88;
unsigned long long int var_15 = 5674050199781742742ULL;
signed char var_17 = (signed char)-107;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 5938208617961625094ULL;
signed char var_22 = (signed char)-25;
void init() {
}

void checksum() {
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
