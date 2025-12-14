#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 2380598965020241869LL;
unsigned char var_7 = (unsigned char)231;
unsigned long long int var_9 = 11735378731116370674ULL;
long long int var_11 = -8879677778778551777LL;
int var_13 = 751464692;
_Bool var_17 = (_Bool)0;
int zero = 0;
signed char var_19 = (signed char)89;
unsigned short var_20 = (unsigned short)44464;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
