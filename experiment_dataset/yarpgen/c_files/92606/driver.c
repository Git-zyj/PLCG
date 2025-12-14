#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
int var_1 = 539182937;
long long int var_3 = 9155453836604502139LL;
unsigned long long int var_4 = 5140529496441069208ULL;
_Bool var_5 = (_Bool)1;
unsigned short var_7 = (unsigned short)43513;
short var_8 = (short)26336;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned char var_10 = (unsigned char)229;
long long int var_11 = -7806385744483550012LL;
_Bool var_12 = (_Bool)1;
int var_13 = 1877915906;
long long int var_14 = -1939236533500733925LL;
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
