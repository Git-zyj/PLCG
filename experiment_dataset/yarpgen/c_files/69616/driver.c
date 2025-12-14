#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6497362050568261359ULL;
short var_1 = (short)1893;
long long int var_3 = 1403839237809588395LL;
unsigned short var_4 = (unsigned short)24915;
_Bool var_6 = (_Bool)0;
unsigned long long int var_11 = 16804427040504910918ULL;
short var_12 = (short)-31020;
unsigned int var_15 = 2971554659U;
int var_16 = -1771030366;
int zero = 0;
unsigned long long int var_19 = 997142222233482651ULL;
short var_20 = (short)28273;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
