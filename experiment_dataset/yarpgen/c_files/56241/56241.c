/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56241
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56241 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56241
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += (((((57775 ? (!var_16) : (var_10 ^ 57775)))) % 8203436307744050819));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, (((174 ? -1 : 50713)))));

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {

                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            var_19 |= ((-((50713 ? (arr_3 [i_4 - 1] [i_4 + 1]) : 7772))));
                            arr_13 [i_0] [3] [i_2 - 1] [i_1] [i_4 + 1] = var_6;
                            arr_14 [11] [11] [i_0] |= ((-(!var_0)));
                            var_20 = (min(var_20, (((((var_16 ? (arr_6 [i_4 - 2] [i_1] [i_2 - 1]) : ((14842 ? (arr_6 [i_4 - 1] [7] [i_0]) : 63479))))) ? (arr_3 [3] [i_3]) : (((arr_6 [i_4 - 1] [i_2 + 2] [i_2 - 1]) ? (arr_6 [i_0] [i_2 - 1] [i_4 + 1]) : 6946376173523032140))))));
                        }
                        var_21 ^= ((~(~22832)));
                        var_22 = (max(var_22, (14846 * -57776)));
                    }
                }
            }
        }
    }
    var_23 += (max(var_13, (var_11 + var_0)));
    #pragma endscop
}
