#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3148687300594891805LL;
int var_3 = 569763672;
unsigned int var_8 = 882860261U;
unsigned long long int var_13 = 1662315220010491106ULL;
unsigned char var_16 = (unsigned char)154;
int var_17 = -191271944;
int zero = 0;
unsigned char var_19 = (unsigned char)63;
long long int var_20 = 5807503670941249096LL;
unsigned int var_21 = 1761191516U;
unsigned long long int var_22 = 14311024802612344101ULL;
signed char var_23 = (signed char)80;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
