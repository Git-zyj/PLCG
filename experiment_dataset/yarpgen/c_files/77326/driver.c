#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 14992731675019552014ULL;
short var_5 = (short)-2157;
unsigned int var_9 = 3028023223U;
signed char var_10 = (signed char)68;
long long int var_13 = 184578478424126419LL;
unsigned short var_14 = (unsigned short)5841;
int zero = 0;
int var_16 = 721928410;
int var_17 = -1925000634;
int var_18 = -1801849370;
unsigned int var_19 = 1607557448U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
