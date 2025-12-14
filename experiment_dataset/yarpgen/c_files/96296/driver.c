#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24645;
unsigned long long int var_5 = 16724781285614346681ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 6648323192009898933ULL;
int var_13 = -1191282567;
unsigned int var_14 = 976157017U;
int zero = 0;
unsigned short var_16 = (unsigned short)31625;
unsigned long long int var_17 = 16077960099261975063ULL;
unsigned long long int var_18 = 4046181543509619665ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
