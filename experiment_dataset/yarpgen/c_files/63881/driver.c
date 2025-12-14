#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1614555591;
unsigned char var_11 = (unsigned char)102;
signed char var_14 = (signed char)17;
unsigned long long int var_15 = 6708743673211972029ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)28;
long long int var_20 = 7261869992883213077LL;
void init() {
}

void checksum() {
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
