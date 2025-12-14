#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6373675929073145794LL;
_Bool var_8 = (_Bool)1;
int var_9 = -826735916;
int zero = 0;
unsigned char var_10 = (unsigned char)20;
unsigned long long int var_11 = 9011794717212466261ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
