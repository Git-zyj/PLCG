#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1933177543085062802LL;
unsigned short var_6 = (unsigned short)59723;
signed char var_8 = (signed char)-57;
_Bool var_12 = (_Bool)0;
unsigned long long int var_17 = 11335863729101291333ULL;
unsigned long long int var_19 = 13335067451660784546ULL;
int zero = 0;
unsigned long long int var_20 = 12911019711376892408ULL;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)15986;
void init() {
}

void checksum() {
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
