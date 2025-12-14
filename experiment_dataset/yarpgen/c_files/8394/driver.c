#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3766940022U;
unsigned short var_4 = (unsigned short)42496;
unsigned char var_5 = (unsigned char)255;
signed char var_9 = (signed char)33;
short var_10 = (short)7133;
int zero = 0;
long long int var_17 = 5069341655341589249LL;
unsigned int var_18 = 1904263942U;
unsigned int var_19 = 3680660301U;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
