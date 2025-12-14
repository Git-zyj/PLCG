#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3973555628U;
unsigned long long int var_2 = 6956931401545501615ULL;
long long int var_3 = -5354620652289809996LL;
unsigned short var_9 = (unsigned short)40433;
unsigned long long int var_10 = 5166279348028809247ULL;
unsigned long long int var_11 = 2788219300949408512ULL;
int zero = 0;
short var_12 = (short)-11207;
long long int var_13 = 5962347291155982389LL;
long long int var_14 = 1415489565541015220LL;
long long int var_15 = 6251131533244489130LL;
unsigned long long int var_16 = 14948410674126148287ULL;
unsigned int var_17 = 3052836740U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
