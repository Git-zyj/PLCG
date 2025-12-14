#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)103;
unsigned int var_7 = 2776901231U;
unsigned long long int var_12 = 14972577687201040275ULL;
long long int var_13 = 895010702388984570LL;
int zero = 0;
signed char var_17 = (signed char)-100;
int var_18 = -762772078;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
