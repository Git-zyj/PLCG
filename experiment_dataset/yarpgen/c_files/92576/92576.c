/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] = (~((((arr_3 [i_3] [i_1] [i_2]) == (31514 == var_0)))));
                            var_20 = var_13;
                            var_21 *= (((((arr_7 [i_1 + 2] [i_3] [i_3 - 1] [i_3 - 1]) ? 54869 : (var_13 ^ 1026665240))) | ((var_19 ? (min(var_13, 116)) : (~var_1)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_19 [i_5] [i_1] [i_1] [i_1] [i_0] |= ((((arr_11 [i_1 + 3] [i_1 + 3] [i_1] [i_1 - 1]) || (arr_11 [i_1 - 1] [i_1 + 3] [i_1 + 3] [i_1 + 1]))));
                            var_22 = ((((~((((arr_11 [i_0] [i_1] [i_4] [i_4]) == var_4))))) <= ((((arr_5 [i_4 + 1] [i_4] [i_0]) > (arr_3 [i_5] [i_4 - 1] [i_1]))))));
                            var_23 = (max(var_23, (arr_4 [i_0])));
                        }
                    }
                }
                var_24 &= (((((!(arr_10 [i_0] [i_1 - 2] [i_1] [i_1])))) * (((117 || (((var_13 ? var_11 : (arr_0 [i_0])))))))));
            }
        }
    }
    var_25 = (((var_17 + 2147483647) >> (var_14 || var_8)));
    var_26 = var_3;
    #pragma endscop
}
