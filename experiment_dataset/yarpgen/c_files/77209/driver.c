#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8687487878889549199LL;
int var_5 = -735904324;
unsigned char var_15 = (unsigned char)70;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1510508450U;
unsigned short var_20 = (unsigned short)21385;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
