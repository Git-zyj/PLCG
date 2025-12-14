#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)37;
int var_6 = -1335701861;
unsigned long long int var_7 = 3062028243215247353ULL;
long long int var_10 = 6747531222039385290LL;
_Bool var_13 = (_Bool)0;
int var_15 = 1233914325;
int zero = 0;
short var_19 = (short)-23087;
short var_20 = (short)15958;
signed char var_21 = (signed char)36;
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
