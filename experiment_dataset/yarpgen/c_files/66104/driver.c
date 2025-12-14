#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)50864;
unsigned long long int var_4 = 2115506532903210360ULL;
short var_6 = (short)-22302;
short var_9 = (short)10317;
long long int var_10 = 8709199379953820411LL;
long long int var_11 = -5462473455136013889LL;
unsigned char var_13 = (unsigned char)172;
long long int var_14 = 2095339777473697748LL;
short var_16 = (short)-6321;
int zero = 0;
unsigned long long int var_20 = 4199881475326010051ULL;
unsigned char var_21 = (unsigned char)84;
long long int var_22 = -8246925572928300042LL;
signed char var_23 = (signed char)-55;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
