#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)3;
long long int var_4 = -899269503501492532LL;
unsigned char var_5 = (unsigned char)52;
unsigned int var_6 = 3908483730U;
int var_7 = 799504096;
short var_8 = (short)25598;
_Bool var_9 = (_Bool)0;
int zero = 0;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-11;
signed char var_12 = (signed char)54;
int var_13 = 2093582713;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
