#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 807658945409858482ULL;
unsigned long long int var_3 = 15923474618797610473ULL;
int var_7 = 96662706;
int zero = 0;
unsigned long long int var_10 = 237240182861350271ULL;
unsigned long long int var_11 = 8927114524819916776ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
