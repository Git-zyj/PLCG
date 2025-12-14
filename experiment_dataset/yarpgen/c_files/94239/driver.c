#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 5342685042152969336ULL;
long long int var_5 = -3979350590644426929LL;
long long int var_10 = 2731179900881411920LL;
unsigned int var_11 = 128022589U;
int zero = 0;
long long int var_15 = -2799934253429807152LL;
unsigned int var_16 = 1309090768U;
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
