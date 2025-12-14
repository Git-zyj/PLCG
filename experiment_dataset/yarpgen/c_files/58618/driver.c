#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2924633503616296743ULL;
unsigned int var_8 = 16336336U;
int zero = 0;
unsigned int var_13 = 2983419655U;
long long int var_14 = 3365318004588360542LL;
unsigned char var_15 = (unsigned char)175;
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
