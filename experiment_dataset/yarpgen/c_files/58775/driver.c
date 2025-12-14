#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 4417697891427037553ULL;
int var_9 = 495457903;
unsigned char var_14 = (unsigned char)237;
int zero = 0;
long long int var_20 = -363151071019474790LL;
unsigned int var_21 = 3900329122U;
long long int var_22 = 1967976386875040918LL;
int var_23 = 618873944;
long long int var_24 = 7693015673732324178LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
