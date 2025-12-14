#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -5638309974360437011LL;
short var_7 = (short)-13465;
unsigned char var_10 = (unsigned char)89;
long long int var_13 = 3080585502965355613LL;
unsigned char var_14 = (unsigned char)192;
unsigned char var_15 = (unsigned char)205;
int zero = 0;
signed char var_16 = (signed char)77;
int var_17 = 407737851;
signed char var_18 = (signed char)-89;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
