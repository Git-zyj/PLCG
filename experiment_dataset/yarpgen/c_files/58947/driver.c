#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 8207840543568721687LL;
unsigned int var_5 = 3457520210U;
unsigned char var_9 = (unsigned char)90;
int var_19 = -278178122;
int zero = 0;
_Bool var_20 = (_Bool)1;
unsigned long long int var_21 = 10882413633301159554ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
