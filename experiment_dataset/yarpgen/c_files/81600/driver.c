#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
int var_3 = -734972986;
signed char var_4 = (signed char)111;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)15;
short var_8 = (short)-30426;
int var_11 = 186139907;
int zero = 0;
unsigned int var_12 = 3567899846U;
signed char var_13 = (signed char)115;
unsigned short var_14 = (unsigned short)47918;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
