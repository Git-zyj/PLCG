#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4935557996298523295LL;
long long int var_3 = 690408479079274900LL;
signed char var_4 = (signed char)50;
signed char var_8 = (signed char)31;
long long int var_12 = 1084210794640798323LL;
int zero = 0;
signed char var_14 = (signed char)75;
signed char var_15 = (signed char)-127;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
