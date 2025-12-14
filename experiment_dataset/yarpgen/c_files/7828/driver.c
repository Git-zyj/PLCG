#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)5039;
short var_2 = (short)-27980;
_Bool var_5 = (_Bool)0;
signed char var_7 = (signed char)-42;
long long int var_12 = -3994377606574283335LL;
short var_13 = (short)25796;
int zero = 0;
signed char var_14 = (signed char)45;
short var_15 = (short)-30366;
signed char var_16 = (signed char)112;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
