#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3541232402558448528LL;
unsigned short var_2 = (unsigned short)56768;
unsigned long long int var_3 = 2484825618223423263ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 15540286405414208834ULL;
unsigned char var_7 = (unsigned char)203;
unsigned long long int var_12 = 18125838599485372622ULL;
long long int var_14 = -6049289901309545993LL;
long long int var_17 = 542005568283138483LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
int var_20 = -229822406;
long long int var_21 = 6524237019457379175LL;
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
