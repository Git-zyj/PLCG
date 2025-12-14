#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-79;
unsigned int var_5 = 3842093036U;
_Bool var_11 = (_Bool)1;
long long int var_14 = 2472783519439486033LL;
unsigned long long int var_15 = 12858197850118470377ULL;
unsigned long long int var_16 = 11366901697238430876ULL;
int zero = 0;
unsigned long long int var_17 = 4953650859357120927ULL;
unsigned char var_18 = (unsigned char)69;
int var_19 = 976266954;
int var_20 = -711038060;
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
