/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (min(158, (((((1294210554962716787 ? (arr_7 [1] [1] [1] [i_2]) : 98))) ? (arr_8 [i_0] [i_0] [i_1] [i_2]) : 0))));
                    var_19 = (((arr_4 [i_0] [i_1 + 2]) / (max((arr_2 [i_1 + 2] [i_1 - 1]), -924459501))));
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 18;i_3 += 1)
    {
        var_20 = (min(var_9, (((arr_9 [i_3 - 2] [i_3 - 3]) <= (arr_9 [i_3 - 1] [i_3 - 3])))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_21 = (arr_10 [i_4] [i_3]);
                    var_22 = (!213570663);
                    arr_18 [i_3] [i_3] [10] [i_5] = (min((min((~8618641458759948624), 98)), ((((min((arr_12 [i_3]), 3)) * (!-1))))));
                    var_23 = (min(var_23, (((((((((arr_11 [i_5] [i_5]) + var_10))) - -105457366623669248)) < (((-(arr_9 [i_3 + 1] [13])))))))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 14;i_6 += 1)
    {
        var_24 = (-126 >= 4294967295);
        var_25 *= (-2520930724681915154 - 2520930724681915148);
        /* LoopNest 3 */
        for (int i_7 = 4; i_7 < 12;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 14;i_9 += 1)
                {
                    {
                        arr_30 [i_6] [i_7 - 3] = (138 / 249);
                        var_26 = (min(((-(arr_22 [i_8 + 2] [i_6]))), (arr_22 [i_6] [i_9])));
                        var_27 = (min(var_27, ((((min((arr_7 [i_8 + 2] [i_8 - 1] [i_8 + 2] [i_8 + 2]), (arr_7 [i_8 + 2] [i_8 - 1] [i_8 + 2] [i_8 + 1]))) >= (arr_7 [i_8 + 1] [i_8 - 1] [i_8 + 2] [i_8 + 2]))))));
                    }
                }
            }
        }
    }
    var_28 = var_4;
    #pragma endscop
}
