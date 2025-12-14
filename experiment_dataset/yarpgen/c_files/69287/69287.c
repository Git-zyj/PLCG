/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-var_6 ? var_3 : var_16));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    var_18 = (((min(((17094 ? var_13 : (arr_2 [i_1]))), 17113)) + (arr_0 [i_0])));
                    var_19 = var_7;
                    var_20 = var_2;
                }
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    arr_15 [i_1] [i_1] [i_3] = ((((((arr_10 [i_0 - 1] [i_1] [i_3 - 3] [i_3 - 2]) ? var_8 : (arr_10 [i_0 - 1] [i_1] [i_3 - 2] [i_3 + 1])))) ? (((((17094 ? 17094 : 31240))) / 2762516875)) : var_8));
                    var_21 = (arr_0 [i_0 - 1]);
                    arr_16 [i_1] = (i_1 % 2 == 0) ? (((((((arr_9 [i_1] [i_3 - 1] [i_3 - 2] [i_1]) != (arr_9 [i_1] [i_3 - 2] [i_3 - 3] [i_1])))) << (((((arr_9 [i_1] [i_3 - 3] [i_3 - 2] [i_1]) | (arr_9 [i_1] [i_3 - 2] [i_3 - 2] [i_1]))) - 1910728837))))) : (((((((arr_9 [i_1] [i_3 - 1] [i_3 - 2] [i_1]) != (arr_9 [i_1] [i_3 - 2] [i_3 - 3] [i_1])))) << (((((((arr_9 [i_1] [i_3 - 3] [i_3 - 2] [i_1]) | (arr_9 [i_1] [i_3 - 2] [i_3 - 2] [i_1]))) - 1910728837)) - 2522427351)))));
                    var_22 = (min(var_22, -15164));
                    var_23 |= (~1);
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    arr_21 [i_1] [i_4] [i_1] [i_1] = ((var_4 ? (arr_2 [i_0 - 1]) : ((((arr_6 [i_0] [i_1] [i_4]) ? (arr_8 [i_0] [i_1] [i_1] [2]) : (arr_17 [i_0] [i_0 - 1] [i_0]))))));
                    arr_22 [i_1] [i_4] = (!-17078);
                    arr_23 [i_1] = ((!(arr_14 [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                    var_24 = (-32767 - 1);
                    var_25 &= arr_10 [1] [i_4] [i_4] [i_4];
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_26 = arr_25 [i_1] [i_1] [i_0];
                    arr_26 [i_0 - 1] [i_0] [i_1] = (((!var_3) - (arr_17 [i_0 - 1] [i_1] [i_5])));
                    var_27 = -17095;
                    arr_27 [i_1] [i_1] [i_1] = var_8;
                }
                arr_28 [i_1] [i_1] = ((!(!1)));
                var_28 = 24685;
            }
        }
    }
    #pragma endscop
}
