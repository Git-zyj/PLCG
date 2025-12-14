#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)142;
_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)1;
short var_4 = (short)-32138;
int var_6 = 2088879352;
unsigned long long int var_8 = 13086881635126366379ULL;
long long int var_9 = 576820703358877451LL;
int zero = 0;
long long int var_10 = -4276021753777520634LL;
unsigned int var_11 = 336504880U;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3761334955U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
