#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-10089;
_Bool var_3 = (_Bool)1;
unsigned long long int var_5 = 1860175213478112482ULL;
int var_6 = 306964836;
signed char var_9 = (signed char)59;
unsigned char var_11 = (unsigned char)126;
unsigned long long int var_12 = 10980332859089061758ULL;
int zero = 0;
unsigned long long int var_15 = 5112671071409635696ULL;
unsigned long long int var_16 = 567573084630537024ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
