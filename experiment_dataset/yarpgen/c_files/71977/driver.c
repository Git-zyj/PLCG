#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 17916699360454099422ULL;
signed char var_3 = (signed char)3;
unsigned short var_4 = (unsigned short)26016;
_Bool var_6 = (_Bool)1;
unsigned short var_8 = (unsigned short)48114;
signed char var_9 = (signed char)-127;
unsigned long long int var_10 = 16097010046085023077ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)117;
unsigned int var_14 = 426812190U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
