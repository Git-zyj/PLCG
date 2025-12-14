#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3105950972U;
unsigned int var_1 = 1132030826U;
unsigned long long int var_3 = 12085346713947185347ULL;
long long int var_4 = -60464164014721462LL;
unsigned long long int var_5 = 2010360830785245011ULL;
signed char var_7 = (signed char)76;
unsigned char var_8 = (unsigned char)130;
unsigned char var_9 = (unsigned char)41;
long long int var_13 = 4250636248461599268LL;
unsigned long long int var_14 = 16513916903617385507ULL;
int zero = 0;
unsigned int var_16 = 2261693338U;
unsigned long long int var_17 = 451866183104665921ULL;
unsigned short var_18 = (unsigned short)63981;
unsigned char var_19 = (unsigned char)124;
unsigned int var_20 = 699850725U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
