#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16357494006269842339ULL;
unsigned long long int var_13 = 6494269894026019766ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)126;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)18616;
unsigned long long int var_18 = 16503437111938204832ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
