#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
signed char var_1 = (signed char)-19;
unsigned short var_2 = (unsigned short)9772;
unsigned short var_5 = (unsigned short)32253;
signed char var_8 = (signed char)126;
unsigned long long int var_9 = 3523802730724925704ULL;
short var_10 = (short)29777;
unsigned short var_13 = (unsigned short)15813;
unsigned char var_16 = (unsigned char)60;
unsigned long long int var_17 = 14070189980401360709ULL;
int var_18 = 816789754;
int zero = 0;
unsigned long long int var_19 = 17995327253983678041ULL;
signed char var_20 = (signed char)-103;
unsigned long long int var_21 = 7733399354288300379ULL;
short var_22 = (short)-25987;
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
