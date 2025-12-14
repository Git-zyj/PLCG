#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1093896219;
unsigned char var_4 = (unsigned char)245;
signed char var_5 = (signed char)76;
signed char var_8 = (signed char)11;
unsigned int var_9 = 4088732498U;
int var_10 = 368564484;
int zero = 0;
signed char var_13 = (signed char)76;
signed char var_14 = (signed char)53;
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
