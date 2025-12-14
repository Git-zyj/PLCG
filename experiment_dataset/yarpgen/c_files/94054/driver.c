#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1682788495385020349LL;
long long int var_2 = 792232666528846775LL;
unsigned int var_5 = 3762058910U;
long long int var_8 = 4521737649964666215LL;
long long int var_12 = 3926508873922615624LL;
unsigned short var_14 = (unsigned short)17251;
int zero = 0;
long long int var_15 = 854070266227573238LL;
long long int var_16 = 7312585909256802119LL;
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
