#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -750093773;
int var_4 = 1305143014;
int var_5 = -1872167649;
unsigned int var_9 = 1856722252U;
unsigned char var_12 = (unsigned char)186;
int zero = 0;
unsigned long long int var_20 = 6432971268764214504ULL;
signed char var_21 = (signed char)93;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
