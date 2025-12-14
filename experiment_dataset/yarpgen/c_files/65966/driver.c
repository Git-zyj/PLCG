#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)13522;
unsigned int var_4 = 2429991997U;
unsigned long long int var_6 = 18419215483335802520ULL;
short var_8 = (short)9472;
unsigned char var_9 = (unsigned char)46;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_15 = (signed char)-115;
short var_16 = (short)26372;
signed char var_17 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
