#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -690201387;
unsigned short var_3 = (unsigned short)62481;
unsigned long long int var_7 = 9558926944627862644ULL;
int zero = 0;
unsigned long long int var_16 = 6814909253110355025ULL;
unsigned long long int var_17 = 7434010388431937415ULL;
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
