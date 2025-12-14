/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_20 += 40274;
        var_21 = (max((arr_1 [i_0]), (arr_1 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_0 + 1] [i_0] = ((-(((arr_4 [i_1 + 2] [i_1 - 2]) & 40671))));
                    arr_8 [i_0] [i_0] = arr_4 [i_0] [0];
                    var_22 &= (arr_2 [i_0] [i_1] [i_1]);
                    arr_9 [i_0] [i_1 - 2] [i_0] = 1288552559;
                    var_23 += (((((24883 ? (arr_2 [i_2] [i_1] [i_0]) : var_10))) ? (min(24857, -316349202)) : (arr_5 [i_0] [i_1] [i_2] [i_2])));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_24 *= (arr_3 [i_3] [i_3]);
        var_25 += (arr_2 [i_3] [i_3] [i_3]);
        arr_13 [i_3] = ((var_13 && var_11) * ((24865 | (arr_5 [i_3] [i_3] [i_3] [i_3]))));
        var_26 &= (((arr_10 [i_3] [i_3]) ? 0 : (arr_10 [4] [i_3])));
    }
    var_27 = ((~((~(var_2 & 24883)))));
    #pragma endscop
}
