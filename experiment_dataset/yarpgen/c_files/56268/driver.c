#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 842532767U;
unsigned long long int var_2 = 7022897579023474985ULL;
int var_3 = 372025575;
unsigned int var_4 = 4170480776U;
long long int var_5 = 7554618838391247080LL;
short var_6 = (short)-18998;
unsigned int var_7 = 2844399986U;
int var_8 = -1639276040;
unsigned long long int var_11 = 17533315559996403724ULL;
_Bool var_13 = (_Bool)1;
signed char var_15 = (signed char)110;
int zero = 0;
long long int var_18 = 2025114371499000981LL;
unsigned short var_19 = (unsigned short)15246;
unsigned long long int var_20 = 17608668093489255897ULL;
unsigned int var_21 = 1013975249U;
void init() {
}

void checksum() {
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
