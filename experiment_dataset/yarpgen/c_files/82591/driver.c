#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7863091252601542198LL;
long long int var_7 = 2211287002497610376LL;
unsigned long long int var_13 = 11951455386605879797ULL;
_Bool var_14 = (_Bool)1;
_Bool var_18 = (_Bool)0;
int zero = 0;
signed char var_20 = (signed char)-45;
signed char var_21 = (signed char)-21;
signed char var_22 = (signed char)-50;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
