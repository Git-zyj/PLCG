#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -130163445;
unsigned int var_2 = 2409992442U;
unsigned short var_3 = (unsigned short)58783;
signed char var_5 = (signed char)-1;
long long int var_6 = 1365738902413443536LL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 3904579014U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
