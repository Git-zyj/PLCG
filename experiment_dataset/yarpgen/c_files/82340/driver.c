#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-80;
signed char var_5 = (signed char)13;
long long int var_7 = 5547540085363661839LL;
unsigned long long int var_9 = 13323961978661309514ULL;
int zero = 0;
unsigned long long int var_10 = 2041677328012008935ULL;
unsigned int var_11 = 3889769519U;
unsigned short var_12 = (unsigned short)58339;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
