#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 340130315U;
int var_2 = 1529411006;
int var_6 = -1284256452;
short var_8 = (short)4971;
long long int var_9 = 1746383648420368070LL;
signed char var_14 = (signed char)9;
int zero = 0;
unsigned short var_18 = (unsigned short)3133;
long long int var_19 = -8227744063348179366LL;
void init() {
}

void checksum() {
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
