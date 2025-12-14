#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13809011857389350690ULL;
unsigned short var_5 = (unsigned short)57804;
int var_7 = 66670316;
unsigned long long int var_8 = 5279719225782695745ULL;
int var_10 = -2137209841;
long long int var_15 = -8438459161883385020LL;
signed char var_16 = (signed char)-10;
int zero = 0;
long long int var_17 = -3563173200900397946LL;
signed char var_18 = (signed char)-52;
unsigned int var_19 = 3469736698U;
signed char var_20 = (signed char)-85;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
