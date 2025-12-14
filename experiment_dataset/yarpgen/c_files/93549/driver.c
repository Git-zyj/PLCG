#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12772511242595379342ULL;
unsigned short var_4 = (unsigned short)7086;
_Bool var_6 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 3622835762U;
int zero = 0;
unsigned long long int var_19 = 1731584404593583527ULL;
int var_20 = -801686716;
unsigned short var_21 = (unsigned short)57257;
unsigned char var_22 = (unsigned char)164;
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
