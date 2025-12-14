#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-84;
signed char var_9 = (signed char)114;
unsigned short var_10 = (unsigned short)62172;
unsigned char var_11 = (unsigned char)180;
int zero = 0;
unsigned int var_12 = 2098219590U;
signed char var_13 = (signed char)44;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
