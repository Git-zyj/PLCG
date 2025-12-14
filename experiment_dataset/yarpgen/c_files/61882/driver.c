#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3015078070U;
long long int var_2 = 1220533022616687690LL;
signed char var_3 = (signed char)112;
unsigned int var_5 = 3110621564U;
unsigned int var_6 = 1303544141U;
unsigned long long int var_8 = 4615992996637630123ULL;
unsigned long long int var_9 = 8144830107141710751ULL;
int zero = 0;
unsigned long long int var_11 = 5605344825622121437ULL;
int var_12 = -2000822032;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
