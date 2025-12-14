#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)54;
int var_1 = -43965668;
_Bool var_3 = (_Bool)0;
int var_4 = -1535688918;
int var_5 = -842785634;
int var_7 = -1563574128;
unsigned char var_8 = (unsigned char)150;
_Bool var_9 = (_Bool)1;
unsigned char var_11 = (unsigned char)145;
int zero = 0;
signed char var_14 = (signed char)-72;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)57;
signed char var_18 = (signed char)56;
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
