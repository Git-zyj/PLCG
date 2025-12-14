/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 &= (((((var_13 & ((var_9 | (arr_6 [i_2 - 1])))))) ? ((~(~1))) : ((18446744073709551610 ? 14 : var_2))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_15 = (max((32256 == 12), (max((arr_6 [i_4 - 4]), var_8))));
                                var_16 = (((((109 ^ (arr_8 [i_3] [i_3 + 1])))) ? (((((var_7 ? var_8 : (arr_0 [i_0])))) ? var_10 : ((min(var_12, var_13))))) : 32767));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((((((((arr_16 [i_0] [i_1] [i_2] [i_5] [4] [i_0]) ? var_8 : var_7)) >= var_13)) ? (((((var_3 ^ var_3) <= (((arr_13 [1] [i_1] [5] [i_5] [i_6 + 2]) ? var_5 : 775589422)))))) : -16958648899641133569)))));
                                var_18 = (min(var_18, var_4));
                                arr_20 [i_0] [i_1] [i_2 + 2] [i_5] [13] = ((((((arr_6 [i_1]) - 335969004))) ? var_2 : (~var_0)));
                            }
                        }
                    }
                    var_19 = (min(var_19, ((((!var_4) ? ((var_9 ? (arr_11 [i_0] [i_1] [i_2 + 2]) : var_2)) : (((-(min(var_4, var_4))))))))));
                }
            }
        }
    }
    var_20 = (min(var_20, var_3));
    #pragma endscop
}
