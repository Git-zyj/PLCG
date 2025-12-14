/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, 1045161967));
    var_17 = ((max(var_3, ((var_3 ? var_10 : 2)))));
    var_18 = (max(254, -1045161968));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_19 = var_3;
                            var_20 = (max((((var_13 ? 228 : (~var_0)))), (((arr_6 [i_2] [i_2]) ? 1762121562 : (min(var_8, var_2))))));
                            var_21 = ((((((var_7 % var_13) ? (((var_4 ? var_10 : (arr_0 [i_3])))) : (arr_2 [i_1 + 1])))) ? ((((min((arr_0 [i_2 - 1]), var_12))) ? -1045161968 : ((~(arr_7 [i_2]))))) : ((13 ? (arr_0 [i_1 + 2]) : (arr_0 [i_1 - 1])))));
                        }
                    }
                }

                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        var_22 ^= (max((((((min((arr_8 [i_0] [i_1] [i_1] [i_4 + 3] [i_5]), (arr_1 [i_1] [i_1 - 1])))) ? (((551788093 && (arr_0 [i_1])))) : (~5)))), (min((((var_10 << (var_2 - 1189)))), ((var_1 ? 4294967295 : 29958))))));
                        var_23 = ((var_10 ? (arr_4 [i_4] [i_1 - 1] [i_4 + 2]) : (arr_4 [i_0] [i_1] [i_4])));
                        var_24 = var_8;
                        var_25 = (27 + -1045161968);
                    }
                    var_26 = (min(var_26, var_2));
                    var_27 = 34419;
                    arr_17 [i_0] = 551788093;
                }
            }
        }
    }
    var_28 = ((((30 ? 19 : -111)) >> (((((var_15 ? var_1 : var_10))) - 218))));
    #pragma endscop
}
