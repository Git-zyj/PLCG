#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)35;
long long int var_6 = 2481707579960334443LL;
unsigned char var_7 = (unsigned char)183;
signed char var_8 = (signed char)95;
unsigned short var_9 = (unsigned short)45271;
int zero = 0;
unsigned int var_11 = 2834515602U;
unsigned long long int var_12 = 7019107216875429320ULL;
unsigned int var_13 = 4083664U;
unsigned int var_14 = 604893044U;
unsigned long long int var_15 = 2771933290167474652ULL;
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
