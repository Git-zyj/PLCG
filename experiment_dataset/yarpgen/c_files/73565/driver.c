#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-118;
unsigned short var_2 = (unsigned short)10908;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)60885;
long long int var_12 = 1503246725875408611LL;
unsigned char var_13 = (unsigned char)107;
signed char var_14 = (signed char)89;
int var_15 = -666092138;
int zero = 0;
unsigned short var_17 = (unsigned short)51881;
unsigned short var_18 = (unsigned short)6110;
long long int var_19 = -853462605544790682LL;
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
