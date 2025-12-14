#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_6 = (unsigned short)39055;
_Bool var_7 = (_Bool)1;
long long int var_8 = 6316808605706894493LL;
long long int var_9 = 7520899278471414679LL;
unsigned short var_10 = (unsigned short)55783;
unsigned short var_11 = (unsigned short)23773;
long long int var_14 = -5462832763173791041LL;
int zero = 0;
unsigned short var_15 = (unsigned short)43113;
unsigned short var_16 = (unsigned short)21567;
long long int var_17 = -1432428844093620682LL;
_Bool var_18 = (_Bool)1;
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
