#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14633567870319502674ULL;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)27759;
unsigned long long int var_7 = 4563017773517215824ULL;
signed char var_10 = (signed char)67;
int zero = 0;
unsigned long long int var_15 = 3704072181991384539ULL;
unsigned long long int var_16 = 1016590022079689699ULL;
unsigned int var_17 = 652412591U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
