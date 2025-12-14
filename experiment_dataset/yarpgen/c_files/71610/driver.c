#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-70;
short var_5 = (short)9259;
long long int var_6 = -6329339210237484713LL;
unsigned char var_8 = (unsigned char)13;
int zero = 0;
long long int var_13 = 4598668123752883897LL;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 3359374966U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
