#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-58;
unsigned short var_4 = (unsigned short)19122;
int var_5 = -1094147123;
long long int var_6 = 6489033905608891833LL;
unsigned long long int var_8 = 793577859307282901ULL;
unsigned int var_9 = 2358638057U;
long long int var_12 = -6014214488380620587LL;
int zero = 0;
signed char var_14 = (signed char)72;
signed char var_15 = (signed char)64;
signed char var_16 = (signed char)-65;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
