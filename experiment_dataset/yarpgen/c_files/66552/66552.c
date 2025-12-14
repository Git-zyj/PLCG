/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_3 | (min(var_11, 15373566324112452389)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (((((min(6912, (arr_3 [i_0] [i_0] [i_1])))))) ? ((((!(-9223372036854775807 - 1))))) : ((var_7 ? (((min((arr_2 [i_1] [i_0]), (arr_2 [i_1] [i_0]))))) : (-9223372036854775807 - 1))));
                var_17 -= (((~-16940) ? (arr_1 [i_1]) : var_1));
            }
        }
    }
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 17;i_5 += 1)
                    {
                        {
                            var_19 = (arr_5 [i_5 + 1]);
                            arr_14 [i_2] [1] = (min(((~(arr_3 [i_3] [i_3] [i_4]))), ((6786642742560775038 ? (arr_3 [i_5 + 1] [8] [i_3]) : -6912))));
                            arr_15 [i_2] [i_2] = (((var_0 ? 4294967278 : (arr_4 [i_5 - 1]))));
                            var_20 = (((arr_10 [2] [2] [i_2]) ? (((arr_10 [i_2 + 1] [i_3] [i_2]) ? (arr_10 [i_5] [i_5] [i_2]) : (arr_10 [i_2 + 3] [8] [i_2]))) : (arr_6 [i_2 + 1])));
                            var_21 = var_3;
                        }
                    }
                }
                var_22 -= ((((max(-6909, (arr_9 [i_2] [i_3])))) << (((!((min(var_4, var_0))))))));
            }
        }
    }
    var_23 = var_3;
    #pragma endscop
}
