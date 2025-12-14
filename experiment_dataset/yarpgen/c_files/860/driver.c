#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3990737567169484281LL;
long long int var_3 = -3361741509442048168LL;
signed char var_8 = (signed char)-44;
unsigned long long int var_9 = 14503997144987948760ULL;
unsigned long long int var_11 = 16920574027344921611ULL;
int zero = 0;
_Bool var_19 = (_Bool)1;
int var_20 = 263831961;
long long int var_21 = 1353366976795928889LL;
void init() {
}

void checksum() {
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
