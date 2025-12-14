#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10348820764149689868ULL;
unsigned short var_4 = (unsigned short)8273;
long long int var_5 = -4321849956593480907LL;
unsigned char var_6 = (unsigned char)142;
unsigned long long int var_7 = 13497528753898077998ULL;
long long int var_10 = 2285158559780919563LL;
int zero = 0;
unsigned char var_12 = (unsigned char)88;
signed char var_13 = (signed char)18;
long long int var_14 = 7607035607190207143LL;
unsigned long long int var_15 = 10563241397333764941ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
