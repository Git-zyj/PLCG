#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)56957;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
signed char var_14 = (signed char)-6;
short var_16 = (short)-28616;
int zero = 0;
unsigned long long int var_20 = 9764949727951098444ULL;
unsigned long long int var_21 = 8484126031935116822ULL;
signed char var_22 = (signed char)31;
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
