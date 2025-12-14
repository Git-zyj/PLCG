#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)17;
int var_3 = 420564287;
long long int var_5 = 4849950931561547902LL;
long long int var_7 = -6305931045631010197LL;
unsigned int var_8 = 915433211U;
int zero = 0;
unsigned long long int var_10 = 5761404083648842743ULL;
unsigned short var_11 = (unsigned short)14579;
unsigned char var_12 = (unsigned char)69;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
