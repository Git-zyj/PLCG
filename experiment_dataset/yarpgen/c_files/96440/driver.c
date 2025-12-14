#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-15140;
unsigned int var_5 = 3825218764U;
unsigned char var_9 = (unsigned char)54;
_Bool var_11 = (_Bool)1;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
int zero = 0;
long long int var_20 = -6506267447073227367LL;
int var_21 = -1537884465;
_Bool var_22 = (_Bool)1;
unsigned long long int var_23 = 4912564875983224840ULL;
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
