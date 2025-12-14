#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
int var_2 = 1568862092;
long long int var_3 = -3760360973023782003LL;
int var_5 = -1186887560;
_Bool var_6 = (_Bool)1;
long long int var_7 = 6511422752601253424LL;
long long int var_10 = 8823236239327702607LL;
unsigned int var_12 = 847297179U;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)26443;
int var_15 = 275798640;
unsigned long long int var_17 = 12260668433944248763ULL;
long long int var_18 = 2545078040275079442LL;
unsigned char var_19 = (unsigned char)18;
int zero = 0;
int var_20 = 1294431461;
signed char var_21 = (signed char)114;
signed char var_22 = (signed char)-6;
unsigned char var_23 = (unsigned char)57;
void init() {
}

void checksum() {
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
