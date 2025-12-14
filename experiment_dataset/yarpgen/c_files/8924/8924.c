/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~((var_7 ? 18446744073709551615 : var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = ((0 ? (arr_4 [i_0 - 4]) : (((-1 && ((min(0, (arr_3 [i_1])))))))));
                var_20 = (min(var_20, (arr_2 [i_0 - 3])));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_21 = ((max((45207 >> var_4), 1)));
                    arr_11 [i_2] [19] [i_1] [i_2] = -1;
                    arr_12 [i_2] = (min((min(((min(0, var_17))), -6372562119606936179)), (((-1 << ((((((var_18 ? 2147483645 : -17)) + 36)) - 12)))))));
                }
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_19 [i_0 - 3] [i_1] [i_3 + 1] [i_3] [i_5] [i_5] [i_0] = ((((((arr_13 [i_3]) ? var_16 : (arr_13 [i_3])))) ? -var_16 : (!var_1)));
                                var_22 ^= ((2147483626 ? (((1 ? var_6 : (((var_1 < (arr_14 [i_0]))))))) : -3107345997518440992));
                            }
                        }
                    }
                    var_23 ^= (arr_4 [i_1]);
                }
                var_24 = ((!(((var_1 ? (arr_3 [i_0 - 1]) : var_0)))));
            }
        }
    }
    #pragma endscop
}
