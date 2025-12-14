#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)7;
int var_2 = 967869546;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 8811480407983588861ULL;
long long int var_6 = 6014767350132185213LL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 10975526243369006138ULL;
unsigned long long int var_10 = 4222266373055318312ULL;
unsigned long long int var_11 = 17774052633031118144ULL;
unsigned short var_12 = (unsigned short)50916;
unsigned char var_13 = (unsigned char)189;
short var_15 = (short)3041;
unsigned short var_16 = (unsigned short)57853;
int zero = 0;
int var_17 = -2003437261;
int var_18 = 260031275;
long long int var_19 = 6781591939188337015LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
