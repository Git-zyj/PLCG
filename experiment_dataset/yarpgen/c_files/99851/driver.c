#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)108;
int var_3 = 524450334;
int var_5 = 789872556;
unsigned char var_7 = (unsigned char)39;
short var_9 = (short)26704;
int zero = 0;
int var_10 = 187034745;
_Bool var_11 = (_Bool)0;
int var_12 = -181456354;
short var_13 = (short)2961;
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
