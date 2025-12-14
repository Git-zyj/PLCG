/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -41;

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_16 += 1;
        var_17 = (max(var_17, ((((((~(arr_0 [i_0])))) ? (arr_0 [i_0 + 2]) : var_9)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_18 = ((~(arr_6 [i_1] [i_1])));
        arr_7 [i_1] = (arr_3 [i_1] [i_1]);
        var_19 = (min(var_19, (((~(arr_3 [i_1] [i_1]))))));
        var_20 = (((((var_8 ? (arr_3 [i_1] [i_1]) : -114))) ? var_0 : ((((arr_4 [i_1] [i_1]) || var_1)))));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {

            for (int i_3 = 3; i_3 < 16;i_3 += 1)
            {
                var_21 = (arr_9 [i_1] [i_1] [i_3]);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_22 = (((var_6 ? (arr_17 [i_1] [i_1]) : (arr_10 [i_1] [8] [2]))));
                            var_23 = var_10;
                        }
                    }
                }
                var_24 = (arr_14 [i_3 - 1] [i_3] [4]);
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_25 = (65535 ? 114 : ((-31 ? var_10 : (arr_23 [i_1] [i_1] [i_1] [16] [i_2] [i_1]))));
                            var_26 = ((-(arr_20 [i_7] [i_7] [i_6] [i_3] [i_2] [i_1])));
                        }
                    }
                }
            }
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                var_27 = (((arr_8 [5] [i_2] [i_8]) < (arr_14 [i_1] [i_8] [i_8])));
                arr_28 [i_1] [i_2] [i_8] [i_1] = (~(arr_25 [i_1] [i_1] [i_1] [i_8] [i_2]));
                var_28 = (min(var_28, (((var_0 ? var_5 : (arr_24 [i_8] [i_2] [i_1]))))));
            }
            arr_29 [0] [8] = var_13;
            var_29 = ((~(47215500 ^ var_6)));
        }
    }
    #pragma endscop
}
