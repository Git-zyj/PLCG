#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8353870761966224364LL;
_Bool var_2 = (_Bool)0;
unsigned short var_7 = (unsigned short)50089;
long long int var_9 = 4820545675515452035LL;
unsigned long long int var_13 = 18022672911071577085ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)155;
int var_16 = 1086611088;
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
