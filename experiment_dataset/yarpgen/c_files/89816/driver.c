#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)117;
unsigned long long int var_2 = 12807793240778655213ULL;
long long int var_5 = 3741771780790597376LL;
long long int var_8 = -5330315939863856071LL;
unsigned char var_16 = (unsigned char)87;
unsigned short var_18 = (unsigned short)38268;
int zero = 0;
int var_19 = -425582976;
short var_20 = (short)28914;
unsigned long long int var_21 = 7472433709161829483ULL;
long long int var_22 = 1762682289346483083LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
