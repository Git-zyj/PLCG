#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)25242;
unsigned char var_2 = (unsigned char)127;
int var_6 = -649926181;
signed char var_11 = (signed char)112;
long long int var_14 = 7455544386206775324LL;
unsigned char var_15 = (unsigned char)244;
int zero = 0;
short var_17 = (short)7230;
unsigned char var_18 = (unsigned char)89;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
