#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9242364095143897710ULL;
unsigned short var_4 = (unsigned short)60492;
signed char var_5 = (signed char)-82;
int var_6 = -1733961469;
_Bool var_7 = (_Bool)1;
int zero = 0;
_Bool var_10 = (_Bool)1;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-90;
long long int var_13 = -4518736900037788560LL;
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
