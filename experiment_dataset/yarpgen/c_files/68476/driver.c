#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 992890366429310888ULL;
unsigned long long int var_16 = 4641782522592763793ULL;
int zero = 0;
unsigned long long int var_17 = 6590474240224390041ULL;
unsigned long long int var_18 = 8631321755004943330ULL;
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
