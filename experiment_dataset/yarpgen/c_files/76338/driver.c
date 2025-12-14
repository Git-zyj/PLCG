#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1434526764;
int var_9 = 1743387594;
unsigned long long int var_10 = 12882784237656868394ULL;
int zero = 0;
int var_13 = -969529929;
int var_14 = 843245465;
long long int var_15 = -3064808145441700302LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
