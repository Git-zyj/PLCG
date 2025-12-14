#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 7129088255913806141ULL;
long long int var_3 = 5694859890025149172LL;
unsigned short var_6 = (unsigned short)15979;
signed char var_8 = (signed char)83;
signed char var_10 = (signed char)37;
int zero = 0;
unsigned long long int var_15 = 12084123540975069262ULL;
long long int var_16 = 3044235801187633714LL;
unsigned short var_17 = (unsigned short)24415;
unsigned short var_18 = (unsigned short)53765;
long long int var_19 = 5798306585167495404LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
