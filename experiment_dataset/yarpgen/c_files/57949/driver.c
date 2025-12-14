#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
short var_2 = (short)22327;
unsigned int var_8 = 3512243309U;
_Bool var_9 = (_Bool)1;
short var_12 = (short)25364;
int zero = 0;
long long int var_15 = 1306481251811313118LL;
short var_16 = (short)-23414;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
