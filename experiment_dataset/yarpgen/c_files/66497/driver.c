#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4651724816914826507ULL;
unsigned short var_2 = (unsigned short)39032;
signed char var_4 = (signed char)-59;
unsigned int var_5 = 800339572U;
signed char var_6 = (signed char)-43;
long long int var_7 = 3231711491110374645LL;
int zero = 0;
long long int var_10 = -8055967747163751589LL;
_Bool var_11 = (_Bool)0;
int var_12 = 1046726276;
signed char var_13 = (signed char)97;
unsigned long long int var_14 = 16599569840112463182ULL;
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
