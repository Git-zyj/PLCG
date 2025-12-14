#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49856;
unsigned long long int var_2 = 4541055569567935131ULL;
long long int var_3 = 7119525450943067044LL;
long long int var_5 = 6754733484235124638LL;
long long int var_7 = -7438710017451717991LL;
signed char var_11 = (signed char)-126;
unsigned int var_13 = 4135021402U;
unsigned int var_14 = 2184696435U;
int var_15 = -1440160438;
short var_16 = (short)21237;
int zero = 0;
long long int var_17 = -1334202344592847469LL;
long long int var_18 = -7373166773242259311LL;
unsigned short var_19 = (unsigned short)30473;
int var_20 = -570436156;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
