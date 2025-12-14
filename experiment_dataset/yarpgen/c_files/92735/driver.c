#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1981018055;
signed char var_5 = (signed char)50;
unsigned char var_6 = (unsigned char)215;
long long int var_8 = -8565399490032013140LL;
int var_9 = -405185407;
int var_16 = 828987041;
int zero = 0;
long long int var_17 = 5267664045592455274LL;
short var_18 = (short)-11556;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
