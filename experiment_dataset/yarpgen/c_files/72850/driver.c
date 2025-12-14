#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -990633318;
int var_3 = -1829443536;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)8080;
int var_7 = -141338617;
short var_11 = (short)-13536;
int zero = 0;
unsigned short var_14 = (unsigned short)22925;
unsigned long long int var_15 = 14944730037602036859ULL;
unsigned short var_16 = (unsigned short)33554;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
