#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-10;
long long int var_3 = -6888341513515195716LL;
unsigned char var_6 = (unsigned char)126;
unsigned char var_7 = (unsigned char)152;
unsigned char var_8 = (unsigned char)126;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)209;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned char var_12 = (unsigned char)112;
long long int var_13 = 7283504922409832651LL;
int var_14 = -157419247;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
