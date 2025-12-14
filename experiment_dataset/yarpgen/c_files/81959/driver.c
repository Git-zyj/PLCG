#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-47;
signed char var_4 = (signed char)-29;
long long int var_9 = -4685331405322394814LL;
long long int var_11 = -7591665488806893797LL;
unsigned short var_15 = (unsigned short)36233;
int zero = 0;
unsigned char var_17 = (unsigned char)48;
unsigned char var_18 = (unsigned char)212;
int var_19 = -444257556;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
