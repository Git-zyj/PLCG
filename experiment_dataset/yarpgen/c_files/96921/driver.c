#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7700698838590705042LL;
unsigned long long int var_2 = 15463705243637377294ULL;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 459569913U;
short var_12 = (short)14302;
int zero = 0;
unsigned short var_15 = (unsigned short)62863;
unsigned int var_16 = 2698525724U;
short var_17 = (short)31838;
unsigned long long int var_18 = 9351636494317971748ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
