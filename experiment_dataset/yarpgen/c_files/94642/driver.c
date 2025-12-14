#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15170;
_Bool var_4 = (_Bool)0;
unsigned char var_5 = (unsigned char)82;
unsigned char var_8 = (unsigned char)195;
short var_9 = (short)-11863;
long long int var_11 = 5002941960052307806LL;
unsigned char var_12 = (unsigned char)98;
_Bool var_13 = (_Bool)1;
int zero = 0;
signed char var_14 = (signed char)-49;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
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
