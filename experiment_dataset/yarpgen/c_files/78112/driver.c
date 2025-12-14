#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1470618216;
unsigned long long int var_2 = 7896754678049889361ULL;
int zero = 0;
unsigned long long int var_19 = 16491253754544937845ULL;
unsigned long long int var_20 = 3280112561023764284ULL;
long long int var_21 = 671537342548768079LL;
unsigned short var_22 = (unsigned short)49354;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
