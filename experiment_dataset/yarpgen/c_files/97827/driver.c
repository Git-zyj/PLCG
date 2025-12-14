#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -8775715807944734455LL;
unsigned int var_8 = 200529196U;
unsigned int var_10 = 750606936U;
long long int var_12 = -4175835746171817634LL;
int zero = 0;
unsigned int var_13 = 2437153689U;
long long int var_14 = -965366122347118168LL;
int var_15 = -1074975415;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
