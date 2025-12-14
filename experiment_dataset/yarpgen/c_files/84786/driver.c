#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15463689333134115017ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = 5549662250580025850LL;
unsigned short var_8 = (unsigned short)8417;
short var_9 = (short)-28128;
unsigned short var_10 = (unsigned short)45931;
signed char var_11 = (signed char)77;
int zero = 0;
unsigned int var_12 = 4183768230U;
signed char var_13 = (signed char)-7;
signed char var_14 = (signed char)-18;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
