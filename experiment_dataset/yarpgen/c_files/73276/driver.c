#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)219;
unsigned int var_2 = 3600558142U;
signed char var_4 = (signed char)-75;
unsigned char var_5 = (unsigned char)166;
unsigned short var_6 = (unsigned short)49606;
long long int var_7 = -8033904505843813307LL;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned short var_13 = (unsigned short)21532;
int var_14 = -1206798434;
long long int var_15 = -6438309036361396846LL;
unsigned int var_16 = 686174996U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
