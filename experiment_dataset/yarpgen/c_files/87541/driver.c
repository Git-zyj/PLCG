#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned short var_8 = (unsigned short)44735;
unsigned short var_9 = (unsigned short)51724;
int zero = 0;
signed char var_10 = (signed char)72;
unsigned short var_11 = (unsigned short)25808;
unsigned short var_12 = (unsigned short)61839;
signed char var_13 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
