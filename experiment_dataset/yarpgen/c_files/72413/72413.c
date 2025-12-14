/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_0;
    var_13 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 ^= ((min((((arr_0 [i_0] [i_0]) ? 22819 : var_10)), (arr_1 [i_0 - 1] [i_1]))));

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_2] = ((((~(arr_0 [i_0 - 1] [i_1])))) ? ((((((arr_0 [i_2] [i_1]) ? var_4 : (arr_3 [i_1])))) ? ((min(var_2, var_3))) : (var_3 & 107))) : (max(var_2, (((arr_1 [i_1] [i_2]) | (arr_5 [i_0] [i_1]))))));
                    arr_9 [i_0 - 1] [i_2] [i_2] [i_2] = (arr_3 [i_2]);
                }
                for (int i_3 = 3; i_3 < 18;i_3 += 1)
                {
                    var_15 = ((~((-103162331 ^ (((arr_1 [i_3] [i_3]) ? var_11 : 158))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            {
                                arr_18 [i_5] [i_5] [i_4] [i_0] [i_1] [i_5] [i_0] = (arr_6 [i_0] [18] [i_5]);
                                var_16 = (((arr_1 [i_0] [i_0 - 1]) ? (arr_12 [17] [i_0] [i_1] [i_3] [i_4] [i_5]) : (((~(arr_1 [3] [i_5]))))));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_17 += var_10;
                    arr_21 [i_0 - 1] [1] [i_6] = (min(((((var_5 == 15) ? ((var_6 ? (arr_19 [i_1] [i_6]) : var_1)) : (((arr_4 [i_0] [i_0 - 1] [6]) & 12315))))), (+-1596218197177743747)));
                    var_18 = ((((max(1789995291, (!var_0)))) == ((1186150776 ? (~-1) : 32228))));
                }
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    var_19 = (min(var_19, ((max((((arr_2 [i_1]) / ((0 ? 6 : 18446744073709551615)))), ((((min(var_11, (arr_17 [i_7] [i_1] [i_1] [0] [i_1] [i_0]))) * (arr_17 [i_7] [i_1] [i_1] [i_1] [i_1] [i_0])))))))));
                    arr_24 [12] [14] [i_0 - 1] [12] = (arr_7 [i_0] [i_1]);
                }
            }
        }
    }
    var_20 ^= (max((((!(~120)))), var_8));
    var_21 = ((((max(var_2, (-32766 || -9544)))) || ((min((-9223372036854775807 - 1), (0 && -2069753544))))));
    #pragma endscop
}
