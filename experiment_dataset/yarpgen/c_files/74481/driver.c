#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4494715830897002827LL;
long long int var_4 = 291561334190130661LL;
int var_5 = 641518725;
long long int var_12 = -229289552120692209LL;
unsigned long long int var_15 = 11699142835681026514ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)154;
int var_17 = -1412972640;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
