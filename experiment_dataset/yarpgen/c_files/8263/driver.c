#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8799273836560261899LL;
unsigned char var_3 = (unsigned char)196;
unsigned int var_4 = 3683332028U;
short var_5 = (short)-10698;
_Bool var_8 = (_Bool)0;
long long int var_10 = -5205344226653872363LL;
signed char var_12 = (signed char)-107;
unsigned short var_15 = (unsigned short)49210;
unsigned long long int var_17 = 3759996060803660794ULL;
long long int var_18 = 8866736937042913970LL;
int zero = 0;
unsigned long long int var_19 = 4530806724063955541ULL;
long long int var_20 = -4248780849874235656LL;
unsigned char var_21 = (unsigned char)98;
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
