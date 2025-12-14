#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1925;
_Bool var_1 = (_Bool)0;
short var_5 = (short)-2851;
_Bool var_8 = (_Bool)1;
long long int var_9 = -8245279490738283037LL;
long long int var_10 = 1394219637684238109LL;
signed char var_11 = (signed char)-57;
int zero = 0;
long long int var_12 = -8485103143346872003LL;
long long int var_13 = 8422843726942157957LL;
short var_14 = (short)7790;
short var_15 = (short)6249;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
