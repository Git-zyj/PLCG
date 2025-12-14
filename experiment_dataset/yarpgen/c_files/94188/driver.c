#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)44;
int var_2 = -2126442487;
unsigned char var_5 = (unsigned char)146;
unsigned short var_8 = (unsigned short)22265;
unsigned long long int var_9 = 7203527361587250868ULL;
unsigned int var_10 = 599905146U;
signed char var_12 = (signed char)60;
int zero = 0;
signed char var_14 = (signed char)93;
signed char var_15 = (signed char)-23;
unsigned long long int var_16 = 6052204485756727174ULL;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
