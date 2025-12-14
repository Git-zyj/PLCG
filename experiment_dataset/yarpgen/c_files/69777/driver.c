#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1953765342U;
long long int var_3 = -3980919605006470818LL;
short var_8 = (short)-8234;
unsigned int var_9 = 388096953U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 7118387049342867340ULL;
signed char var_15 = (signed char)-44;
unsigned int var_16 = 2869706379U;
int zero = 0;
unsigned long long int var_19 = 11301202861813262266ULL;
unsigned long long int var_20 = 1772056994864753677ULL;
short var_21 = (short)31340;
short var_22 = (short)-24995;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
