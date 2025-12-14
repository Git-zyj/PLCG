#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30962;
signed char var_3 = (signed char)50;
int var_8 = -717926151;
unsigned char var_9 = (unsigned char)155;
signed char var_10 = (signed char)-75;
int var_11 = -1219488361;
long long int var_12 = 7738226150113436930LL;
int var_13 = -617332385;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_15 = -1913971499;
_Bool var_16 = (_Bool)0;
int var_17 = 158983475;
short var_18 = (short)15013;
void init() {
}

void checksum() {
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
