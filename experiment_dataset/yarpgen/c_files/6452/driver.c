#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16384464916510349310ULL;
long long int var_4 = -8840632594548140150LL;
signed char var_6 = (signed char)72;
long long int var_8 = -5001233505195231124LL;
unsigned long long int var_9 = 10347833332113538064ULL;
int var_10 = 246703730;
long long int var_12 = 6240734879147918827LL;
signed char var_15 = (signed char)38;
short var_16 = (short)-18237;
unsigned int var_18 = 466013374U;
int zero = 0;
long long int var_19 = 6995361719758019315LL;
unsigned int var_20 = 930849768U;
unsigned char var_21 = (unsigned char)73;
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
