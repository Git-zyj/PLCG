#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
unsigned int var_2 = 1933471991U;
signed char var_3 = (signed char)-102;
unsigned char var_4 = (unsigned char)17;
unsigned int var_6 = 645000167U;
long long int var_7 = -1577355212259683689LL;
long long int var_10 = -8571483400508869423LL;
short var_17 = (short)27113;
int zero = 0;
long long int var_18 = -3609379396737148862LL;
long long int var_19 = 4624666700400150322LL;
int var_20 = 2080913594;
unsigned int var_21 = 1137824151U;
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
