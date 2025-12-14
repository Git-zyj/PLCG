#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)213;
int var_3 = -1313593291;
short var_6 = (short)-454;
unsigned long long int var_7 = 4780891130831100ULL;
unsigned short var_9 = (unsigned short)53276;
signed char var_12 = (signed char)-51;
int var_13 = -741025769;
short var_15 = (short)22617;
int zero = 0;
int var_19 = -1969140218;
int var_20 = 1400162235;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
