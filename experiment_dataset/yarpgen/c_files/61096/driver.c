#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15883;
unsigned short var_2 = (unsigned short)31804;
short var_3 = (short)26159;
int var_8 = 23719290;
short var_9 = (short)-29641;
unsigned int var_11 = 719367671U;
_Bool var_12 = (_Bool)1;
int zero = 0;
short var_19 = (short)675;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)14679;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
