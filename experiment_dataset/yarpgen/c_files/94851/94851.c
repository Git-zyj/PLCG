/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_12 *= ((((!(((~(arr_7 [i_2 + 3] [i_2 + 3]))))))));
                        var_13 = (max((((arr_0 [i_0] [i_0]) ? (!1) : (~1))), 2032));
                        var_14 = 1;
                    }
                    for (int i_4 = 0; i_4 < 0;i_4 += 1)
                    {
                        var_15 = (min(var_15, ((((((arr_9 [i_1 - 1] [i_1 - 1] [i_2 - 4] [i_4] [i_2 - 4] [i_4 + 1]) ? (arr_9 [i_1 + 2] [i_1 + 2] [i_2 - 4] [i_4] [i_1 + 2] [i_0]) : (arr_13 [i_1 - 1] [10]))) << (arr_4 [i_1 + 2] [i_2 + 2]))))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((-28772 ? (arr_7 [i_2 - 4] [i_2 - 4]) : (1 - var_8)));
                        var_16 ^= (((((13 ? 31 : 32767))) ? ((((((arr_1 [1] [i_4]) ? (arr_0 [i_2] [i_4]) : 34112))) ? (((arr_6 [i_0] [5] [i_2]) & (arr_3 [10] [i_1] [i_2]))) : ((min(var_8, var_4))))) : 118));
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        arr_17 [10] [i_1] [0] = (arr_5 [i_0]);
                        arr_18 [i_0] [i_1] [i_2 + 1] = ((!(((arr_4 [i_5] [i_0]) > (arr_4 [i_0] [1])))));
                        var_17 = var_3;
                        var_18 -= (min(var_1, ((var_11 ? ((18446744073709551615 ? var_1 : (arr_15 [4] [4]))) : (var_2 * var_2)))));
                    }
                    var_19 += max((arr_0 [i_2 - 2] [i_1 + 1]), (((arr_0 [i_2 + 4] [i_1 + 2]) % (arr_0 [i_2 - 1] [i_1 + 2]))));
                }
            }
        }
        var_20 ^= 1;

        /* vectorizable */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_21 [i_6] [i_6] = ((((~(arr_6 [i_0] [i_0] [4]))) == (arr_13 [i_6] [i_6])));
            var_21 = ((((var_1 ? 112 : var_4)) ^ (((arr_0 [1] [i_0]) & 118))));
            var_22 = 1;
            var_23 = var_2;
        }
    }
    var_24 = ((14 + ((-((max(var_2, var_2)))))));
    #pragma endscop
}
