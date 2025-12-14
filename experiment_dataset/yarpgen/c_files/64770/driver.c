#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16420205727307856918ULL;
long long int var_2 = -4629775446027454964LL;
signed char var_3 = (signed char)37;
unsigned long long int var_4 = 872539880242934845ULL;
unsigned char var_6 = (unsigned char)197;
int var_8 = -714357675;
short var_9 = (short)-26022;
short var_16 = (short)1836;
int zero = 0;
unsigned int var_18 = 2566063236U;
unsigned long long int var_19 = 12361953104696774394ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
