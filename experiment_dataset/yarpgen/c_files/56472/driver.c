#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3115158915U;
unsigned long long int var_13 = 7252151098622271119ULL;
short var_14 = (short)19250;
_Bool var_17 = (_Bool)1;
unsigned char var_19 = (unsigned char)98;
int zero = 0;
long long int var_20 = -8372041598699635222LL;
int var_21 = -685174924;
unsigned long long int var_22 = 1581921289672496472ULL;
_Bool var_23 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
