/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, var_6));
    var_15 = (min(-108, -6588357932690942496));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_16 = ((((min((arr_1 [i_0] [i_0]), (63640 && 56)))) > (((((arr_1 [i_0] [i_0]) ? var_11 : (arr_2 [i_0] [i_0]))) / ((min((arr_0 [i_0]), 10392)))))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 22;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [i_1] [i_1] [i_3] [i_1] = (-(((arr_8 [i_0] [i_1 - 3] [i_0] [i_2 + 1]) ? var_0 : var_12)));
                        var_17 += (((((((arr_9 [15] [15] [i_2] [i_2]) || -41)) ? (-1 - 0) : ((min(var_0, var_7))))) > ((var_3 ? (arr_9 [i_1 - 3] [i_1] [i_2 + 1] [i_3]) : 20))));
                        var_18 = (min((arr_5 [i_1 + 1] [i_2 + 1]), ((var_5 ? 469088829 : var_13))));
                        var_19 = ((23 ? -58 : (((~1) ? var_8 : (~866396113)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 3; i_4 < 16;i_4 += 1)
    {
        var_20 = ((var_7 & (arr_4 [i_4] [i_4 - 2])));
        var_21 &= (((arr_14 [1]) ? var_0 : 30337));
    }
    var_22 = (max(var_22, (((-(var_11 - -var_13))))));
    #pragma endscop
}
