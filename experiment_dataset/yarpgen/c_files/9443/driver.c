#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_4 = (short)15300;
_Bool var_5 = (_Bool)0;
long long int var_16 = -4735433573310913318LL;
int zero = 0;
short var_18 = (short)-14797;
unsigned char var_19 = (unsigned char)188;
short var_20 = (short)10780;
unsigned long long int var_21 = 2594872439992838394ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
