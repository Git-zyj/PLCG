#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9615584899265202457ULL;
int var_5 = -2104965099;
unsigned char var_6 = (unsigned char)26;
unsigned short var_9 = (unsigned short)1002;
_Bool var_10 = (_Bool)1;
long long int var_11 = -5908265311610216339LL;
int var_12 = 442955596;
int zero = 0;
unsigned long long int var_13 = 13214807127497914992ULL;
signed char var_14 = (signed char)34;
unsigned char var_15 = (unsigned char)195;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
