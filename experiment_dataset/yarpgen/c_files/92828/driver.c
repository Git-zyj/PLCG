#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1012492634706059697LL;
unsigned char var_1 = (unsigned char)246;
int var_2 = -496124469;
long long int var_3 = -4597713857810414620LL;
long long int var_4 = -5947928385416520420LL;
int var_5 = -1542520154;
int var_6 = 396691325;
unsigned char var_7 = (unsigned char)187;
unsigned char var_8 = (unsigned char)209;
unsigned char var_9 = (unsigned char)190;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)17;
int zero = 0;
unsigned char var_12 = (unsigned char)208;
signed char var_13 = (signed char)-31;
int var_14 = -1781799409;
unsigned char var_15 = (unsigned char)82;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
