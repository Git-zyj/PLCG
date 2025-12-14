#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 5463565212852406641LL;
signed char var_9 = (signed char)-64;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_11 = -3090740320296162951LL;
unsigned int var_12 = 1911489230U;
unsigned long long int var_13 = 15959579264923517760ULL;
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
