#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)26401;
unsigned int var_2 = 2682419645U;
unsigned char var_6 = (unsigned char)25;
signed char var_9 = (signed char)-28;
int zero = 0;
unsigned int var_13 = 2963749967U;
unsigned int var_14 = 2456862793U;
signed char var_15 = (signed char)-77;
signed char var_16 = (signed char)97;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
