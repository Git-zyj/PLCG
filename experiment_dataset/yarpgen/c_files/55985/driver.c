#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)83;
unsigned int var_10 = 1058311261U;
int zero = 0;
unsigned long long int var_12 = 16488355676388888105ULL;
unsigned int var_13 = 3822908004U;
unsigned char var_14 = (unsigned char)219;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
