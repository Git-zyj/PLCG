#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 286856174;
unsigned long long int var_6 = 17627216731608734711ULL;
_Bool var_7 = (_Bool)0;
int var_9 = -1916723003;
_Bool var_13 = (_Bool)0;
long long int var_14 = -1863255277335423599LL;
int zero = 0;
short var_19 = (short)5570;
signed char var_20 = (signed char)73;
unsigned short var_21 = (unsigned short)41980;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
