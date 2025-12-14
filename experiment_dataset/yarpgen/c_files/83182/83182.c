/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [18] [i_0] = ((var_6 ? (arr_0 [i_0]) : var_12));
        var_20 = var_2;
        var_21 = 1423336407;
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_12 [i_1 - 1] [i_1 - 1] [i_3] [i_3] = var_8;
                    var_22 = ((((max(126, ((var_2 ? (arr_9 [i_3] [i_3] [i_3]) : var_7))))) ? (arr_4 [i_1]) : (min(((max(var_3, var_13))), (max(16, (arr_4 [i_2])))))));
                    var_23 = 29;
                }
            }
        }
        var_24 = var_10;
    }
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {
        arr_16 [i_4] = (((min(9, -32037))));
        var_25 = (min(var_25, (((~(max((((-(arr_10 [i_4] [i_4] [i_4])))), ((var_19 & (arr_6 [i_4]))))))))));
    }
    var_26 = (32036 - var_12);
    var_27 = (max(var_27, var_4));
    #pragma endscop
}
