#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1729211173;
_Bool var_4 = (_Bool)0;
int var_6 = 1080046730;
signed char var_7 = (signed char)-71;
short var_8 = (short)27895;
int zero = 0;
unsigned long long int var_12 = 9102773525657258003ULL;
long long int var_13 = -4084782797570524LL;
void init() {
}

void checksum() {
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
