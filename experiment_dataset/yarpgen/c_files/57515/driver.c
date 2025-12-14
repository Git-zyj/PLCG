#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6764541779163640433LL;
signed char var_1 = (signed char)-45;
short var_2 = (short)1809;
short var_4 = (short)-10632;
signed char var_7 = (signed char)-19;
signed char var_8 = (signed char)-61;
_Bool var_13 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)31;
long long int var_20 = 8593422817259387988LL;
unsigned long long int var_21 = 15457525703083381139ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
