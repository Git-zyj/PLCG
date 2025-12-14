#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_7 = 1139945260098519144ULL;
unsigned long long int var_8 = 16013404749676742910ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_12 = 654777545;
long long int var_13 = -8298921129510877307LL;
signed char var_14 = (signed char)-28;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
