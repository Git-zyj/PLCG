/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((((-1523795108 ? 4294967295 : var_3))) ? 145 : 0))) ? -133 : (var_2 == var_3)));

    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = (var_4 != 4294967295);
            var_12 = (~536870904);
            var_13 += ((!(((1347353925 << (7371796720156545258 - 7371796720156545258))))));

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_14 = ((4294967295 ? 145 : 0));
                var_15 = 1;
                var_16 = (-1 >= 0);
                arr_10 [i_2] [i_1] = 8911549707283247553;
            }
            arr_11 [11] = (145 | var_7);
        }
        /* LoopNest 2 */
        for (int i_3 = 4; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    arr_19 [i_0 + 3] [i_3] [i_4] &= ((((4492 ? var_4 : 7621190771428130741)) ^ (((~(arr_4 [i_3 - 3] [i_0 - 3]))))));
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                arr_24 [10] [10] [i_5 + 1] [10] = (arr_22 [i_0] [i_3] [i_4] [i_5 + 1] [i_6]);
                                arr_25 [i_0] [i_0 - 3] [i_0 - 3] [17] [i_0] [i_0] = (((~var_4) >= (((((min(1, 0)))) ^ ((110 & (arr_14 [i_0])))))));
                                var_17 = ((!((((arr_8 [i_5 + 1] [i_5] [i_3 + 3]) ? (arr_18 [i_5 + 1] [i_5] [i_3 + 3]) : 3)))));
                            }
                        }
                    }
                    arr_26 [i_0] [i_3 + 2] [i_4] [i_4] = (max(((((~0) > ((var_7 + (arr_4 [i_4] [i_0 + 2])))))), (((145 / var_1) ? (~11959317921028524350) : 1))));
                    arr_27 [i_0] [i_3] [i_4] = (min(1, 3386273970110910623));
                    var_18 = (((((arr_13 [i_0 + 2]) / 145))) ? 116802944 : (arr_3 [i_0 + 2]));
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 25;i_7 += 1)
    {
        arr_31 [24] = (min(0, (((~1) ? ((var_3 ? 1 : 4294967295)) : 4294967295))));
        var_19 = var_5;
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 14;i_8 += 1)
    {
        var_20 = (max(var_20, var_3));
        var_21 -= 2698816030;
    }
    #pragma endscop
}
