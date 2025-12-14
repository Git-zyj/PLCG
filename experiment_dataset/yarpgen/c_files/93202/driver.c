#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-10938;
_Bool var_1 = (_Bool)0;
long long int var_3 = 5529075581941647774LL;
unsigned long long int var_5 = 11420810421565533794ULL;
short var_6 = (short)28697;
long long int var_7 = 8653116863452146074LL;
long long int var_13 = -1350415276827378642LL;
int zero = 0;
unsigned char var_14 = (unsigned char)128;
signed char var_15 = (signed char)-103;
signed char var_16 = (signed char)73;
signed char var_17 = (signed char)-34;
unsigned short var_18 = (unsigned short)1968;
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
