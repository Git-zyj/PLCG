#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 963477600;
unsigned long long int var_3 = 13270105352557005924ULL;
short var_12 = (short)-5118;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)250;
unsigned char var_21 = (unsigned char)169;
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
