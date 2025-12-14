#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_5 = -883240941;
unsigned short var_7 = (unsigned short)37777;
unsigned short var_8 = (unsigned short)31740;
unsigned short var_9 = (unsigned short)20473;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 224868184U;
signed char var_13 = (signed char)11;
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
