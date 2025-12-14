#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)28835;
_Bool var_11 = (_Bool)1;
unsigned short var_14 = (unsigned short)57648;
signed char var_15 = (signed char)83;
signed char var_16 = (signed char)39;
short var_18 = (short)-12872;
signed char var_19 = (signed char)32;
int zero = 0;
unsigned long long int var_20 = 12606976324368232510ULL;
long long int var_21 = 811910770166209787LL;
unsigned long long int var_22 = 15791898991503358926ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
