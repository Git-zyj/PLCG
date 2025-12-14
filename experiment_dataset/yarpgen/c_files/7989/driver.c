#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)21705;
short var_6 = (short)-596;
unsigned short var_7 = (unsigned short)2833;
signed char var_10 = (signed char)70;
long long int var_12 = -3844889656421237825LL;
long long int var_13 = -7070424152484501699LL;
int zero = 0;
signed char var_16 = (signed char)-8;
short var_17 = (short)-18391;
signed char var_18 = (signed char)-67;
unsigned long long int var_19 = 3710276579945710658ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
