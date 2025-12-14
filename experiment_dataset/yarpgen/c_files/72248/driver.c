#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 66787344;
_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 3460088935752833889ULL;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-77;
signed char var_10 = (signed char)-1;
int zero = 0;
unsigned char var_11 = (unsigned char)37;
unsigned int var_12 = 3377647044U;
short var_13 = (short)17332;
void init() {
}

void checksum() {
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
