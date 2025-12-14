#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)38672;
int var_3 = -855610340;
long long int var_9 = 8212987053778284150LL;
signed char var_11 = (signed char)-76;
int zero = 0;
int var_12 = -916037289;
long long int var_13 = 2253828919967847173LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
