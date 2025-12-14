#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)16147;
unsigned long long int var_6 = 7800439787600149620ULL;
unsigned char var_7 = (unsigned char)216;
signed char var_9 = (signed char)40;
unsigned int var_12 = 44574469U;
unsigned int var_15 = 1502932420U;
unsigned long long int var_17 = 15781445279837694422ULL;
int zero = 0;
short var_20 = (short)31136;
short var_21 = (short)-16401;
long long int var_22 = 7597674202191080845LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
