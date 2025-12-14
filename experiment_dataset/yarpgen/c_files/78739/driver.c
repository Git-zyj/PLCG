#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)60;
unsigned long long int var_11 = 4729935380754991570ULL;
unsigned long long int var_14 = 13813521350305556414ULL;
unsigned short var_16 = (unsigned short)47344;
unsigned char var_18 = (unsigned char)189;
int zero = 0;
unsigned long long int var_19 = 18341810137095198930ULL;
unsigned long long int var_20 = 7925034581817948421ULL;
unsigned short var_21 = (unsigned short)13346;
unsigned short var_22 = (unsigned short)8062;
unsigned long long int var_23 = 513032655208923698ULL;
signed char var_24 = (signed char)105;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
