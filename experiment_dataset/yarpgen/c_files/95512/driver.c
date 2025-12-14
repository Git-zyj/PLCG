#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-20919;
int var_2 = 1936535556;
int var_4 = -1705751475;
long long int var_9 = 8842008106744344724LL;
short var_11 = (short)-2325;
int var_12 = 1250617416;
int zero = 0;
long long int var_14 = -8414079611523765276LL;
unsigned short var_15 = (unsigned short)55920;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
