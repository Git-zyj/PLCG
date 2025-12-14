#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1225456664;
int var_9 = -1706033548;
long long int var_12 = 7127161742311216365LL;
int var_13 = 2080750156;
int zero = 0;
int var_15 = 2035441800;
long long int var_16 = 5328868415209644700LL;
void init() {
}

void checksum() {
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
