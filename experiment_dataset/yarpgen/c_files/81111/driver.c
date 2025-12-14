#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -658568152943240165LL;
long long int var_1 = 5739164707164374973LL;
unsigned long long int var_2 = 14347547510732045542ULL;
unsigned long long int var_5 = 10768369819880671302ULL;
unsigned short var_6 = (unsigned short)11951;
unsigned char var_7 = (unsigned char)25;
long long int var_8 = 3152421142811759341LL;
signed char var_11 = (signed char)82;
int var_12 = 876366461;
signed char var_14 = (signed char)-107;
int zero = 0;
unsigned long long int var_15 = 16336771193712874426ULL;
signed char var_16 = (signed char)41;
int var_17 = -727160368;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
