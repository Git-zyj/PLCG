#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7381;
long long int var_1 = 2334417450604755259LL;
unsigned int var_3 = 2758974835U;
unsigned long long int var_4 = 7343563445764550349ULL;
_Bool var_5 = (_Bool)0;
short var_8 = (short)-28334;
int var_9 = 1514002598;
unsigned long long int var_10 = 13732482475890149466ULL;
unsigned long long int var_11 = 7112436813742674602ULL;
int zero = 0;
unsigned long long int var_13 = 15663637580331235586ULL;
unsigned int var_14 = 2346058325U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
