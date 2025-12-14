#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16217281889448578802ULL;
signed char var_6 = (signed char)93;
int var_7 = 1679319806;
unsigned char var_10 = (unsigned char)148;
unsigned int var_14 = 3671474486U;
long long int var_16 = -591125213477485815LL;
int zero = 0;
signed char var_18 = (signed char)7;
short var_19 = (short)-24699;
void init() {
}

void checksum() {
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
