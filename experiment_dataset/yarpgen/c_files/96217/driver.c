#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2295962803258665548LL;
long long int var_1 = -7455435476358337474LL;
int var_2 = -352774081;
unsigned long long int var_5 = 1922453011312154181ULL;
signed char var_6 = (signed char)5;
unsigned char var_7 = (unsigned char)37;
int var_9 = 795499131;
signed char var_10 = (signed char)69;
signed char var_11 = (signed char)-1;
int zero = 0;
unsigned long long int var_12 = 14982398510217723705ULL;
unsigned char var_13 = (unsigned char)76;
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
