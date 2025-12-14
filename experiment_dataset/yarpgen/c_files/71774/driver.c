#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 3340583386504700793ULL;
_Bool var_4 = (_Bool)1;
int var_9 = 1085749108;
unsigned char var_11 = (unsigned char)7;
signed char var_12 = (signed char)1;
signed char var_13 = (signed char)-113;
unsigned short var_17 = (unsigned short)64304;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -1839628193;
_Bool var_22 = (_Bool)0;
unsigned short var_23 = (unsigned short)6917;
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
