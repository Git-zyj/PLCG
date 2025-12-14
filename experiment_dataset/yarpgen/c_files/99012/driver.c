#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_2 = 3176672834U;
unsigned int var_3 = 16084744U;
unsigned long long int var_4 = 7370677206428260738ULL;
long long int var_6 = 216555428008560678LL;
long long int var_7 = -1428900281765971382LL;
unsigned int var_11 = 1509011966U;
int zero = 0;
unsigned long long int var_16 = 1660337844469062152ULL;
signed char var_17 = (signed char)95;
unsigned long long int var_18 = 13998414047419073262ULL;
int var_19 = 1089150470;
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
