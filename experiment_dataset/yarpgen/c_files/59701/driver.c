#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)112;
int var_2 = 167519388;
short var_4 = (short)3199;
long long int var_6 = -2909501701420914689LL;
int zero = 0;
unsigned char var_10 = (unsigned char)47;
int var_11 = 1290953830;
int var_12 = -944796774;
unsigned long long int var_13 = 16956615595478155659ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
