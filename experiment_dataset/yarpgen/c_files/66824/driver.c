#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 9074075091902656066LL;
unsigned int var_2 = 1717203146U;
unsigned long long int var_3 = 4397320358297976340ULL;
_Bool var_4 = (_Bool)0;
_Bool var_8 = (_Bool)1;
unsigned short var_10 = (unsigned short)4478;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned long long int var_15 = 18430001341999486310ULL;
unsigned int var_16 = 1134893618U;
unsigned int var_17 = 3067776539U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
