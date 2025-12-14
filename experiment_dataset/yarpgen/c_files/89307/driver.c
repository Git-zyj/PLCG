#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-2948;
unsigned int var_2 = 3367147344U;
long long int var_4 = 8453264227779832336LL;
signed char var_5 = (signed char)49;
long long int var_9 = -8612594593943351569LL;
unsigned long long int var_10 = 9720653070285509360ULL;
unsigned short var_13 = (unsigned short)37771;
int zero = 0;
unsigned long long int var_17 = 3548121187561948291ULL;
unsigned long long int var_18 = 14429897489221475555ULL;
unsigned long long int var_19 = 9405392406074431245ULL;
unsigned int var_20 = 2602826207U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
