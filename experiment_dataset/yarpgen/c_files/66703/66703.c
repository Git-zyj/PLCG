/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66703
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= var_15;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_18 |= (((~var_4) - ((((arr_0 [i_0 + 1] [i_0 + 1]) <= (arr_0 [i_0 + 1] [i_0 + 1]))))));

        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            var_19 = ((-1 >= ((min((arr_0 [i_0 + 1] [i_1]), 1606980378)))));

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                var_20 = var_6;
                var_21 -= 1606980405;
            }
            for (int i_3 = 3; i_3 < 14;i_3 += 1)
            {
                var_22 = ((((var_1 > (arr_7 [i_1] [i_1 - 3]))) ? (((arr_7 [i_1] [i_1 - 2]) ? (arr_7 [i_1] [i_1 - 4]) : (arr_7 [i_1] [i_1 + 4]))) : (~var_6)));
                var_23 = (((((var_7 ? (arr_8 [i_0] [i_3] [i_0] [i_1]) : (arr_6 [i_1]))) % (arr_3 [i_1] [i_1] [i_1 - 4]))));
                arr_9 [i_1] = (((arr_2 [i_3 - 3]) ? var_7 : ((max((arr_2 [i_0 - 1]), 11941)))));
                var_24 = (((arr_4 [i_0] [i_0 - 1] [i_0 - 1]) ? (arr_7 [i_1] [i_1]) : (arr_3 [i_0 - 1] [i_1] [i_3])));
            }
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_25 = ((~((-1606980378 ? (((-1606980411 + 2147483647) >> (var_1 - 8376271968082001532))) : 1606980416))));

                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    arr_15 [i_1] = (min((arr_5 [i_1] [i_1 - 4] [i_5] [i_1]), (arr_5 [i_1] [i_1 + 4] [12] [i_4])));

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        arr_19 [i_1] [i_1] [i_1] [i_6] = min(35141, ((1606980378 ? 121 : 16491555340509460432)));
                        var_26 |= (1606980404 <= 994966325885305371);
                        var_27 = var_9;
                        var_28 = ((((max((arr_13 [i_6] [i_1 + 4] [i_4] [i_0 + 1] [i_5] [9]), var_10))) ? ((-(arr_5 [i_1] [i_1 + 3] [i_1 + 3] [i_0 + 1]))) : ((((arr_8 [4] [i_1 + 2] [i_0] [i_0 - 1]) == (arr_10 [i_0] [i_1 - 4] [4]))))));
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        var_29 = (max(var_29, (arr_2 [i_0 + 1])));
                        arr_22 [i_4] [13] [i_1] [i_4] [i_4] [i_4] [0] = -var_3;
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_26 [i_0] [i_0 - 1] [i_5] [i_1] = (arr_23 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_4] [i_4] [7] [8]);
                        arr_27 [i_8] [i_1] [i_4] [i_1 - 1] [i_1] [i_0 - 1] = (((((((arr_2 [i_1]) ? var_3 : var_4)))) ? ((max((((arr_7 [i_1] [i_5]) & 252)), (arr_2 [i_8])))) : (((~var_9) ? (arr_1 [i_0 - 1] [i_1 + 2]) : (arr_20 [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_1 - 2] [i_1 + 3])))));
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            arr_31 [i_0] [i_0 - 1] = -1;
            var_30 = 1606980405;
            arr_32 [i_0] [i_0 + 1] [i_0 + 1] = -1606980407;
        }
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_31 = ((var_16 ? (min((242 * var_11), var_12)) : (arr_30 [i_0 - 1] [i_10])));
            var_32 = (min(-1606980427, (max(-1606980421, 17078892821390390824))));
        }
    }
    var_33 = var_5;
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 24;i_12 += 1)
        {
            {
                var_34 = 3685724658465610071;
                arr_42 [i_11] [i_12] = (max((((~(min(1606980380, 64))))), var_1));
            }
        }
    }
    var_35 = -756095180;
    #pragma endscop
}
