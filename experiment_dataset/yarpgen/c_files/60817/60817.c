/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (!var_12);
    var_17 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_5 [i_1] = -1;
                arr_6 [i_0 + 3] [i_1] = var_3;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_18 = 1;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_23 [i_4] = (min(var_11, ((~(arr_18 [i_3] [i_3])))));
                                arr_24 [1] [i_3] [i_3] [i_3] [i_3] [i_3] = -7276035848846016026;
                            }
                        }
                    }
                    var_19 += ((((~(arr_21 [i_2] [i_3])))) ? (max((arr_21 [i_2 + 1] [i_3]), (arr_12 [i_4] [i_3] [i_2 + 2]))) : (!2147450880));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 3; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 15;i_9 += 1)
            {
                {
                    var_20 = (((((2147467264 / -13961) + 2147483647)) >> ((((arr_30 [i_7] [i_8 - 2]) == -32)))));
                    var_21 = (max(var_21, (((((((var_3 ? var_14 : 255)) ? (((-18567 ? var_8 : (arr_28 [i_9])))) : ((var_14 ? var_6 : (arr_25 [i_7]))))))))));
                    arr_33 [i_7] [i_7] [i_9] [i_9] = 8782;
                }
            }
        }
    }
    #pragma endscop
}
