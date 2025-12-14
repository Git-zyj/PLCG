/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~1) ^ var_1));
    var_20 = (!var_12);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        var_21 = (arr_1 [i_0 + 1]);
        var_22 *= ((var_9 ? (arr_0 [0]) : var_11));
        var_23 -= ((!(arr_0 [0])));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_24 = var_1;
        var_25 *= var_12;
        var_26 = (max(-var_13, (((arr_4 [i_1]) ? ((((-127 - 1) <= 178))) : ((var_2 ? var_18 : 1))))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {

            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_27 -= var_6;
                var_28 = ((0 ^ (arr_6 [i_1])));
            }
            var_29 *= ((-4 ? ((-4 ? ((min(11, var_13))) : ((0 ? var_10 : (arr_8 [i_1] [i_2] [i_1]))))) : (arr_7 [i_2] [i_2] [i_2] [0])));
        }
        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    {
                        arr_15 [i_1] [i_4] [i_4] [i_4] = -1;
                        var_30 = var_2;
                    }
                }
            }
            arr_16 [i_4] = -11;
            var_31 |= (max((!126), (32 == 9300)));
        }
        for (int i_7 = 4; i_7 < 22;i_7 += 1)
        {
            arr_20 [i_1] [i_7 - 4] [i_7] = 4600326899771052908;
            /* LoopNest 3 */
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 23;i_10 += 1)
                    {
                        {
                            var_32 = 13846417173938498711;
                            arr_27 [i_8] = 4;
                            var_33 *= -39;
                        }
                    }
                }
            }
            arr_28 [i_1] [9] = (max((!var_0), 4294967295));
            arr_29 [i_1] [i_7 - 1] [i_7] = (max(4294967295, 4883));
            arr_30 [1] [i_7 - 4] = min((((0 ? 4294967274 : var_5))), 0);
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            arr_34 [13] [8] = (((((((var_14 ? 0 : (arr_6 [i_1]))) <= (arr_26 [i_1] [i_1] [i_1] [i_11] [i_11] [i_11] [i_11])))) & ((max((((-127 - 1) && var_12)), (max(1, var_11)))))));
            var_34 = (max(var_34, 1));
        }
    }
    for (int i_12 = 0; i_12 < 19;i_12 += 1)
    {
        var_35 |= (((max((arr_8 [i_12] [i_12] [14]), (arr_8 [i_12] [i_12] [i_12]))) ? ((~(arr_8 [i_12] [i_12] [i_12]))) : ((1023 ? -106 : 65511))));
        var_36 = (((var_6 ? ((1 ? -11 : 65535)) : ((0 ? 1 : 223)))));
    }
    for (int i_13 = 0; i_13 < 22;i_13 += 1)
    {
        arr_41 [6] = ((((((((var_17 ? 4294967295 : var_15))) ? var_1 : var_9))) ? -1 : (max((max((arr_23 [1] [1]), (arr_25 [i_13] [i_13] [i_13] [20]))), ((max(var_17, 4137419558)))))));
        var_37 += (arr_21 [0] [i_13] [22]);
    }
    #pragma endscop
}
