#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2033222757;
long long int var_1 = 6959682991458665452LL;
unsigned long long int var_2 = 11737887346204111020ULL;
int var_3 = -100226177;
unsigned short var_7 = (unsigned short)40067;
unsigned long long int var_12 = 11904601650790318020ULL;
unsigned short var_14 = (unsigned short)19794;
int zero = 0;
unsigned long long int var_19 = 14003110048441605892ULL;
unsigned int var_20 = 1986663740U;
unsigned short var_21 = (unsigned short)56879;
void init() {
}

void checksum() {
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
