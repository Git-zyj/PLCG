#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11646;
signed char var_4 = (signed char)23;
signed char var_6 = (signed char)119;
signed char var_11 = (signed char)-1;
long long int var_13 = -4196113614001602665LL;
long long int var_15 = 1300446192566782384LL;
signed char var_16 = (signed char)-120;
signed char var_18 = (signed char)-78;
int zero = 0;
unsigned short var_20 = (unsigned short)49829;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)43028;
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
