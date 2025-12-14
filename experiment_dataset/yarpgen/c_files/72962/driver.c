#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-86;
unsigned short var_6 = (unsigned short)52483;
unsigned short var_12 = (unsigned short)41704;
unsigned long long int var_16 = 9828686427819123000ULL;
unsigned int var_18 = 4009562408U;
int zero = 0;
unsigned int var_19 = 4216440190U;
unsigned long long int var_20 = 4978859988038289055ULL;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 17433169091694281597ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
