#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3574314238279298461LL;
unsigned long long int var_3 = 14587172939543831488ULL;
_Bool var_4 = (_Bool)1;
unsigned short var_8 = (unsigned short)29454;
_Bool var_13 = (_Bool)0;
unsigned char var_15 = (unsigned char)176;
int zero = 0;
unsigned char var_18 = (unsigned char)12;
unsigned short var_19 = (unsigned short)37607;
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
