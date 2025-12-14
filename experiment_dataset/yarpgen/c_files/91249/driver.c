#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8171532195699449594ULL;
int var_3 = 1966261048;
unsigned short var_4 = (unsigned short)32227;
unsigned char var_6 = (unsigned char)39;
int var_7 = 666841102;
long long int var_12 = 1963648348510248678LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)1788;
_Bool var_15 = (_Bool)0;
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
