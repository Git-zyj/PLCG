#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6290652460291548219LL;
long long int var_2 = -6896338457365801391LL;
signed char var_4 = (signed char)127;
short var_7 = (short)-4986;
short var_8 = (short)-8270;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-127;
void init() {
}

void checksum() {
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
