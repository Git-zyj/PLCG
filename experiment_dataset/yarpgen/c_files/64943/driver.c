#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -6107059226465463053LL;
short var_4 = (short)14095;
long long int var_5 = 9051086700169838580LL;
unsigned short var_6 = (unsigned short)32199;
unsigned int var_7 = 3697099206U;
unsigned long long int var_9 = 7377991587063816633ULL;
long long int var_11 = 9164516077208810266LL;
unsigned int var_14 = 3073961588U;
int var_15 = -141959241;
long long int var_17 = -1162439453621969442LL;
int var_18 = -204295297;
int zero = 0;
unsigned int var_19 = 3677024070U;
long long int var_20 = 8720722513021477687LL;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-127;
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
