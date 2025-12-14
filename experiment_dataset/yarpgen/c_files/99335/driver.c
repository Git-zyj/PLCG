#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 262160747306465521ULL;
unsigned int var_5 = 1308423190U;
unsigned int var_7 = 3899459777U;
unsigned int var_9 = 957074686U;
unsigned long long int var_12 = 16004914001227805402ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)41082;
unsigned long long int var_15 = 11986637523928319148ULL;
unsigned int var_16 = 1889181145U;
unsigned int var_17 = 3572072787U;
unsigned long long int var_18 = 12048941591043355232ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
