#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 11967318858536492393ULL;
signed char var_4 = (signed char)-93;
int var_5 = 1074981295;
unsigned long long int var_8 = 7814588989410991618ULL;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)57;
int var_11 = -996568358;
unsigned long long int var_13 = 1191255392876312400ULL;
unsigned long long int var_14 = 18021484909769477507ULL;
unsigned char var_15 = (unsigned char)190;
int zero = 0;
unsigned long long int var_17 = 5082695773684193536ULL;
int var_18 = -876050739;
long long int var_19 = -7333404290911360999LL;
signed char var_20 = (signed char)-1;
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
