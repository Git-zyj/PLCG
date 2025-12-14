#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1410634792;
unsigned short var_3 = (unsigned short)41433;
unsigned short var_6 = (unsigned short)1561;
int var_8 = -1827126576;
unsigned short var_10 = (unsigned short)58037;
int var_12 = 1781706097;
_Bool var_13 = (_Bool)1;
unsigned int var_16 = 1206610208U;
int zero = 0;
signed char var_18 = (signed char)-101;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)143;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
