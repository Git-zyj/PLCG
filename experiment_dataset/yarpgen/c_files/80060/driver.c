#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1282684645U;
unsigned short var_9 = (unsigned short)61954;
int zero = 0;
unsigned long long int var_10 = 652585004550727562ULL;
_Bool var_11 = (_Bool)1;
short var_12 = (short)4476;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
