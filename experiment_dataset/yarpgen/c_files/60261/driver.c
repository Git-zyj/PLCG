#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6126275476159753416LL;
unsigned char var_5 = (unsigned char)105;
int var_12 = 1270212039;
int zero = 0;
signed char var_19 = (signed char)-13;
unsigned char var_20 = (unsigned char)60;
signed char var_21 = (signed char)75;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
