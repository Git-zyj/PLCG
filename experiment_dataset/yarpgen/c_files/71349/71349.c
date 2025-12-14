/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [18] [i_1] [i_3] &= 1;
                                var_18 *= 1047971052014216507;
                                arr_14 [i_0] [i_1] [i_1] = var_11;
                            }
                        }
                    }
                    var_19 = (max(var_19, (((-(-3453912826161820747 % var_8))))));
                    var_20 += (((((64 / (-2147483647 - 1)))) < (((~(arr_5 [i_0] [i_1] [i_2] [i_0]))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            {
                var_21 = (min(var_21, (((min((var_7 | var_11), ((var_14 ? var_9 : var_17)))) << ((((3341565499714763703 ? -1 : 2474337508)) + 56))))));
                var_22 ^= (((((arr_0 [i_5] [i_6]) ? (arr_9 [i_6] [8] [i_6] [8] [i_5]) : 137438951424))) ? ((((!var_10) ^ 216341746))) : -4983573343912588473);
            }
        }
    }
    var_23 = (min(var_12, var_17));
    var_24 = var_15;
    var_25 = var_13;
    #pragma endscop
}
