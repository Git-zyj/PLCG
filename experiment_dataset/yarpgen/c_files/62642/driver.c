#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 2109458677;
int var_9 = 986766672;
int var_17 = 1771249594;
unsigned int var_19 = 4118379410U;
int zero = 0;
unsigned long long int var_20 = 13204728390114236699ULL;
unsigned int var_21 = 2220964499U;
unsigned long long int var_22 = 14728015045977855974ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
