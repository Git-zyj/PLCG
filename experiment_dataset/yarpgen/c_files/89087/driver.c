#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-81;
unsigned long long int var_5 = 4456523970723744659ULL;
unsigned long long int var_18 = 17984520117499398280ULL;
int zero = 0;
unsigned long long int var_19 = 9848313844536747003ULL;
long long int var_20 = -530987016273781931LL;
void init() {
}

void checksum() {
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
