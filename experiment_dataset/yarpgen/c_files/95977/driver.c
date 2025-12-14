#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3694751728494226432ULL;
unsigned long long int var_1 = 15523541108074572348ULL;
int var_3 = 1945985578;
unsigned long long int var_4 = 12898407785278225021ULL;
long long int var_10 = 6626040736992705458LL;
int zero = 0;
unsigned long long int var_11 = 12692203842903107170ULL;
long long int var_12 = -1676995293349458291LL;
long long int var_13 = 5642037649907373840LL;
unsigned char var_14 = (unsigned char)70;
signed char var_15 = (signed char)49;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
