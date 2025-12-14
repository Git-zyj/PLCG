#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1645769910723178797ULL;
unsigned long long int var_2 = 3170989608796446664ULL;
short var_7 = (short)27222;
short var_13 = (short)-3146;
unsigned char var_19 = (unsigned char)44;
int zero = 0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)116;
unsigned int var_22 = 398683836U;
unsigned short var_23 = (unsigned short)23732;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
