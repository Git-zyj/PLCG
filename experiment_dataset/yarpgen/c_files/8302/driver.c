#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 2786552303762982549ULL;
unsigned int var_12 = 2242582487U;
unsigned int var_13 = 3209323380U;
int zero = 0;
long long int var_16 = -1159681701212459118LL;
unsigned short var_17 = (unsigned short)13732;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
