#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7198018421565361440LL;
unsigned long long int var_1 = 11273656130294168950ULL;
long long int var_3 = -1010117035554012145LL;
unsigned int var_4 = 3946548054U;
_Bool var_7 = (_Bool)1;
long long int var_9 = 2597247733850735919LL;
long long int var_10 = -1038672980581852129LL;
short var_12 = (short)29238;
int zero = 0;
unsigned int var_14 = 1277653331U;
long long int var_15 = -5807848133535285453LL;
long long int var_16 = 8246708562189551229LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
