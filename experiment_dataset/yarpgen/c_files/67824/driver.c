#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -7671187749785470812LL;
unsigned long long int var_9 = 11614984185913128847ULL;
int var_10 = 1163020546;
int zero = 0;
int var_12 = -1016618458;
unsigned int var_13 = 502663584U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
