#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6799853606241772565LL;
unsigned int var_6 = 2779199592U;
short var_8 = (short)-19940;
signed char var_9 = (signed char)16;
unsigned long long int var_12 = 1022988567379079611ULL;
_Bool var_13 = (_Bool)0;
unsigned int var_15 = 3176244632U;
int zero = 0;
unsigned int var_18 = 1958858380U;
unsigned int var_19 = 1204255661U;
long long int var_20 = -6107151714403634351LL;
unsigned char var_21 = (unsigned char)184;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
