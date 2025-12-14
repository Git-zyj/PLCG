#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)43;
unsigned char var_3 = (unsigned char)199;
unsigned char var_4 = (unsigned char)218;
short var_6 = (short)1807;
short var_8 = (short)31802;
signed char var_9 = (signed char)11;
signed char var_10 = (signed char)-80;
int zero = 0;
int var_11 = -1091790724;
short var_12 = (short)14164;
unsigned long long int var_13 = 1710583601191082570ULL;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
