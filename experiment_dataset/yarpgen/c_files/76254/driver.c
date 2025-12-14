#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)22362;
long long int var_9 = -7111746250905924862LL;
short var_13 = (short)-4778;
unsigned long long int var_15 = 17553436438738390935ULL;
int zero = 0;
unsigned long long int var_20 = 2833766785683453423ULL;
signed char var_21 = (signed char)-114;
signed char var_22 = (signed char)-70;
unsigned long long int var_23 = 16695429950049863971ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
