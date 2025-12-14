/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_16 = (((!(arr_10 [i_2 + 1] [1] [i_2 + 1] [i_2 + 1] [i_2] [9]))));
                            arr_11 [6] [i_1] [6] [i_3] = (((var_13 ^ (((!(arr_1 [i_0])))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] |= (max(((-(arr_3 [i_0] [i_1] [i_0]))), (arr_7 [i_2])));
                        }
                    }
                }
                var_17 = (max(var_17, ((((arr_5 [i_1 - 3] [i_1 - 4]) / 1125899369971712)))));
                var_18 = (6512928997569624987 / var_8);
                /* LoopNest 3 */
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_19 *= (arr_1 [i_0]);
                                arr_23 [i_0] [i_4] [i_0] [i_0] [i_0] = (((((min(var_14, (arr_14 [20] [i_1] [1] [i_6])))) ? -373307530676055723 : var_11)));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
