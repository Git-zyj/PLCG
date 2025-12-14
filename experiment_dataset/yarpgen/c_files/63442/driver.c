#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -493813813;
unsigned char var_9 = (unsigned char)98;
int var_12 = 2008632524;
long long int var_16 = 8743702398937178183LL;
_Bool var_19 = (_Bool)1;
int zero = 0;
int var_20 = -1410058369;
int var_21 = 89941268;
void init() {
}

void checksum() {
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
