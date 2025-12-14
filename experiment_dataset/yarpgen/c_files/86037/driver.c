#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)19733;
signed char var_4 = (signed char)51;
int var_5 = -655276756;
long long int var_7 = 2098588885486643974LL;
signed char var_8 = (signed char)57;
unsigned int var_9 = 3235015066U;
int zero = 0;
unsigned int var_10 = 1232136104U;
unsigned short var_11 = (unsigned short)8140;
int var_12 = 1563298532;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
