/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62163
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [1] = ((51115 - (51115 % 65535)));

        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 13;i_2 += 1) /* same iter space */
            {
                arr_7 [i_1] [i_1] [1] [i_1] = var_7;
                var_15 = ((!(((((((arr_6 [0] [i_0] [i_0] [i_2 + 2]) ? (arr_4 [8] [i_1 - 1] [1]) : var_6))) ? ((var_11 ? (arr_6 [1] [10] [i_2 - 2] [i_2]) : (arr_3 [i_1] [i_1]))) : (arr_1 [i_0]))))));
            }
            for (int i_3 = 2; i_3 < 13;i_3 += 1) /* same iter space */
            {
                var_16 *= ((((((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_1 [i_3 - 2])))) ? 18446744073709551615 : (((arr_1 [i_3 + 2]) ? (arr_3 [i_0] [i_0]) : (arr_1 [i_3 - 1])))));
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_17 &= var_8;
                            var_18 = ((((1 ? 51133 : 2577664486864533855))) ? (min(4294967277, 51142)) : 1065353216);
                        }
                    }
                }
                var_19 = (((arr_5 [i_0] [i_0] [i_1]) ? ((min(-31253, 1241843898))) : ((0 ? 18136183993160433686 : (((15499 ? var_8 : 31)))))));
            }
            var_20 -= (((arr_10 [5] [2] [5]) ? (((arr_8 [i_1 - 1] [i_1 - 1]) ? (arr_8 [i_1 - 1] [i_1 - 1]) : (arr_8 [i_1 - 1] [i_1 - 1]))) : (arr_14 [i_1 - 1] [i_0] [12])));
        }
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {
                    var_21 = ((((((arr_5 [i_7] [i_6 + 1] [i_0]) ? (arr_5 [i_0] [i_0] [i_6]) : (arr_5 [i_0] [i_6 - 2] [i_0])))) ? (arr_5 [i_0] [i_6 + 4] [i_0]) : (arr_5 [i_0] [i_0] [i_0])));
                    var_22 ^= ((-(arr_10 [10] [i_6] [10])));
                    var_23 = (((~(arr_18 [i_6 + 1] [i_6] [i_6] [i_6 - 1]))));
                    arr_22 [5] = arr_12 [i_6 - 2] [i_0] [i_6 - 1] [i_6 + 2];
                }
            }
        }
        var_24 = ((~(arr_18 [i_0] [i_0] [i_0] [i_0])));
    }
    var_25 = -1536;
    var_26 = (14421 < 2147483647);
    var_27 = var_12;
    #pragma endscop
}
