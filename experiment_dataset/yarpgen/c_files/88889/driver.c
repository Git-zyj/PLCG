#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10058707082184862727ULL;
long long int var_1 = 5647115772281056345LL;
unsigned long long int var_2 = 4477563639680629777ULL;
int var_3 = 1941305828;
unsigned int var_4 = 2441636554U;
long long int var_6 = 2481592078047451494LL;
unsigned long long int var_7 = 6286444638999230567ULL;
_Bool var_8 = (_Bool)1;
int var_9 = -1055023730;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-3866;
long long int var_13 = -4168013668969919425LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
