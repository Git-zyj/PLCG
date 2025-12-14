#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 593208876;
long long int var_3 = 508776916020011947LL;
long long int var_6 = 7083785558102293205LL;
short var_9 = (short)-11986;
unsigned long long int var_10 = 816284176637474005ULL;
unsigned char var_12 = (unsigned char)116;
int zero = 0;
signed char var_20 = (signed char)44;
unsigned long long int var_21 = 3750425930924622727ULL;
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
