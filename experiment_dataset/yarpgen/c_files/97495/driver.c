#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)66;
unsigned int var_4 = 1801621005U;
signed char var_7 = (signed char)54;
long long int var_11 = -6820374246036892848LL;
long long int var_12 = -3574939978227786118LL;
int var_13 = -1151461163;
int var_15 = 1526964365;
int zero = 0;
unsigned int var_16 = 173583142U;
unsigned int var_17 = 1823908882U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
