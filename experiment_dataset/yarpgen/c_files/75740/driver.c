#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3276;
long long int var_2 = -1970529318916107434LL;
unsigned short var_6 = (unsigned short)45952;
int var_11 = 1088656817;
int var_12 = 1159855585;
int var_14 = 1986280372;
int zero = 0;
signed char var_18 = (signed char)-5;
int var_19 = -460735258;
unsigned short var_20 = (unsigned short)43747;
void init() {
}

void checksum() {
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
