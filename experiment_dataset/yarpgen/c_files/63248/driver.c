#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16928767236181622003ULL;
unsigned int var_5 = 3763146443U;
int var_9 = -2146115486;
int zero = 0;
unsigned short var_12 = (unsigned short)20222;
int var_13 = -1858628290;
unsigned long long int var_14 = 10924524904194400888ULL;
signed char var_15 = (signed char)127;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
