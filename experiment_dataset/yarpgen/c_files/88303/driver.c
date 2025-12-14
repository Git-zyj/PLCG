#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 902363515;
int var_4 = -477677256;
unsigned long long int var_5 = 16721566439351119391ULL;
unsigned long long int var_7 = 8676083450385410623ULL;
signed char var_12 = (signed char)62;
unsigned long long int var_15 = 8223743774515741806ULL;
signed char var_17 = (signed char)123;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)59;
signed char var_20 = (signed char)-3;
signed char var_21 = (signed char)27;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
