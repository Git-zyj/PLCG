#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)21;
int var_4 = -1441202670;
long long int var_5 = 6936628079689437592LL;
int var_15 = -421714741;
int zero = 0;
short var_16 = (short)891;
unsigned long long int var_17 = 9391827783763051969ULL;
unsigned char var_18 = (unsigned char)27;
unsigned long long int var_19 = 12311613698173294173ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
