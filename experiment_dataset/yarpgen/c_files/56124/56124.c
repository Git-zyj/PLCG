/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_0] [i_0] [10] [i_0] [i_1] = (max(((((23437 ? 1 : var_11)) ^ 23437)), var_1));
                            var_13 = (max((15713423546175963463 <= 7298917674062051193), var_2));
                            var_14 = (max((((!(arr_9 [i_1] [i_0] [i_1] [i_1])))), -7298917674062051193));
                        }
                    }
                }
                var_15 = -var_9;
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        {
                            var_16 *= (((var_0 | (arr_5 [12] [i_4 + 2] [i_4 + 1]))));
                            arr_20 [i_0] [14] [i_0] [i_1] = (max(18100063410545532469, 733746715));
                            var_17 = ((-781002521 && (((+(((arr_16 [i_0] [i_0] [i_4] [i_1]) ? (arr_7 [i_1]) : var_2)))))));
                            var_18 = (max(7298917674062051213, var_5));
                            arr_21 [i_5] [i_1] [i_4] [i_1] [i_0] = -3561220562;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        {
                            var_19 -= ((((((var_1 ? var_10 : (arr_24 [i_1] [i_6] [i_7]))) / (((max(var_2, 23437))))))) ? ((1516751669611701791 ? 15713423546175963463 : 67)) : var_4);
                            var_20 = (~781002514);
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
