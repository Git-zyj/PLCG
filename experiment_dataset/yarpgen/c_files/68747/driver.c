#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)336;
unsigned int var_7 = 3141584833U;
int var_9 = -1004981428;
unsigned int var_10 = 3585722864U;
int var_15 = -150446255;
int zero = 0;
long long int var_16 = -3374085461860834918LL;
unsigned long long int var_17 = 12286926223988566965ULL;
unsigned int var_18 = 3713535689U;
unsigned long long int var_19 = 5841290391488711101ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
