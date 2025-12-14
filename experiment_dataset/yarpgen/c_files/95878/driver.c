#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8635413831556186227ULL;
unsigned int var_3 = 4210607828U;
short var_4 = (short)27646;
unsigned long long int var_7 = 10400483233238505948ULL;
int var_8 = 1734830386;
unsigned long long int var_9 = 15131226266915245258ULL;
long long int var_10 = -392597670961224987LL;
signed char var_11 = (signed char)-118;
long long int var_12 = -8275696362959781699LL;
unsigned long long int var_16 = 8522930132732182884ULL;
int zero = 0;
unsigned int var_17 = 2975699000U;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 2878621135U;
long long int var_20 = 1005265264761689662LL;
_Bool var_21 = (_Bool)0;
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
