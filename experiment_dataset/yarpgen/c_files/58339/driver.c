#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47121;
int var_7 = 502408278;
long long int var_10 = -7948316569329975115LL;
long long int var_11 = 4600175903787267495LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 3273298714081722905ULL;
void init() {
}

void checksum() {
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
