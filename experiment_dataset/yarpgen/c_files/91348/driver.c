#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4778976006978007713LL;
int var_1 = -327096552;
unsigned short var_4 = (unsigned short)30043;
unsigned long long int var_5 = 13971413236528247620ULL;
long long int var_7 = -8050149428528807252LL;
long long int var_8 = -70552522827262396LL;
unsigned short var_9 = (unsigned short)42922;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -3813828362345407974LL;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
