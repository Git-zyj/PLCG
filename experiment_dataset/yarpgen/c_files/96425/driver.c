#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8785269984340261665ULL;
unsigned short var_3 = (unsigned short)13764;
unsigned int var_4 = 2309367926U;
_Bool var_6 = (_Bool)0;
unsigned long long int var_8 = 720284450207756537ULL;
unsigned int var_13 = 3190368327U;
unsigned char var_15 = (unsigned char)11;
unsigned int var_16 = 2665446573U;
int zero = 0;
long long int var_19 = 7925803024191662624LL;
unsigned long long int var_20 = 13212999256721812147ULL;
unsigned char var_21 = (unsigned char)166;
void init() {
}

void checksum() {
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
