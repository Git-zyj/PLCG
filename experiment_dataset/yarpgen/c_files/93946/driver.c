#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)190;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 17338618357856895031ULL;
int var_10 = 504940491;
int var_11 = 613988868;
int zero = 0;
signed char var_19 = (signed char)-66;
unsigned int var_20 = 1552124692U;
short var_21 = (short)13479;
void init() {
}

void checksum() {
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
