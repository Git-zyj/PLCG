#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-31;
signed char var_1 = (signed char)104;
signed char var_4 = (signed char)-94;
signed char var_5 = (signed char)97;
unsigned char var_6 = (unsigned char)138;
long long int var_7 = 6965778333537964583LL;
_Bool var_8 = (_Bool)0;
long long int var_11 = 4140975924821755996LL;
unsigned char var_12 = (unsigned char)92;
int var_13 = -100193095;
long long int var_14 = 6169363100738685141LL;
long long int var_16 = 4308335818290565081LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_18 = (short)27334;
short var_19 = (short)-17142;
long long int var_20 = 7225623580336337680LL;
unsigned char var_21 = (unsigned char)253;
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
