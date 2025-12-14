#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)35;
unsigned char var_6 = (unsigned char)192;
long long int var_8 = 5568521619335827372LL;
unsigned int var_9 = 1857092265U;
short var_11 = (short)22652;
_Bool var_12 = (_Bool)0;
unsigned long long int var_16 = 4993227299716081714ULL;
_Bool var_17 = (_Bool)0;
int zero = 0;
short var_20 = (short)-26863;
int var_21 = -1112696888;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
