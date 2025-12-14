#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)32806;
signed char var_6 = (signed char)-79;
signed char var_10 = (signed char)-120;
long long int var_13 = 4621082799351628327LL;
int zero = 0;
unsigned short var_20 = (unsigned short)50545;
unsigned int var_21 = 711375706U;
_Bool var_22 = (_Bool)0;
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
