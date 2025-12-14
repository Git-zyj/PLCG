#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6896795791882505577LL;
unsigned char var_2 = (unsigned char)212;
unsigned short var_3 = (unsigned short)53432;
unsigned char var_8 = (unsigned char)200;
int var_9 = 843946351;
signed char var_11 = (signed char)107;
short var_12 = (short)27087;
int zero = 0;
int var_14 = -1809316971;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
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
