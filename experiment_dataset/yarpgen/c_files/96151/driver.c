#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 471008848;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-31679;
unsigned short var_7 = (unsigned short)4307;
unsigned int var_12 = 3648961216U;
short var_14 = (short)-4876;
signed char var_15 = (signed char)-88;
unsigned short var_17 = (unsigned short)20663;
int zero = 0;
unsigned char var_20 = (unsigned char)159;
signed char var_21 = (signed char)-45;
short var_22 = (short)-8253;
long long int var_23 = -6120768717796267228LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
