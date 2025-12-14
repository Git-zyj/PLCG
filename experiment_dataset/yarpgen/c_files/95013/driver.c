#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11417;
unsigned short var_2 = (unsigned short)29431;
unsigned int var_4 = 625029215U;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 12162433502475801124ULL;
unsigned short var_13 = (unsigned short)59387;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
