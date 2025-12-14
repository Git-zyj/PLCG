#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1873013721434467480LL;
unsigned char var_4 = (unsigned char)20;
unsigned char var_5 = (unsigned char)244;
signed char var_6 = (signed char)-19;
int var_7 = -1806854704;
long long int var_8 = -7096511742384861772LL;
int var_9 = 758918654;
int zero = 0;
long long int var_10 = -1055099870044729308LL;
long long int var_11 = -4919539892285598160LL;
short var_12 = (short)-5912;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
