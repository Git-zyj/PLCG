#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1868275522U;
short var_1 = (short)-12744;
unsigned short var_5 = (unsigned short)11028;
int var_7 = 293972385;
int zero = 0;
unsigned long long int var_11 = 5127327188421993215ULL;
long long int var_12 = -7022645426669604954LL;
unsigned int var_13 = 1823396684U;
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
