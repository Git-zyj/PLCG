#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_3 = 3894657258114011701LL;
unsigned long long int var_5 = 6828722228778783873ULL;
_Bool var_8 = (_Bool)0;
signed char var_13 = (signed char)92;
unsigned int var_14 = 2292666782U;
int zero = 0;
signed char var_17 = (signed char)-57;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-35;
short var_20 = (short)4743;
long long int var_21 = -6446656297848829070LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
