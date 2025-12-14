#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)63232;
long long int var_2 = -4959002758165287132LL;
unsigned long long int var_3 = 6944852980602816870ULL;
long long int var_10 = 882473454754385173LL;
int zero = 0;
long long int var_14 = 8536281587824090584LL;
unsigned long long int var_15 = 940450974490406924ULL;
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
