#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1155451322U;
_Bool var_2 = (_Bool)1;
unsigned short var_4 = (unsigned short)807;
unsigned int var_5 = 2576018882U;
unsigned char var_7 = (unsigned char)156;
int zero = 0;
signed char var_13 = (signed char)-8;
unsigned short var_14 = (unsigned short)32139;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
