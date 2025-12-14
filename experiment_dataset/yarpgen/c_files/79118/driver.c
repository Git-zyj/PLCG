#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1006;
short var_2 = (short)-19416;
unsigned char var_8 = (unsigned char)220;
short var_9 = (short)-19090;
int zero = 0;
unsigned char var_18 = (unsigned char)49;
long long int var_19 = -286353160952202497LL;
long long int var_20 = -2315001199029955928LL;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
