#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3427175850123899862LL;
long long int var_2 = -3236877530596877981LL;
long long int var_3 = -8611641322595708830LL;
long long int var_4 = 8459170347758364321LL;
long long int var_13 = -5174743408090490303LL;
long long int var_14 = -8101099675117006233LL;
long long int var_15 = -3694844792896419516LL;
long long int var_16 = 4709540688148094619LL;
int zero = 0;
long long int var_17 = 4787313500730959179LL;
long long int var_18 = 7342011784696586194LL;
long long int var_19 = -4572872503124857466LL;
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
