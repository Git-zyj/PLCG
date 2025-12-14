#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3350541510954275698LL;
signed char var_4 = (signed char)17;
_Bool var_11 = (_Bool)1;
long long int var_12 = -2658595230838778637LL;
long long int var_13 = 5634263920342646088LL;
unsigned short var_14 = (unsigned short)64488;
int zero = 0;
long long int var_19 = -2705446695263755011LL;
unsigned char var_20 = (unsigned char)193;
unsigned int var_21 = 2826097229U;
void init() {
}

void checksum() {
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
