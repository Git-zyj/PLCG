#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_4 = -1328404138;
unsigned char var_6 = (unsigned char)150;
long long int var_8 = 1142014741860437610LL;
_Bool var_10 = (_Bool)0;
signed char var_13 = (signed char)-90;
int zero = 0;
unsigned long long int var_16 = 2037613688582929345ULL;
unsigned char var_17 = (unsigned char)142;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
