#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1678554153868257567LL;
int var_1 = 172543107;
unsigned short var_2 = (unsigned short)47274;
unsigned int var_3 = 3977590880U;
unsigned short var_4 = (unsigned short)54915;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-1;
long long int var_10 = -1328974573397908920LL;
unsigned short var_11 = (unsigned short)48273;
signed char var_14 = (signed char)123;
int zero = 0;
long long int var_15 = 9028741576623188241LL;
signed char var_16 = (signed char)54;
unsigned int var_17 = 2715407075U;
int var_18 = -476518255;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
