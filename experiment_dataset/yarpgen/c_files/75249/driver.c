#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1856371788;
_Bool var_2 = (_Bool)1;
int var_4 = -817895195;
unsigned long long int var_7 = 4629923183399319478ULL;
unsigned int var_9 = 512077030U;
long long int var_15 = -7194001901440230528LL;
int zero = 0;
unsigned long long int var_18 = 8685390225703682670ULL;
long long int var_19 = 869192377189137584LL;
unsigned long long int var_20 = 5068771349033870811ULL;
void init() {
}

void checksum() {
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
