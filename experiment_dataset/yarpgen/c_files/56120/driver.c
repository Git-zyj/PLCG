#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4509509835704110610ULL;
unsigned long long int var_2 = 17169353383172438324ULL;
short var_3 = (short)28465;
unsigned char var_11 = (unsigned char)204;
unsigned int var_12 = 296301772U;
_Bool var_14 = (_Bool)0;
short var_15 = (short)14819;
int zero = 0;
long long int var_16 = 8753182186688781736LL;
unsigned long long int var_17 = 3501803031247708598ULL;
unsigned long long int var_18 = 9546701766204218735ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
