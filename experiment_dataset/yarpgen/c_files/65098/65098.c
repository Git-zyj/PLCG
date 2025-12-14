/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65098
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_13 [i_0] [i_2] [i_1] [i_0] [i_0] = (((arr_7 [6] [i_1]) ? ((-3 ? (arr_9 [11] [i_1] [i_2] [i_3]) : 62)) : var_0));
                        var_15 = (arr_5 [i_0] [i_2]);
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_16 ^= ((((arr_15 [i_4] [i_2] [i_1] [i_0]) ^ 90)) >> (((arr_15 [i_4] [5] [i_1] [i_0]) - 45)));
                        arr_16 [i_0] [i_1] [i_4] = ((((((~(arr_4 [i_0] [i_1] [i_2]))) / 40225))) ? 52382 : (1314091619 <= 16123));
                    }
                    var_17 += var_12;
                }
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_18 ^= (arr_6 [i_0] [i_1] [i_5]);
                    var_19 ^= ((+((((((arr_10 [i_1] [i_5]) ? var_10 : 5950259447351454335))) ? (~13153) : 91))));
                    var_20 = min((~2059227489), (((!(arr_10 [i_0] [i_5])))));
                    var_21 ^= (arr_15 [i_0] [4] [i_5] [i_0]);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 11;i_7 += 1)
                        {
                            {
                                var_22 = (((~0) == (arr_7 [1] [i_1])));
                                arr_23 [i_0] [5] [i_7] [i_6] [i_7 + 1] = (!-2);
                            }
                        }
                    }
                }
                var_23 = (((~(arr_2 [i_1] [i_0]))));
                arr_24 [i_0] [0] [i_0] &= (min(((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_1])))), (((arr_2 [i_0] [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_1])))));
            }
        }
    }
    var_24 &= var_1;
    var_25 = ((var_2 ? var_8 : var_12));
    var_26 |= (max((((var_7 ? 0 : var_7))), (!var_6)));
    #pragma endscop
}
