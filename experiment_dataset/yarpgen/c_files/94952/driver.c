#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)169;
unsigned long long int var_2 = 14042739985501772488ULL;
unsigned char var_3 = (unsigned char)94;
signed char var_5 = (signed char)120;
unsigned char var_6 = (unsigned char)85;
unsigned long long int var_9 = 14815261326404276497ULL;
signed char var_10 = (signed char)-9;
unsigned long long int var_11 = 11552609173157888280ULL;
signed char var_17 = (signed char)39;
int zero = 0;
signed char var_18 = (signed char)-106;
unsigned char var_19 = (unsigned char)243;
unsigned long long int var_20 = 7844450559168633164ULL;
unsigned long long int var_21 = 4380306359961848036ULL;
unsigned char var_22 = (unsigned char)211;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
