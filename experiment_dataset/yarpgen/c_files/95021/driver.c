#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)126;
int var_3 = -1678109814;
_Bool var_4 = (_Bool)0;
signed char var_7 = (signed char)-114;
signed char var_8 = (signed char)77;
unsigned char var_9 = (unsigned char)240;
int zero = 0;
unsigned int var_10 = 2519426692U;
int var_11 = 1547779520;
unsigned short var_12 = (unsigned short)52529;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
