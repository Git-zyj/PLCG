/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62226
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, ((max(((var_5 ? ((var_2 ? var_9 : var_10)) : var_10)), (var_9 < var_11))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_13 *= (((arr_1 [i_0]) ? var_6 : (arr_1 [i_0])));
        var_14 *= (arr_0 [2] [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_15 = (arr_3 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_1] [3] [i_1] = (-239170098 && 2195964955);
                    var_16 = (((-(min(var_6, var_0)))) / var_4);
                }
            }
        }
        var_17 *= (((!-24905) ? ((~(((arr_7 [14] [i_1] [6]) << (3394039827121620742 - 3394039827121620732))))) : ((max((arr_2 [12]), (arr_10 [0] [i_1] [i_1]))))));
    }
    var_18 = ((((((((37075 ? 127 : var_9))) ? ((-239170098 ? var_9 : var_7)) : (var_5 > 0)))) ? var_8 : var_7));
    var_19 = ((((var_7 ? (((max(var_9, var_3)))) : ((16 ? 11449616438679036444 : 28461))))) ? ((((min(37075, var_0)) <= ((var_4 ? 28460 : var_9))))) : ((var_9 ? (~var_11) : 37075)));
    #pragma endscop
}
