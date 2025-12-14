#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -349722984;
long long int var_12 = -1765776114387382586LL;
int zero = 0;
unsigned long long int var_17 = 11729858545617016605ULL;
unsigned long long int var_18 = 18203900319673420093ULL;
unsigned short var_19 = (unsigned short)57652;
int var_20 = 1790967473;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
