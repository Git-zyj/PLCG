#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -947222250;
signed char var_14 = (signed char)-89;
int zero = 0;
unsigned char var_16 = (unsigned char)217;
unsigned char var_17 = (unsigned char)163;
int var_18 = 1821539883;
int var_19 = 2143384424;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
