#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)1010;
unsigned long long int var_15 = 4481282510242225226ULL;
int zero = 0;
unsigned long long int var_20 = 8111214506501186352ULL;
long long int var_21 = -2099705296400526688LL;
long long int var_22 = 8384271108281114602LL;
void init() {
}

void checksum() {
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
