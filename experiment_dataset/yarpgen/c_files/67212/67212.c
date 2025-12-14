/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -1673143244;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_14 += (~var_12);

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0] = (~14178);
            var_15 = (2083855174 ^ (~var_9));
            var_16 = var_3;
        }
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_9 [3] = ((((((arr_4 [i_2] [i_2]) ? (((1673143243 << (((arr_2 [i_2] [i_2] [7]) - 526371529918634299))))) : -var_2))) & ((~((var_7 ? -1673143239 : var_8))))));
        var_17 = (max(var_17, ((min((~1673143238), (min(((41 ? 4454594897590049630 : var_5)), (~var_0))))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 24;i_3 += 1)
    {
        var_18 = ((-1673143239 ? -10833 : 65493));
        var_19 ^= -var_3;
    }
    #pragma endscop
}
