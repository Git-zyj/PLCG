#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1551547094780609334ULL;
unsigned short var_1 = (unsigned short)59743;
int var_2 = -1318346873;
short var_3 = (short)9383;
unsigned int var_7 = 3086115545U;
unsigned char var_9 = (unsigned char)45;
short var_13 = (short)23335;
long long int var_15 = 1336224377065332548LL;
long long int var_16 = 5452029276207272926LL;
_Bool var_17 = (_Bool)0;
int zero = 0;
int var_18 = -900925181;
short var_19 = (short)-20356;
signed char var_20 = (signed char)-28;
void init() {
}

void checksum() {
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
