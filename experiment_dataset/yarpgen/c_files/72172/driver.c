#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
_Bool var_9 = (_Bool)1;
int var_10 = 133999748;
unsigned int var_11 = 3114600119U;
unsigned short var_13 = (unsigned short)47645;
long long int var_17 = 1338022729580076563LL;
unsigned int var_19 = 2330064738U;
int zero = 0;
signed char var_20 = (signed char)-37;
unsigned short var_21 = (unsigned short)23727;
int var_22 = -1730242539;
unsigned short var_23 = (unsigned short)53034;
void init() {
}

void checksum() {
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
