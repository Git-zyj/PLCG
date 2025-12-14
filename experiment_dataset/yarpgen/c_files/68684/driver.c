#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 141735688U;
signed char var_9 = (signed char)12;
unsigned short var_10 = (unsigned short)53753;
unsigned int var_14 = 372595494U;
int zero = 0;
unsigned short var_19 = (unsigned short)30953;
long long int var_20 = -6724712497905395112LL;
signed char var_21 = (signed char)34;
unsigned long long int var_22 = 7605435552199696098ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
