#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)119;
long long int var_4 = -8911142211357393086LL;
unsigned char var_9 = (unsigned char)78;
int var_12 = 1112561679;
int zero = 0;
int var_13 = -967230200;
int var_14 = 495079177;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
