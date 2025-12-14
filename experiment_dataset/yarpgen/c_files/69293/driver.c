#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57925;
unsigned long long int var_2 = 8267650761069611166ULL;
signed char var_3 = (signed char)-67;
int var_5 = 1790809915;
long long int var_8 = 3531523846533503696LL;
int var_10 = 2087658616;
int var_14 = -1845732761;
int zero = 0;
unsigned long long int var_15 = 10029738460680858823ULL;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 1544186675U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
