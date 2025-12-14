#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-69;
long long int var_2 = 2788010349396162833LL;
signed char var_4 = (signed char)103;
unsigned char var_6 = (unsigned char)71;
unsigned int var_8 = 709619503U;
short var_9 = (short)-18930;
unsigned long long int var_11 = 13189132212729628839ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
int var_21 = 1343500446;
unsigned long long int var_22 = 2134826403072509927ULL;
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
