#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_2 = 1335791714;
int var_4 = -33476562;
_Bool var_6 = (_Bool)1;
_Bool var_11 = (_Bool)0;
short var_12 = (short)25564;
long long int var_13 = -302522423581137542LL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_18 = -51724618;
unsigned char var_19 = (unsigned char)187;
short var_20 = (short)32258;
unsigned short var_21 = (unsigned short)53424;
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
