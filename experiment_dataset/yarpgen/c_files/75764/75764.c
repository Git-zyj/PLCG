/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= ((var_9 ? (((~((201326592 ? 127 : var_1))))) : (max(var_14, (1 < var_16)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] &= (~32742);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_21 = (min(var_21, (arr_7 [i_0] [i_0])));
                            arr_14 [i_0] [i_1] [i_0] [i_2] [i_3] &= (((max((((-(arr_13 [i_0])))), (((arr_13 [i_3]) ? (arr_4 [i_2] [1] [1]) : (arr_11 [i_0] [i_1] [i_2] [0] [i_3])))))) || ((max((max((arr_9 [i_1] [i_1] [i_3]), 14437454087229413075)), var_4))));
                            arr_15 [i_0] [8] &= ((!((max((max(201326567, 101)), (((arr_0 [i_1]) ? (arr_10 [i_0] [i_1] [0] [i_2]) : 109)))))));
                            var_22 = (max(var_22, (((!(((((arr_12 [i_0] [5] [i_2] [i_3]) ? var_14 : var_0)))))))));
                            var_23 = (max(var_23, (arr_4 [i_0] [i_1] [i_2])));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 8;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_24 *= (((max((arr_1 [i_0] [i_0]), (arr_19 [i_0] [i_4] [i_1] [i_0]))) < ((~(arr_19 [i_0] [i_1] [i_4] [i_0])))));
                            var_25 -= ((~(~201326567)));
                            var_26 &= ((((min(((var_14 ? (arr_2 [2] [i_1]) : 1630)), var_4))) ? -116 : 1));
                            var_27 &= (max(((var_6 ? (arr_19 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_5]) : (arr_19 [i_4 + 2] [i_5] [i_5] [i_5]))), (arr_19 [i_4 + 2] [i_5] [i_5] [i_5])));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 20;i_7 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        {
                            var_28 -= 127;
                            var_29 &= (min((max(1, 3)), var_3));
                        }
                    }
                }
                var_30 = (min(var_30, (((var_5 ? -var_19 : 4009289986480138540)))));
            }
        }
    }
    #pragma endscop
}
