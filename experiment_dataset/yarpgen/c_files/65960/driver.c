#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)4;
unsigned int var_6 = 2927307301U;
signed char var_7 = (signed char)-6;
signed char var_9 = (signed char)-124;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 3247563364030793367LL;
_Bool var_22 = (_Bool)0;
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
