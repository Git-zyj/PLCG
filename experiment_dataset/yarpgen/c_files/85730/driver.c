#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 15998780652139210256ULL;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
short var_17 = (short)27963;
unsigned long long int var_19 = 884513730745570175ULL;
int zero = 0;
unsigned long long int var_20 = 8553851060565739674ULL;
signed char var_21 = (signed char)-78;
unsigned long long int var_22 = 8717091512862505371ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
