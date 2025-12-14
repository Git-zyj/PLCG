#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12630117215169337973ULL;
unsigned short var_1 = (unsigned short)4237;
unsigned int var_2 = 568179940U;
unsigned long long int var_3 = 76746946880203063ULL;
unsigned short var_4 = (unsigned short)56454;
unsigned long long int var_8 = 3753870716840869226ULL;
short var_9 = (short)6846;
unsigned short var_12 = (unsigned short)62427;
unsigned long long int var_15 = 9934088992302814423ULL;
unsigned long long int var_19 = 4244104509347618099ULL;
int zero = 0;
unsigned int var_20 = 3548369959U;
short var_21 = (short)9220;
unsigned short var_22 = (unsigned short)52537;
unsigned long long int var_23 = 16981865631668564075ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
