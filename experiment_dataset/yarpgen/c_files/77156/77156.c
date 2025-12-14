/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77156
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77156 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77156
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((0 ? -var_11 : var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = var_8;
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 &= (!-67);
                            var_16 = ((((min(18028, (arr_11 [i_2] [i_1 + 4] [i_2 - 1] [i_2] [i_2 - 1])))) <= (arr_1 [i_0])));
                        }
                    }
                }
                var_17 &= 37205;
                var_18 = (max(var_18, (((!(arr_11 [i_0] [i_1 + 2] [i_1] [i_0] [i_1]))))));
                var_19 = 15;
            }
        }
    }
    var_20 = ((~(((var_3 ^ var_6) | var_9))));
    var_21 = (!var_6);
    var_22 = (max(var_22, (((!((min((max(31804, var_3)), 0))))))));
    #pragma endscop
}
