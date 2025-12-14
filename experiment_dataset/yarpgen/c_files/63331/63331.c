/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_3 && (-8449 || 12656250023324490787)));

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_16 ^= var_8;

        for (int i_1 = 0; i_1 < 12;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_0] = (min(-1, (((arr_1 [i_0 - 1] [i_0 + 2]) - (((arr_5 [i_0]) ? 21820 : var_8))))));

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_9 [i_2] [i_0] = var_3;

                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_13 [i_3] = 8421;
                    var_17 += ((var_2 % (arr_8 [i_0] [i_1] [i_2] [i_3])));
                }
            }
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                var_18 = ((((min((1 > 0), (arr_1 [i_1] [i_4])))) ? ((var_6 ? (arr_5 [i_0 + 2]) : var_12)) : ((((arr_7 [i_0] [i_0] [i_0 + 3] [i_1]) ? (arr_7 [i_0] [i_0] [i_0 + 3] [i_0]) : var_1)))));
                arr_16 [i_4] [i_1] = (max(-8450, 8449));
                var_19 = var_5;
            }
            for (int i_5 = 2; i_5 < 8;i_5 += 1)
            {
                var_20 = ((!((max((var_10 < 8462), ((var_14 ? var_14 : var_10)))))));
                var_21 = var_8;
            }
            for (int i_6 = 4; i_6 < 11;i_6 += 1)
            {
                arr_22 [10] [i_1] [9] = var_7;
                var_22 = ((((((var_2 ? var_1 : var_9)) ? (var_4 != 5164647075181955919) : (((arr_1 [i_6] [i_0 - 1]) ? (arr_17 [i_0 + 3]) : (arr_10 [i_1] [i_1] [10] [i_1])))))));
            }
        }
        for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
        {
            arr_25 [5] [i_0] [5] = (var_4 ? 18 : ((((((arr_5 [i_7]) ? var_11 : var_5)) >= (-8465 ^ -5164647075181955913)))));
            arr_26 [i_7] = ((var_12 > (!10197374)));
            var_23 = (max((max(((((arr_21 [i_0] [i_0] [i_0] [i_7]) | var_8))), ((~(arr_11 [i_7] [i_7] [i_0] [i_0] [i_0]))))), ((((var_2 + 2147483647) << (((arr_23 [i_0 - 1] [i_0 + 2]) - 203)))))));
            arr_27 [i_0 + 1] [i_0 + 1] = (((!var_12) * (arr_14 [i_0] [i_0 + 2] [i_0])));
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            arr_34 [i_9] [i_9] [i_9] [i_8] [i_7] [i_7] [i_0] = ((((max(var_5, (arr_14 [i_0 - 1] [i_0] [i_0]))) ^ (((var_5 ? (arr_21 [i_10] [i_9] [i_7] [i_7]) : (arr_23 [i_10] [i_7])))))) == (9085120968205628408 > 1829378955));
                            arr_35 [i_0] [i_8] [i_7] [i_8 - 1] [i_9] [i_10] = var_4;
                            arr_36 [i_0 + 2] [i_8] [11] [i_0 + 2] = ((~(((max(-11762, -5164647075181955898)) / ((var_11 | (arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                            var_24 = (((-32754 < 926066444) > -1));
                            arr_37 [i_0] [i_8] [1] [3] [i_8] = (arr_12 [5]);
                        }
                    }
                }
            }
        }
        var_25 = (((min(var_13, ((min(var_1, var_3))))) << (var_14 - 4294947852)));
    }
    #pragma endscop
}
