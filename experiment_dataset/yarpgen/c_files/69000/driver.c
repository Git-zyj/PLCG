#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-7935;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)28349;
_Bool var_10 = (_Bool)1;
int var_18 = -368122015;
int zero = 0;
unsigned int var_19 = 771300953U;
signed char var_20 = (signed char)68;
signed char var_21 = (signed char)-111;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
