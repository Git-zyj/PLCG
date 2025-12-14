#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 446222372;
long long int var_2 = 3460986109393554858LL;
int var_5 = 994572074;
long long int var_6 = 1921169135969455633LL;
int zero = 0;
unsigned char var_10 = (unsigned char)115;
unsigned short var_11 = (unsigned short)20376;
int var_12 = 1013963122;
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
