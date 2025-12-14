#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)63;
unsigned long long int var_1 = 12371586210173004128ULL;
signed char var_2 = (signed char)105;
unsigned long long int var_3 = 846005188481672520ULL;
unsigned short var_4 = (unsigned short)51554;
long long int var_5 = -979071623909303300LL;
long long int var_6 = -2087418286581748666LL;
short var_9 = (short)19034;
unsigned char var_11 = (unsigned char)209;
unsigned long long int var_13 = 16081651703324113282ULL;
int zero = 0;
signed char var_14 = (signed char)60;
short var_15 = (short)25223;
unsigned long long int var_16 = 9740022266544875297ULL;
short var_17 = (short)499;
unsigned long long int var_18 = 14600381115928351934ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
