/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((var_7 ? ((var_7 ? ((var_0 ? var_5 : 51806)) : (-2 * 228))) : var_7));
    var_19 = var_1;
    var_20 ^= min(var_2, ((((((2626262604770362117 ? var_7 : var_16))) != ((184 ? var_17 : var_0))))));

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_1] = var_1;
                    var_21 = (min(var_21, ((~((((min((arr_5 [i_0] [5] [i_2] [i_1]), (arr_1 [i_0])))) ? var_15 : (arr_1 [10])))))));
                    arr_8 [i_2 - 1] [i_1] [i_0] = ((max(-8165, (arr_5 [i_0] [i_0] [i_2 - 2] [i_2]))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                {
                    arr_13 [i_0] [i_3] [i_4] = var_8;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_3] [i_5] [i_0] [i_3] = (arr_17 [8] [i_3] [i_3] [i_3] [i_3] [i_3]);
                                var_22 |= (((((arr_11 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 1]) && (arr_17 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1]))) ? (arr_11 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 + 1]) : (((arr_6 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1]) ? (arr_11 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1]) : (arr_11 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 1])))));
                                arr_20 [i_6] [i_3] [i_4] [i_4] [i_0] [i_3] [i_0] = (max((28941 && 44), ((!(arr_6 [i_0] [i_5 + 1] [i_5 + 1] [i_6])))));
                                var_23 ^= (max(-var_16, (((arr_3 [6]) ? (arr_14 [2]) : (arr_14 [4])))));
                                var_24 = 1023;
                            }
                        }
                    }
                }
            }
        }
        var_25 += var_1;
        arr_21 [i_0] &= (max((min((arr_10 [1]), ((-(arr_1 [i_0]))))), ((((-10 ? var_0 : 5))))));
    }
    #pragma endscop
}
