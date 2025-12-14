#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7831859561932968103LL;
short var_1 = (short)4875;
short var_2 = (short)-19284;
_Bool var_4 = (_Bool)0;
short var_5 = (short)12129;
short var_6 = (short)7523;
int var_7 = 1560897652;
signed char var_8 = (signed char)82;
long long int var_9 = -731827834124687554LL;
int zero = 0;
signed char var_10 = (signed char)46;
signed char var_11 = (signed char)49;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
