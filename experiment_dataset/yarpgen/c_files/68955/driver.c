#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)18764;
unsigned int var_11 = 3758551567U;
unsigned long long int var_13 = 18220190196759115699ULL;
long long int var_15 = -633213515659452354LL;
short var_18 = (short)-15686;
int zero = 0;
signed char var_19 = (signed char)-69;
unsigned long long int var_20 = 8817578128974205984ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
