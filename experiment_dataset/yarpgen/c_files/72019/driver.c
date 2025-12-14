#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1947875884228889821ULL;
short var_2 = (short)-10309;
unsigned long long int var_3 = 4170674713973952662ULL;
long long int var_4 = -5712588382181440556LL;
unsigned long long int var_5 = 9513525296868203778ULL;
unsigned char var_6 = (unsigned char)217;
int var_13 = -757006315;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_19 = -8207380297025294219LL;
unsigned long long int var_20 = 12430920399087744693ULL;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 3166499996U;
unsigned short var_23 = (unsigned short)20443;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
