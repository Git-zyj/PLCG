#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_1 = (signed char)-93;
unsigned int var_2 = 3876322957U;
unsigned long long int var_3 = 4992988272798574018ULL;
int var_5 = 708466117;
short var_6 = (short)12006;
unsigned short var_9 = (unsigned short)6267;
int zero = 0;
signed char var_11 = (signed char)74;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
