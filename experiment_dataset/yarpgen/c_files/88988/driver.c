#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)9744;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 1406735219U;
unsigned char var_11 = (unsigned char)100;
int var_13 = -1135429;
int zero = 0;
_Bool var_15 = (_Bool)1;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
