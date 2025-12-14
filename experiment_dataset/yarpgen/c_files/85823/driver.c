#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1509896296;
unsigned long long int var_2 = 3079797536125366766ULL;
int var_10 = 641552794;
unsigned char var_12 = (unsigned char)25;
int var_14 = 693849012;
int zero = 0;
unsigned long long int var_17 = 9244372429176644699ULL;
unsigned int var_18 = 2984752411U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
