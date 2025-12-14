#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)16112;
unsigned long long int var_3 = 7740645062673554300ULL;
short var_4 = (short)-1961;
signed char var_5 = (signed char)4;
short var_7 = (short)-18599;
long long int var_13 = 1811107942417954960LL;
int var_15 = -432838686;
long long int var_16 = -7591799723608185699LL;
long long int var_17 = -6696166049454465980LL;
int zero = 0;
int var_18 = 2070035486;
short var_19 = (short)22110;
unsigned short var_20 = (unsigned short)63671;
short var_21 = (short)29986;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
