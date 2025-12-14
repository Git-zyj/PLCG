#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18580;
unsigned long long int var_3 = 14552403468077434424ULL;
int var_4 = -685039992;
signed char var_10 = (signed char)35;
signed char var_11 = (signed char)88;
signed char var_13 = (signed char)33;
signed char var_16 = (signed char)60;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-32;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
