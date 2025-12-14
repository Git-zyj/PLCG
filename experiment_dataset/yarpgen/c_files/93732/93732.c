/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_2 >= ((((((14843681443710760054 << (((-32767 - 1) + 32784))))) ? (max(14536, 126508784)) : var_6)))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = ((((49 ? (var_0 + var_7) : (((-32767 - 1) ? var_4 : 3465115916074183962)))) * ((((16905533379588159436 || ((max(14981628157635367653, 14981628157635367653)))))))));
        var_12 = (0 / 1874);
    }
    var_13 = ((((((~2970284156) ? var_1 : 0))) ? ((((var_3 ? var_5 : 30669)) - ((max(var_7, var_8))))) : var_5));
    #pragma endscop
}
