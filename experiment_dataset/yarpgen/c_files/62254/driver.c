#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)165;
long long int var_6 = -1127693856728037562LL;
long long int var_9 = 8917888240558792858LL;
unsigned char var_19 = (unsigned char)87;
int zero = 0;
int var_20 = 819159375;
int var_21 = 1650203749;
unsigned short var_22 = (unsigned short)12797;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
