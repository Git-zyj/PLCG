#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -618112570;
unsigned int var_2 = 3557799248U;
short var_7 = (short)15667;
long long int var_8 = -595356634717767691LL;
_Bool var_9 = (_Bool)1;
int zero = 0;
int var_14 = -549715449;
unsigned char var_15 = (unsigned char)108;
void init() {
}

void checksum() {
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
