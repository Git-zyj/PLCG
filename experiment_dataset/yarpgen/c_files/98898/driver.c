#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6298796954009648401LL;
unsigned long long int var_4 = 8113540244164956824ULL;
int var_7 = 970310620;
int zero = 0;
int var_17 = 2105693726;
unsigned long long int var_18 = 7057622253505282030ULL;
unsigned char var_19 = (unsigned char)25;
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
