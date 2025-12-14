/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60952
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_13 |= (max((((13 ? -1678934483 : 1))), (((((var_1 ? 3398978761037664588 : 21457))) ? (((((arr_1 [0]) || (arr_0 [0] [0]))))) : (arr_0 [6] [6])))));
        var_14 = (((((arr_0 [i_0] [i_0 + 1]) ^ 18969)) % 1));
    }
    var_15 = ((6545 ? 15047765312671887028 : 3398978761037664588));
    var_16 = (min(var_0, ((1678934493 ? ((21 ? 3398978761037664599 : var_0)) : (1069383844873544606 ^ 3398978761037664599)))));

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_17 += ((var_12 ? 15 : 12574));
        var_18 = (min(var_18, (1700951191 >= 3398978761037664599)));
    }
    #pragma endscop
}
