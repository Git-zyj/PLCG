#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -8637969169452732857LL;
unsigned char var_8 = (unsigned char)51;
long long int var_9 = -5070054954692154922LL;
signed char var_11 = (signed char)23;
int zero = 0;
unsigned char var_12 = (unsigned char)175;
unsigned short var_13 = (unsigned short)38797;
void init() {
}

void checksum() {
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
