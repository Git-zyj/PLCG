#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-11613;
unsigned long long int var_4 = 14833919236504077712ULL;
unsigned char var_6 = (unsigned char)62;
unsigned long long int var_7 = 11595722933064031015ULL;
unsigned long long int var_9 = 1943100827677867166ULL;
int zero = 0;
short var_11 = (short)8553;
long long int var_12 = 5487821292761971661LL;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
