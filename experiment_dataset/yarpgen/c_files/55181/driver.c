#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8061834551720322551LL;
signed char var_1 = (signed char)-38;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 16197140040272064541ULL;
long long int var_6 = 8406960985407333659LL;
unsigned char var_8 = (unsigned char)146;
long long int var_9 = -6129337247371168388LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_13 = (unsigned char)217;
signed char var_14 = (signed char)90;
long long int var_15 = -278762865432257899LL;
long long int var_16 = 4190971053324374474LL;
unsigned long long int var_17 = 3314916585878915959ULL;
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
