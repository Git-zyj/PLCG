#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)115;
short var_8 = (short)-15598;
long long int var_9 = -8735767429542781248LL;
long long int var_13 = -5738784868378207627LL;
unsigned short var_14 = (unsigned short)63348;
unsigned int var_15 = 3504632206U;
int zero = 0;
short var_20 = (short)-11726;
unsigned int var_21 = 2542891761U;
void init() {
}

void checksum() {
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
