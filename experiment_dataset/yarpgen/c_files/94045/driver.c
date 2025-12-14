#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)53893;
_Bool var_4 = (_Bool)0;
unsigned short var_8 = (unsigned short)43311;
unsigned long long int var_9 = 16410132294255643129ULL;
signed char var_10 = (signed char)105;
unsigned short var_13 = (unsigned short)55092;
unsigned long long int var_14 = 15277861148520818546ULL;
unsigned short var_15 = (unsigned short)5209;
unsigned short var_16 = (unsigned short)34678;
int zero = 0;
int var_17 = 466129494;
int var_18 = 1955319371;
unsigned short var_19 = (unsigned short)11650;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)27624;
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
