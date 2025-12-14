/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((max(3445969156, var_8)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = arr_0 [i_0] [i_0];
        arr_4 [i_0] [i_0] = var_8;
        var_11 = (min(var_11, (((~((-16566 ? (-9223372036854775807 - 1) : 1)))))));
        var_12 = ((+((var_3 ? (arr_2 [i_0]) : (arr_2 [i_0])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_13 = -2147483647;

        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            arr_11 [i_1] [i_2] &= ((~((4105913232069482741 ? (-9223372036854775807 - 1) : (arr_10 [i_1] [i_1] [i_1])))));

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                /* LoopNest 2 */
                for (int i_4 = 3; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_14 = (var_3 ? (arr_5 [i_2 + 2]) : (((arr_19 [i_1] [i_2 + 1] [i_3] [i_2 + 1] [i_5 - 1]) ? (arr_19 [i_1] [i_2 - 1] [i_3] [i_4 - 3] [i_5]) : 6915135285063335739)));
                            var_15 *= ((((arr_7 [i_1] [i_5 + 2]) ? -1969970531 : (arr_13 [i_1] [i_2 + 1] [i_3]))));
                        }
                    }
                }
                var_16 &= ((129 ? var_7 : var_8));

                for (int i_6 = 0; i_6 < 24;i_6 += 1)
                {
                    arr_23 [i_6] [i_2] [i_2] = var_0;
                    var_17 = (arr_9 [i_2 + 2] [i_2]);
                }
            }
        }
    }
    var_18 = (max(var_18, var_5));
    #pragma endscop
}
