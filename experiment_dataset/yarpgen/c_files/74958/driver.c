#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 2772970899U;
long long int var_6 = -1063894299031333837LL;
unsigned char var_14 = (unsigned char)108;
int zero = 0;
unsigned short var_20 = (unsigned short)43180;
unsigned short var_21 = (unsigned short)52385;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
