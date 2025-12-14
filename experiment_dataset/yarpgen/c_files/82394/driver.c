#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11942014645470602907ULL;
unsigned int var_4 = 704797698U;
unsigned short var_8 = (unsigned short)8971;
unsigned char var_9 = (unsigned char)222;
int zero = 0;
unsigned long long int var_16 = 1377929942945917417ULL;
unsigned long long int var_17 = 3111235157606195396ULL;
int var_18 = -915463719;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
