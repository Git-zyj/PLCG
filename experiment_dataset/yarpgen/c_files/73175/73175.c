/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((2638720827 ? ((201 ? 4194304 : 692)) : var_12))) * ((var_5 ? (3203211945 * var_1) : var_10))));
    var_16 = ((153 ? (((((38 ? 217 : 609678887790876024))) ? ((max(var_8, var_14))) : var_0)) : (((var_8 ? (~var_1) : var_1)))));
    var_17 = (!var_12);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_18 ^= var_5;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_19 = ((var_5 ? (((min(0, -1250378167837791225)))) : ((((-32764 ? (-2147483647 - 1) : (arr_4 [i_4] [i_3] [i_2] [3]))) * (var_6 == 912589929)))));
                                var_20 = (((((147129496 ? -var_4 : (arr_0 [i_0])))) ? ((~(max(var_8, (arr_5 [i_0] [i_0]))))) : 45537));
                            }
                        }
                    }
                    var_21 = 5;
                }
                var_22 = (((((46794 ? 7930 : 0))) ? 17 : (((var_11 / (arr_1 [i_0]))))));
                var_23 = ((var_0 ? (max((arr_5 [i_1 + 1] [i_0]), var_10)) : ((((arr_5 [i_1 - 3] [i_0]) ? (arr_6 [i_1 + 1] [i_0] [i_1 - 2]) : var_6)))));
            }
        }
    }
    var_24 = var_10;
    #pragma endscop
}
