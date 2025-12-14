#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-88;
unsigned short var_4 = (unsigned short)11061;
int var_5 = -1996513877;
int var_9 = -114874040;
long long int var_12 = -2414432164887926944LL;
int var_13 = 249708962;
signed char var_15 = (signed char)57;
long long int var_16 = 5427753614542234930LL;
signed char var_17 = (signed char)-63;
int zero = 0;
unsigned long long int var_18 = 14172403776303788710ULL;
unsigned short var_19 = (unsigned short)52024;
short var_20 = (short)23964;
void init() {
}

void checksum() {
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
