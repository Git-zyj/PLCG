#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 6944622453529275406LL;
unsigned char var_7 = (unsigned char)104;
_Bool var_12 = (_Bool)0;
unsigned int var_16 = 2756902482U;
int zero = 0;
unsigned short var_20 = (unsigned short)29821;
unsigned long long int var_21 = 6388779252843860599ULL;
signed char var_22 = (signed char)-31;
int var_23 = 688334338;
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
