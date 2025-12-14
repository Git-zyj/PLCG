#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1420112155;
_Bool var_4 = (_Bool)0;
short var_8 = (short)615;
short var_12 = (short)3218;
long long int var_14 = 8417435317899319916LL;
int zero = 0;
unsigned int var_17 = 3445069501U;
signed char var_18 = (signed char)25;
unsigned int var_19 = 4179375499U;
long long int var_20 = -4588127118282760385LL;
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
