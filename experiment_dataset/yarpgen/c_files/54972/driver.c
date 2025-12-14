#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6463334773739626637LL;
unsigned int var_8 = 3115617643U;
_Bool var_12 = (_Bool)0;
_Bool var_16 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)47;
long long int var_21 = 1074297016963420120LL;
unsigned short var_22 = (unsigned short)50638;
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
