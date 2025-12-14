#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1311694846859492051LL;
int var_5 = 920953470;
long long int var_6 = -8718381287646962286LL;
unsigned long long int var_7 = 1154521934624282974ULL;
unsigned long long int var_12 = 2772243421541664455ULL;
int var_13 = 1226440203;
int zero = 0;
signed char var_18 = (signed char)125;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
