#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7284041024617522299LL;
signed char var_1 = (signed char)-97;
long long int var_3 = 820411888780792095LL;
int var_5 = 286178940;
unsigned int var_8 = 96197308U;
unsigned long long int var_9 = 17976744972018302309ULL;
unsigned char var_10 = (unsigned char)172;
int zero = 0;
unsigned int var_11 = 958270559U;
int var_12 = 2045385498;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
