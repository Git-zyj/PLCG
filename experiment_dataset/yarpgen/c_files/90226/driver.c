#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-118;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)62529;
unsigned int var_7 = 1915631006U;
signed char var_8 = (signed char)71;
unsigned long long int var_10 = 18439545032914876522ULL;
unsigned int var_12 = 772100034U;
int zero = 0;
signed char var_14 = (signed char)-109;
unsigned long long int var_15 = 10666487398684403083ULL;
int var_16 = 1355639858;
unsigned int var_17 = 2547086691U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
