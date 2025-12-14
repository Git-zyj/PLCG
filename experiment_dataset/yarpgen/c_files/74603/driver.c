#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 2325888993U;
_Bool var_7 = (_Bool)1;
int var_8 = 1516705119;
unsigned char var_17 = (unsigned char)172;
long long int var_19 = 5345161105955580376LL;
int zero = 0;
signed char var_20 = (signed char)61;
unsigned short var_21 = (unsigned short)38323;
int var_22 = 2081816400;
unsigned short var_23 = (unsigned short)15708;
unsigned long long int var_24 = 9619893081875495555ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
