#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6487233908452135542LL;
_Bool var_2 = (_Bool)0;
int var_4 = -1742378997;
unsigned long long int var_5 = 14541371451195853905ULL;
unsigned long long int var_7 = 3159746725855966814ULL;
unsigned long long int var_10 = 6451488108436024912ULL;
int zero = 0;
long long int var_11 = -2714352683916879514LL;
unsigned int var_12 = 1509651920U;
unsigned char var_13 = (unsigned char)83;
signed char var_14 = (signed char)-59;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
