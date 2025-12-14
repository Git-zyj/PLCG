#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)96;
unsigned int var_4 = 389765538U;
long long int var_5 = 1821270672057603040LL;
unsigned long long int var_10 = 18398308635201204224ULL;
long long int var_11 = 2061968087892366622LL;
int zero = 0;
unsigned short var_12 = (unsigned short)63656;
unsigned char var_13 = (unsigned char)145;
unsigned long long int var_14 = 12072900786493672220ULL;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
