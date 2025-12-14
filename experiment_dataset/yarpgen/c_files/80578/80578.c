/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 = max((((arr_2 [i_0 + 1] [i_1]) <= (arr_2 [i_0 + 2] [i_0]))), (((arr_2 [i_0 + 4] [i_1]) && var_13)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_20 = ((max((arr_3 [i_0] [i_0]), (arr_8 [i_3 - 1] [i_3] [i_1] [i_1] [16] [i_3]))));
                            var_21 = (max(((~((max((arr_8 [6] [1] [i_1] [i_1] [i_1] [i_0]), 1))))), ((((min((arr_2 [i_3 + 1] [i_2 - 1]), 26130))) ? ((max((arr_5 [i_1] [i_2] [i_2]), 9))) : -123))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            {
                var_22 = ((-4 & ((min((!39406), (min(7026, 3)))))));
                var_23 = ((((max(-9, 1))) ? (((var_8 ? var_9 : (arr_11 [i_4])))) : (((arr_11 [i_4]) ? var_8 : 2790190130))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_24 = var_10;
                            var_25 = var_7;
                            var_26 = (((min((((5 >> (((((-2147483647 - 1) - -2147483617)) + 37))))), 274877906942)) * (arr_16 [i_4] [i_4] [i_4])));
                            arr_19 [i_4] [i_5] [i_4] [i_5] = ((((((arr_17 [i_7 + 1] [i_7] [3] [i_7 + 1]) ? -130816 : (((max(39433, (arr_17 [i_4] [i_5] [i_6] [i_7])))))))) ? var_5 : ((max((min(26130, var_16)), (arr_17 [i_7] [i_7 + 1] [i_7] [i_7]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
