#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4911293677520823774LL;
unsigned short var_2 = (unsigned short)11057;
unsigned char var_5 = (unsigned char)29;
int zero = 0;
unsigned short var_11 = (unsigned short)61781;
int var_12 = -1567464951;
int var_13 = 181503371;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
