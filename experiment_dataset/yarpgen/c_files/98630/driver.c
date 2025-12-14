#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1208793985202552549LL;
int var_3 = 859215646;
unsigned short var_4 = (unsigned short)16029;
unsigned long long int var_6 = 14393783896663359294ULL;
unsigned long long int var_8 = 13079258190292222136ULL;
unsigned int var_12 = 3673153345U;
int zero = 0;
unsigned short var_14 = (unsigned short)4445;
long long int var_15 = 4859670146293426687LL;
unsigned short var_16 = (unsigned short)34293;
_Bool var_17 = (_Bool)0;
_Bool var_18 = (_Bool)1;
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
