#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2652956170119895978LL;
unsigned char var_4 = (unsigned char)23;
int var_7 = -66401467;
unsigned short var_10 = (unsigned short)3436;
signed char var_12 = (signed char)-5;
_Bool var_15 = (_Bool)0;
unsigned long long int var_17 = 16933113751547231093ULL;
int zero = 0;
signed char var_18 = (signed char)-13;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 4226107075U;
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
