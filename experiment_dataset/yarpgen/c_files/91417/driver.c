#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 203566435;
long long int var_5 = -7677550866908361579LL;
unsigned int var_6 = 2248307342U;
signed char var_7 = (signed char)70;
long long int var_8 = 5750217729584330210LL;
int zero = 0;
signed char var_10 = (signed char)89;
int var_11 = -77476631;
unsigned int var_12 = 2647362626U;
short var_13 = (short)-6876;
unsigned short var_14 = (unsigned short)13255;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
