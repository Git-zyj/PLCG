#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)6694;
unsigned char var_1 = (unsigned char)144;
unsigned int var_2 = 1449019901U;
signed char var_4 = (signed char)110;
signed char var_5 = (signed char)103;
long long int var_6 = 3351318924274888245LL;
signed char var_7 = (signed char)125;
int var_8 = 1082431880;
unsigned short var_9 = (unsigned short)13775;
short var_10 = (short)-44;
signed char var_11 = (signed char)109;
unsigned short var_12 = (unsigned short)55876;
int var_13 = -1930811800;
int zero = 0;
long long int var_14 = 405684115024854235LL;
int var_15 = 735372527;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
