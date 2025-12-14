#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1304742059;
long long int var_3 = 4538906302535512890LL;
int var_8 = 1537816681;
int var_9 = -1633887193;
int zero = 0;
int var_10 = -12674488;
int var_11 = 416960115;
long long int var_12 = 4754942188540003862LL;
int var_13 = 1748635504;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
