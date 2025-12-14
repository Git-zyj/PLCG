#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)126;
unsigned short var_8 = (unsigned short)35885;
int var_9 = -1737510146;
int var_10 = -285358092;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 1349104111U;
long long int var_13 = 146848617113643114LL;
signed char var_14 = (signed char)-46;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
