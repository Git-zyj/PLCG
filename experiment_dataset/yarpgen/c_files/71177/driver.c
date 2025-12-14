#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 4861454576185029818LL;
int var_3 = 152099367;
int var_4 = -973826177;
unsigned int var_7 = 2705069946U;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)175;
short var_14 = (short)31553;
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
