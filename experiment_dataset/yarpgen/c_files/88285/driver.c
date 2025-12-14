#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)9052;
int var_1 = 1499696343;
unsigned long long int var_2 = 5678180725123554169ULL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 427951808U;
short var_5 = (short)-28600;
long long int var_9 = -4590342791344089105LL;
unsigned short var_10 = (unsigned short)34679;
unsigned long long int var_11 = 6590925274821722647ULL;
unsigned long long int var_14 = 16159211849487081874ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 5154270132192217282ULL;
unsigned short var_18 = (unsigned short)21286;
void init() {
}

void checksum() {
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
