/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_14 = ((((((88 && var_2) ? ((~(arr_4 [i_0] [i_1] [i_2 + 2] [i_3]))) : (((arr_2 [i_0] [i_0] [i_3]) ? var_6 : (arr_6 [i_3] [i_1] [i_2])))))) ? ((max((arr_3 [i_2 + 2]), (((var_10 + (arr_7 [i_0] [i_0] [i_1] [i_2 + 2] [i_3] [i_3]))))))) : ((-(arr_9 [i_0] [i_1])))));
                            var_15 += (arr_6 [i_0] [i_1] [i_3]);
                            arr_10 [i_0] [i_0] [i_3] [i_2] = (max((((max((arr_9 [i_0] [i_0]), (arr_9 [i_0] [i_0]))))), ((((max((arr_2 [i_0] [i_2] [i_2]), (arr_1 [i_0])))) ? (min(var_9, var_1)) : (((max((arr_7 [i_0] [i_0] [i_1] [i_2] [i_2 + 4] [i_3]), (arr_2 [i_0] [i_1] [i_1])))))))));
                        }
                    }
                }
                arr_11 [i_0] [i_1] [i_1] |= (((((max(var_3, var_8))) ? (((arr_7 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]) + -6621437551200910249)) : var_11)));
                arr_12 [i_0] [i_1] &= var_1;
            }
        }
    }
    var_16 -= (-var_9 + -var_10);
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                {
                    var_17 -= 3742139756;
                    var_18 += ((-((-(arr_17 [i_4] [i_5])))));
                    var_19 -= ((((max((((!(arr_15 [i_4])))), ((-(arr_13 [i_6])))))) <= (min((arr_16 [i_5]), -73))));
                }
            }
        }
    }
    #pragma endscop
}
