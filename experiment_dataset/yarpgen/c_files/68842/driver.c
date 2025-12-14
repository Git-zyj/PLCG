#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3666187569447612232LL;
unsigned char var_2 = (unsigned char)152;
unsigned long long int var_3 = 13934474638500209941ULL;
long long int var_4 = 4284547135716326818LL;
int var_5 = -1123751353;
long long int var_6 = -5007573070909488739LL;
long long int var_8 = 3027319198940423667LL;
int var_9 = 34479619;
unsigned char var_11 = (unsigned char)126;
long long int var_12 = 7829175049651880955LL;
int zero = 0;
int var_15 = -1613527377;
unsigned char var_16 = (unsigned char)226;
unsigned short var_17 = (unsigned short)20544;
unsigned char var_18 = (unsigned char)44;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
