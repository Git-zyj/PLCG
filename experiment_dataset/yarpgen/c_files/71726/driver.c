#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7947711895287937444LL;
short var_5 = (short)15020;
signed char var_8 = (signed char)36;
long long int var_12 = -7288432838601895704LL;
unsigned short var_18 = (unsigned short)58668;
int zero = 0;
unsigned long long int var_19 = 7529112661194745337ULL;
unsigned long long int var_20 = 7142685391259681975ULL;
int var_21 = 724824146;
short var_22 = (short)2662;
short var_23 = (short)-10504;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
