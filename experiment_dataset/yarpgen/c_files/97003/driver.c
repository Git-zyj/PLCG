#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1409319079;
signed char var_1 = (signed char)76;
short var_2 = (short)15628;
int var_3 = 691117486;
unsigned int var_4 = 270925897U;
int var_8 = 38247213;
int var_9 = -1623796071;
_Bool var_11 = (_Bool)1;
short var_12 = (short)26321;
long long int var_13 = -621418362210952734LL;
unsigned int var_14 = 2028100945U;
int zero = 0;
int var_17 = 976740136;
int var_18 = 235693612;
short var_19 = (short)12817;
unsigned short var_20 = (unsigned short)7299;
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
