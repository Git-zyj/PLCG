#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -30995618;
long long int var_2 = -3590689742066467415LL;
short var_3 = (short)18577;
short var_5 = (short)19408;
signed char var_6 = (signed char)-91;
int zero = 0;
unsigned char var_10 = (unsigned char)228;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2251049993U;
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
