#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1956729999663723683ULL;
_Bool var_9 = (_Bool)1;
int var_11 = -269150857;
int zero = 0;
unsigned int var_13 = 231696516U;
signed char var_14 = (signed char)-72;
unsigned long long int var_15 = 5857424595916062709ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
