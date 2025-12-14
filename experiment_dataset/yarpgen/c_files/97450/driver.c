#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2311576012U;
unsigned int var_4 = 1885952642U;
long long int var_6 = -6895728743698051004LL;
unsigned long long int var_9 = 14029042777749265416ULL;
unsigned long long int var_13 = 12489298984927988218ULL;
int zero = 0;
unsigned long long int var_17 = 5392593779345441256ULL;
unsigned short var_18 = (unsigned short)39806;
unsigned char var_19 = (unsigned char)104;
long long int var_20 = 8072837008958695774LL;
int var_21 = 474566641;
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
