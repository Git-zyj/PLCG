#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11009624501525089504ULL;
unsigned char var_9 = (unsigned char)76;
unsigned long long int var_10 = 10758669114905276550ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)71;
signed char var_15 = (signed char)-60;
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
