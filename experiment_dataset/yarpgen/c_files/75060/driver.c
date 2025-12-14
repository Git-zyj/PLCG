#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 532804915213018074ULL;
unsigned int var_5 = 4231762088U;
unsigned char var_9 = (unsigned char)238;
int zero = 0;
unsigned char var_14 = (unsigned char)23;
long long int var_15 = -545767076527223102LL;
signed char var_16 = (signed char)97;
signed char var_17 = (signed char)-95;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
