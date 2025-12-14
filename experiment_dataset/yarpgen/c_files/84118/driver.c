#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1185172158;
short var_4 = (short)15398;
signed char var_5 = (signed char)-9;
long long int var_8 = -762666616437596704LL;
unsigned int var_9 = 3381533387U;
unsigned char var_10 = (unsigned char)8;
unsigned int var_13 = 2718735797U;
int zero = 0;
unsigned int var_15 = 2905174130U;
long long int var_16 = 1218986135987646912LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
