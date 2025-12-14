#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 757719953;
unsigned long long int var_9 = 5587996957085090577ULL;
long long int var_15 = 1620970491621646346LL;
unsigned short var_16 = (unsigned short)33627;
int zero = 0;
unsigned short var_17 = (unsigned short)44669;
long long int var_18 = -4778274686066346001LL;
unsigned int var_19 = 4087828691U;
long long int var_20 = -8017684775642903938LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
