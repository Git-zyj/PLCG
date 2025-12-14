#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9202435725308006944LL;
long long int var_2 = -8021906550544309596LL;
short var_4 = (short)25895;
long long int var_5 = -4087248251114259835LL;
short var_7 = (short)-18439;
unsigned long long int var_8 = 9810987695076103226ULL;
long long int var_9 = 1242148949883776657LL;
long long int var_10 = -4233018320271633061LL;
short var_12 = (short)20663;
int zero = 0;
short var_13 = (short)-5701;
short var_14 = (short)16591;
short var_15 = (short)1067;
unsigned long long int var_16 = 12202493668139089097ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
