#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)54;
unsigned long long int var_2 = 14413362903274053507ULL;
unsigned char var_3 = (unsigned char)240;
long long int var_4 = -4010813582650301981LL;
_Bool var_5 = (_Bool)1;
int var_7 = -1588619447;
unsigned long long int var_8 = 11310442639530715377ULL;
int zero = 0;
unsigned long long int var_12 = 14477966198534898444ULL;
signed char var_13 = (signed char)39;
signed char var_14 = (signed char)-45;
unsigned int var_15 = 3778741086U;
signed char var_16 = (signed char)5;
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
