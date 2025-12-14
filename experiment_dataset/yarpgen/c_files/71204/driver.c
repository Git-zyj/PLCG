#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8696925204199498176ULL;
long long int var_3 = -7409866495217342636LL;
unsigned int var_4 = 3679646859U;
unsigned long long int var_6 = 16836301270254721147ULL;
long long int var_8 = -3003639124376483323LL;
int zero = 0;
unsigned long long int var_11 = 657680851644662778ULL;
unsigned char var_12 = (unsigned char)68;
int var_13 = -1603100365;
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
