/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92762
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] = (!49260);
                var_15 = (min(var_15, (((255 > (-2147483647 - 1))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    arr_14 [i_3 + 1] = ((+((((arr_2 [i_2] [2]) <= (arr_2 [i_2] [6]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 8;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 7;i_6 += 1)
                        {
                            {
                                arr_21 [i_2] [i_3] [i_6] [i_5 + 2] [i_6] [i_6] [i_4] = ((var_3 ? (arr_19 [i_6] [i_4] [i_2]) : var_3));
                                var_16 = var_3;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 10;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        {
                            arr_27 [i_2] [i_2] [i_7] [i_8] [i_7] = (!var_12);
                            arr_28 [i_7] = 16276;
                            var_17 &= (max((((((var_2 ? var_6 : 48))) ? ((var_9 ? var_7 : var_3)) : (((~(arr_16 [1])))))), (((((((arr_16 [i_2]) ? (arr_2 [i_2] [i_8]) : (arr_13 [i_2] [i_3])))) - var_4)))));
                            arr_29 [i_7] = var_2;
                            arr_30 [i_8] [i_3] [i_7] [i_8] |= (-((var_0 ^ (~242))));
                        }
                    }
                }
                arr_31 [i_2] [5] = (((arr_3 [14]) > (((arr_0 [i_3 + 1] [i_3 - 3]) ? (arr_0 [i_3 - 2] [i_3 - 1]) : (arr_0 [i_3 - 3] [i_3 - 1])))));
                var_18 = var_4;
            }
        }
    }
    var_19 = var_4;
    var_20 = (((~var_1) == ((-var_3 ? ((var_13 ? var_11 : var_1)) : ((var_12 ? -30 : var_11))))));
    #pragma endscop
}
