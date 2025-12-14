#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7731968485779221373LL;
long long int var_2 = 8529894988115175309LL;
unsigned int var_4 = 3458578857U;
long long int var_6 = -4140184514864951584LL;
unsigned int var_7 = 2582460610U;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)7267;
unsigned long long int var_11 = 1282313385979654068ULL;
unsigned long long int var_12 = 9121209654782658824ULL;
int var_13 = 815221466;
int zero = 0;
unsigned char var_16 = (unsigned char)95;
unsigned char var_17 = (unsigned char)57;
long long int var_18 = 7516944493565125267LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
