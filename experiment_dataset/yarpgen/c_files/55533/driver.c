#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -920840200;
unsigned short var_6 = (unsigned short)25683;
signed char var_10 = (signed char)45;
unsigned long long int var_14 = 4856869381551886852ULL;
int zero = 0;
int var_17 = -574742036;
long long int var_18 = 1142660870009126077LL;
int var_19 = 1263537578;
void init() {
}

void checksum() {
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
