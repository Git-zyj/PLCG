#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44608;
int var_3 = -326824910;
unsigned long long int var_9 = 4831382448572023041ULL;
unsigned long long int var_10 = 16967137485895065446ULL;
short var_11 = (short)-26746;
unsigned long long int var_12 = 18041141911352316472ULL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)203;
int zero = 0;
unsigned char var_17 = (unsigned char)114;
unsigned short var_18 = (unsigned short)40089;
unsigned long long int var_19 = 385512895166122592ULL;
unsigned short var_20 = (unsigned short)48561;
long long int var_21 = -1491963419962574128LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
