#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -142127079;
unsigned int var_5 = 4147897684U;
signed char var_6 = (signed char)-108;
_Bool var_11 = (_Bool)0;
long long int var_12 = 8989686862583873202LL;
int zero = 0;
unsigned char var_14 = (unsigned char)108;
unsigned long long int var_15 = 8470845342294690307ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
