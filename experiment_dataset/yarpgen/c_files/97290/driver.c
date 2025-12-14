#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 289282296;
unsigned long long int var_3 = 2233826388248737337ULL;
unsigned long long int var_7 = 15547038951864203798ULL;
int var_9 = -899043513;
int zero = 0;
unsigned int var_17 = 1667119420U;
unsigned long long int var_18 = 785545302272323329ULL;
unsigned short var_19 = (unsigned short)3779;
unsigned short var_20 = (unsigned short)65345;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
