#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)41181;
signed char var_9 = (signed char)43;
unsigned long long int var_11 = 3299583061670117148ULL;
unsigned char var_13 = (unsigned char)80;
int zero = 0;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)94;
short var_17 = (short)26595;
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
