#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-57;
long long int var_5 = -4449858087698825575LL;
short var_6 = (short)-2607;
long long int var_7 = 1251303415652855987LL;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned long long int var_12 = 8464968369992896461ULL;
long long int var_13 = -5546686904484328101LL;
unsigned long long int var_14 = 10018003326242998819ULL;
unsigned long long int var_15 = 16881037640707436687ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
