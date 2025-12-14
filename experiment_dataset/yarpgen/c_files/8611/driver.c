#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29087;
unsigned long long int var_7 = 13088535193015190984ULL;
long long int var_8 = 3623987774424113051LL;
signed char var_9 = (signed char)-56;
long long int var_11 = 9097161509372912517LL;
unsigned char var_19 = (unsigned char)76;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 9187063829438234238LL;
int var_22 = 1537699452;
unsigned int var_23 = 4073375981U;
unsigned long long int var_24 = 9691285745670279760ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
