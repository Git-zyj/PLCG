#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 5939622305161689113LL;
unsigned short var_10 = (unsigned short)4230;
long long int var_12 = 344707506457827579LL;
int zero = 0;
long long int var_13 = 60572801541928182LL;
long long int var_14 = 4929367027527649542LL;
void init() {
}

void checksum() {
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
