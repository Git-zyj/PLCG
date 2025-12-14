#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 260165727;
unsigned int var_7 = 2178194236U;
int var_8 = -403703336;
unsigned int var_9 = 1946905037U;
long long int var_10 = -5569998659034528466LL;
int zero = 0;
unsigned long long int var_11 = 5385623560951298137ULL;
short var_12 = (short)21156;
int var_13 = 449386011;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
