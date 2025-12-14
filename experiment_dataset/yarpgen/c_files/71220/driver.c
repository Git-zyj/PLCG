#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17662301745630898043ULL;
short var_1 = (short)16688;
long long int var_2 = -644553919726484079LL;
short var_6 = (short)-24056;
unsigned int var_8 = 976019988U;
unsigned short var_13 = (unsigned short)38066;
int zero = 0;
int var_15 = -891494382;
signed char var_16 = (signed char)-30;
long long int var_17 = -1912717693376343728LL;
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
