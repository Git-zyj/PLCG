#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5698604730055456068LL;
short var_2 = (short)-15155;
long long int var_4 = 953811763141248388LL;
short var_5 = (short)13667;
short var_7 = (short)29598;
unsigned short var_8 = (unsigned short)51286;
unsigned long long int var_9 = 15580284763668548176ULL;
signed char var_11 = (signed char)-31;
int zero = 0;
_Bool var_12 = (_Bool)1;
short var_13 = (short)19943;
short var_14 = (short)11566;
_Bool var_15 = (_Bool)1;
long long int var_16 = 2030811286770508910LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
