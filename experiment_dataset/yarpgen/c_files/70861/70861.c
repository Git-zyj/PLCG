/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = min(((((-61 ? var_2 : var_0)))), (((0 == var_15) * -var_12)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 = (min(var_19, (arr_1 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    {
                        var_20 = (max(var_20, (arr_8 [14] [i_2] [i_3])));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 16;i_4 += 1)
                        {
                            arr_12 [i_0] = ((var_14 ? var_8 : (arr_2 [i_3] [i_0])));
                            arr_13 [i_0] [i_3] [3] [i_2] [5] [i_0] = 879992397012137305;
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 14;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [i_2] [i_3] [i_5 - 2] = ((((!(arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                            var_21 += ((((2513724572 >> (299 - 284))) ^ (arr_2 [12] [i_5])));
                        }
                        for (int i_6 = 2; i_6 < 14;i_6 += 1) /* same iter space */
                        {
                            arr_21 [i_0] [i_1] [i_1] [6] [5] [i_0] = (((((!(arr_7 [i_6] [i_1]))) ? 9304444674751170085 : (~var_10))));
                            var_22 &= -1252379366;
                        }
                        var_23 ^= (!var_16);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 4; i_8 < 13;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 16;i_9 += 1)
                {
                    {
                        var_24 += (min((((arr_8 [6] [i_7] [i_7]) ? (max(1562103208, var_0)) : (arr_19 [i_8 - 1] [2] [i_8] [i_7] [i_7] [i_7]))), -var_9));
                        arr_30 [i_0] = ((((arr_5 [i_0] [i_7] [2] [1]) < (2124397524 + var_2))) ? (max((((arr_29 [i_0] [i_0] [i_0] [15] [15] [i_0]) ? (arr_14 [i_0] [i_0] [5] [i_8] [13]) : var_3)), (!var_12))) : (((arr_15 [i_0]) ^ var_12)));
                        var_25 += (-(~var_12));
                        arr_31 [i_0] [i_7] [i_8] [10] = -995384029;
                    }
                }
            }
        }

        for (int i_10 = 0; i_10 < 16;i_10 += 1) /* same iter space */
        {
            arr_34 [i_0] = arr_19 [i_0] [8] [i_0] [i_10] [13] [7];
            var_26 = (max(var_26, (((var_8 ? ((min(-723572617, var_7))) : (arr_4 [i_0] [14]))))));
        }
        for (int i_11 = 0; i_11 < 16;i_11 += 1) /* same iter space */
        {
            arr_38 [i_0] [i_11] = var_11;

            for (int i_12 = 0; i_12 < 16;i_12 += 1)
            {
                var_27 = (min(var_27, (((arr_36 [i_0] [i_12]) ? (arr_32 [i_12] [i_11] [i_12]) : (((4021101841 ? -61 : -2147483636)))))));
                var_28 ^= (max((!var_7), (arr_4 [i_0] [i_12])));
                arr_42 [i_0] [i_11] [i_11] [i_11] = -29;
            }
        }
    }
    var_29 = (min(var_29, var_14));
    var_30 = var_5;
    #pragma endscop
}
