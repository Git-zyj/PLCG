#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8604194773708673575LL;
unsigned int var_3 = 4287578236U;
short var_4 = (short)-6901;
unsigned char var_8 = (unsigned char)9;
signed char var_10 = (signed char)-87;
unsigned char var_13 = (unsigned char)181;
int zero = 0;
long long int var_20 = 6631574893081091742LL;
unsigned int var_21 = 4142100997U;
short var_22 = (short)4169;
void init() {
}

void checksum() {
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
