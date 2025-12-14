#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1146546419;
signed char var_1 = (signed char)37;
_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)18586;
unsigned long long int var_4 = 11182208080076040108ULL;
long long int var_5 = 6528708145797281642LL;
signed char var_6 = (signed char)0;
unsigned int var_7 = 2757523385U;
unsigned char var_8 = (unsigned char)238;
short var_9 = (short)-12220;
int zero = 0;
signed char var_10 = (signed char)31;
signed char var_11 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
