#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-7319;
long long int var_8 = 4057508522421102469LL;
_Bool var_9 = (_Bool)0;
unsigned long long int var_16 = 8356404735817910289ULL;
int zero = 0;
unsigned char var_17 = (unsigned char)122;
int var_18 = 1196704325;
unsigned short var_19 = (unsigned short)36611;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
