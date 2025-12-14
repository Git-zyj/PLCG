#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 409499228U;
int var_7 = -1393213728;
signed char var_8 = (signed char)-73;
short var_12 = (short)13064;
int zero = 0;
int var_19 = -42837551;
unsigned short var_20 = (unsigned short)43045;
short var_21 = (short)9281;
long long int var_22 = 5937113589856021652LL;
unsigned int var_23 = 1676049844U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
