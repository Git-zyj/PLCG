#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)90;
unsigned long long int var_3 = 8740366104436156674ULL;
int var_5 = -235923971;
long long int var_6 = 4985499826156409297LL;
unsigned long long int var_7 = 13319174112195389143ULL;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)137;
int var_11 = 940072721;
int zero = 0;
unsigned short var_12 = (unsigned short)43266;
signed char var_13 = (signed char)-11;
unsigned long long int var_14 = 12609821479926187208ULL;
unsigned char var_15 = (unsigned char)156;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
