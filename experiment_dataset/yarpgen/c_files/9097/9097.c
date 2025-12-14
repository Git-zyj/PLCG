/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_13 = arr_0 [i_0] [i_2];
                    arr_9 [i_0] = (max((min(-117, (arr_4 [i_0] [i_0]))), ((((0 ^ (arr_1 [1])))))));
                    arr_10 [i_0] [i_0] [8] [i_0] = 38211;
                    var_14 = (min(((((35017 ? var_10 : var_12)) >> (((((arr_7 [i_0] [i_0]) ? (arr_7 [1] [i_1]) : var_4)) - 7475343740106584628)))), (((var_8 ? (((!(arr_1 [i_0])))) : 2798235228)))));
                }
                var_15 = (min(var_15, ((var_5 && (2798235238 ^ -4602538742967513758)))));
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_16 -= var_0;
                            arr_16 [i_0] [i_0] [i_0] [i_0] |= (arr_12 [i_0] [i_1] [i_3 + 1]);
                        }
                    }
                }
                arr_17 [i_0] = ((((((arr_14 [i_0] [2] [i_0] [2] [i_1]) | (arr_14 [i_1] [i_1] [i_1] [i_1] [i_0])))) & (max(0, var_3))));
            }
        }
    }
    var_17 = ((((var_8 ? 226 : 9223372036854775787))) ? ((20169 ? 8442 : 2798235221)) : (max(49512, ((var_5 ? 2218537590 : var_0)))));
    var_18 = ((1871293968725598163 ? 126 : 2076429686));
    #pragma endscop
}
