#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -616184638;
int var_5 = -1847957248;
int var_9 = 627863736;
int var_10 = 90100045;
int zero = 0;
int var_13 = -649397953;
int var_14 = -944172733;
int var_15 = 53327807;
int var_16 = 499369880;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
