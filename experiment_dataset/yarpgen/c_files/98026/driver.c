#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_2 = -1468968055;
long long int var_3 = -7872608134665291353LL;
short var_4 = (short)-27242;
unsigned short var_6 = (unsigned short)51103;
int var_8 = 6367089;
short var_11 = (short)27636;
_Bool var_15 = (_Bool)0;
long long int var_16 = -3079257570605655631LL;
int zero = 0;
signed char var_17 = (signed char)-26;
unsigned int var_18 = 2064941744U;
int var_19 = 1076516568;
unsigned short var_20 = (unsigned short)46450;
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
