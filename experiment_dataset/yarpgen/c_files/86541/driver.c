#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1591007105817890538LL;
signed char var_3 = (signed char)-101;
unsigned char var_7 = (unsigned char)222;
signed char var_8 = (signed char)68;
unsigned int var_9 = 3786985579U;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_14 = (signed char)51;
unsigned int var_15 = 2445323961U;
unsigned int var_16 = 1301274369U;
signed char var_17 = (signed char)97;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
