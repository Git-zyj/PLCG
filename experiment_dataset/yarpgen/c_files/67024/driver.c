#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-21;
long long int var_4 = -1281749579276465102LL;
unsigned char var_5 = (unsigned char)120;
unsigned int var_7 = 917244751U;
unsigned char var_9 = (unsigned char)108;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 16427080965976842476ULL;
unsigned char var_13 = (unsigned char)98;
int zero = 0;
short var_14 = (short)-19686;
short var_15 = (short)-10296;
long long int var_16 = -5833372361388773736LL;
long long int var_17 = -5523920837771493331LL;
void init() {
}

void checksum() {
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
