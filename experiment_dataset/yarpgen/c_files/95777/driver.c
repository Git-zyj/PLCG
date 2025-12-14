#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 13317645618888111758ULL;
unsigned char var_15 = (unsigned char)119;
int zero = 0;
int var_17 = 1902302086;
unsigned char var_18 = (unsigned char)166;
unsigned long long int var_19 = 16022297938549954532ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
