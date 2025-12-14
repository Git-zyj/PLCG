/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((var_2 ? (((arr_1 [i_0] [13]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0]))) : (~131)));
        var_12 = ((((((arr_0 [1]) ? 0 : -22))) ? (~34955) : ((134217727 ? var_3 : (arr_1 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_13 = ((var_11 ? var_6 : (arr_6 [i_3 + 1])));
                            var_14 = var_7;
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_21 [i_1] [i_2] [i_3] [i_1] [i_4] [i_6] |= ((173 ? (arr_18 [i_2] [i_3 + 1] [i_3 + 1] [i_3] [i_3 + 1]) : (arr_18 [i_2] [i_3 + 2] [i_3 + 2] [8] [i_3 + 2])));
                            var_15 = (max(var_15, var_7));
                            arr_22 [4] [i_3] [i_3 - 1] [i_2] [i_3 - 1] [i_1] [i_3 - 1] &= ((665135773 > (arr_17 [i_1])));
                            var_16 = ((4160749554 ? -var_0 : (((arr_7 [i_6] [i_2] [i_2]) ? 134217726 : var_11))));
                        }
                        arr_23 [i_3] [i_3] [i_2] [i_3] = (((arr_17 [i_3 + 2]) ? var_2 : var_6));
                    }
                }
            }
        }
        var_17 &= (arr_6 [i_1]);
    }
    for (int i_7 = 3; i_7 < 9;i_7 += 1)
    {
        var_18 = (max(4160749565, (((-(arr_25 [i_7]))))));
        var_19 = (max(((~(min(var_10, var_7)))), var_6));
        arr_26 [i_7] = ((-((min(var_6, (min(137, 0)))))));
    }
    var_20 = 38063;
    #pragma endscop
}
