#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)785;
_Bool var_4 = (_Bool)1;
short var_5 = (short)5463;
unsigned char var_9 = (unsigned char)222;
unsigned long long int var_10 = 5810833015974169155ULL;
unsigned short var_12 = (unsigned short)15871;
int zero = 0;
unsigned short var_13 = (unsigned short)51577;
int var_14 = 1481685050;
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
