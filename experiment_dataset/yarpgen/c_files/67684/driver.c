#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9935;
unsigned long long int var_4 = 16061331781269646859ULL;
_Bool var_9 = (_Bool)0;
int var_10 = -133962351;
int var_11 = -639382245;
signed char var_12 = (signed char)91;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)98;
int zero = 0;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-39;
signed char var_21 = (signed char)-80;
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
