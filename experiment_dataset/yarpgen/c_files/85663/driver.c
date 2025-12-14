#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4614246555400380081ULL;
unsigned int var_11 = 1046968723U;
unsigned short var_13 = (unsigned short)51600;
int zero = 0;
unsigned int var_19 = 2419552971U;
unsigned int var_20 = 902250298U;
unsigned char var_21 = (unsigned char)73;
unsigned long long int var_22 = 8400180533815712467ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
