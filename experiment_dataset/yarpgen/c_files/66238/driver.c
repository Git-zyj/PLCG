#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -7757398931725624807LL;
unsigned long long int var_5 = 57898800826521893ULL;
unsigned char var_7 = (unsigned char)6;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned long long int var_12 = 4007582745328152094ULL;
long long int var_13 = -6050100774074753604LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
