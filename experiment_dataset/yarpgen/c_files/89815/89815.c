/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_10 = ((-(-127 - 1)));
            var_11 |= ((var_3 ? var_2 : ((127 ? -107 : var_9))));
            arr_6 [3] = (((-93 < var_5) ? (arr_0 [i_0 - 1]) : -42));
        }
        arr_7 [i_0] = var_8;
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            {

                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_12 = min(((-127 ? 102 : (arr_3 [i_2 - 1] [i_3 + 1]))), (!107));
                    var_13 = ((106 ? var_1 : ((min(((12088 ? var_8 : var_9)), var_1)))));
                    var_14 -= 112;
                    arr_16 [i_2] [i_2 - 2] &= ((-var_3 ? (min(var_7, ((var_7 ? -107 : (arr_0 [i_3]))))) : ((-107 ? (var_1 == 65519) : var_3))));
                    var_15 = 106;
                }

                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    var_16 = ((var_0 ? var_1 : 0));
                    var_17 &= ((((((!((min((arr_8 [i_3]), var_4))))))) < ((var_4 ? ((var_2 ? var_0 : var_5)) : (((min(-106, -30))))))));
                    var_18 = (max(var_18, (arr_11 [6])));
                }
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {

                    /* vectorizable */
                    for (int i_7 = 1; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        arr_28 [i_6] [i_6] [i_3] [i_6] = var_4;
                        var_19 -= var_0;

                        for (int i_8 = 2; i_8 < 12;i_8 += 1)
                        {
                            var_20 = (min(var_20, (((~((-1 ? var_6 : (arr_11 [i_7]))))))));
                            var_21 = ((var_6 ? 65535 : 16383));
                            var_22 &= (64 || -30);
                        }
                        for (int i_9 = 1; i_9 < 12;i_9 += 1)
                        {
                            var_23 &= ((var_5 ? var_2 : (arr_30 [i_7 + 1] [i_9 - 1])));
                            arr_37 [6] [i_3 - 1] [i_2] [i_7 + 1] [i_9] [2] &= ((!(((var_6 ? 121 : -8776090940822977275)))));
                            var_24 = (arr_5 [i_6] [i_7]);
                            var_25 = var_8;
                        }
                        var_26 = ((-127 - 1) ? var_3 : (arr_24 [i_2 - 2] [i_2] [i_2] [i_6]));
                    }
                    for (int i_10 = 1; i_10 < 11;i_10 += 1) /* same iter space */
                    {

                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            var_27 = ((min((arr_31 [i_6] [i_10] [6] [6] [7] [9]), (arr_9 [6]))));
                            var_28 = ((((((max(var_7, var_3))) ? -40 : (9223372036854775807 / 127)))) ? (((max(64, -107)))) : (max(var_2, var_7)));
                            var_29 = (max(var_29, (arr_40 [i_2] [i_2 + 1] [i_3 - 1])));
                        }
                        arr_42 [i_2 + 1] [10] [i_6] [i_6] [i_2] [i_10 + 1] &= ((!(arr_41 [2] [2] [i_2] [2] [8])));
                        arr_43 [i_6] [i_6] [i_3] [i_6] = 65518;
                        var_30 = ((((max(0, (~var_5)))) ? -65 : -107));
                        arr_44 [6] [i_2] [6] [0] |= ((var_2 / ((-92 ? var_0 : (arr_27 [0] [i_2] [6])))));
                    }
                    arr_45 [i_2] [i_2] [i_6] |= ((((arr_17 [i_2] [i_3 - 1] [i_2 + 2]) / (arr_35 [2] [i_3] [i_3 - 1] [i_2] [i_6]))));
                }
            }
        }
    }
    var_31 = min(var_9, var_1);
    var_32 = var_9;
    var_33 ^= var_0;
    #pragma endscop
}
