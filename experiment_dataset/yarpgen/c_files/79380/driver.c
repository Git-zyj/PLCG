#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 4227087248053646717ULL;
long long int var_1 = 3765983199879039401LL;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 854476113U;
unsigned long long int var_7 = 6288933922025587103ULL;
long long int var_8 = 1698574728578173387LL;
int var_9 = 1038301788;
long long int var_10 = -695818716651447139LL;
int var_11 = -155163983;
int zero = 0;
signed char var_13 = (signed char)81;
signed char var_14 = (signed char)-112;
unsigned int var_15 = 2293795978U;
unsigned long long int var_16 = 2457400489991289890ULL;
unsigned long long int var_17 = 1384872260622074758ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
