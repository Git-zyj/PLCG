#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -6205185434141903019LL;
unsigned char var_7 = (unsigned char)211;
_Bool var_9 = (_Bool)0;
signed char var_11 = (signed char)122;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-80;
short var_16 = (short)29786;
unsigned short var_17 = (unsigned short)50251;
int zero = 0;
unsigned long long int var_19 = 13933518358519445857ULL;
int var_20 = -514392768;
signed char var_21 = (signed char)121;
signed char var_22 = (signed char)-52;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
