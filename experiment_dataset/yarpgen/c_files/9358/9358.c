/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_7 % var_4) ? ((((25928 == ((var_1 ? var_8 : var_6)))))) : var_6));
    var_11 -= var_2;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_12 = (((((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0 + 1] [i_0]) : 33554400))) ? 39129 : (max(var_6, var_5))))) ? ((min((((-32767 - 1) ? var_3 : var_7)), var_9))) : ((-(((arr_1 [i_0] [i_0]) ? -4909 : 18178173859531854673))))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        var_13 = (max((arr_3 [i_0] [i_0] [i_0]), ((min(((((arr_5 [i_3]) ? (arr_4 [i_3 + 1] [i_0] [i_0]) : 13))), (((arr_3 [i_0] [i_3] [i_2]) ? var_9 : (arr_2 [i_0] [i_0]))))))));
                        var_14 *= (arr_10 [i_1]);
                    }
                }
            }
            var_15 = var_4;
            var_16 = (((min((((257604954 == (-32767 - 1)))), -32753))) ? var_9 : ((var_1 ? ((min((arr_8 [i_0] [i_0] [i_0 + 1] [i_0]), 5))) : (-32767 - 1))));
            var_17 = (max(var_17, ((((!1190311776) ? (255 % var_3) : var_0)))));
            var_18 ^= 0;
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_19 = (min((arr_16 [i_0] [i_4] [i_0] [14]), ((((min((arr_8 [i_5] [i_5] [i_5] [i_5]), (arr_1 [i_4] [i_7 - 2])))) ? (((arr_8 [i_0] [i_0] [10] [i_0]) % (arr_21 [i_0] [19] [19] [i_4 + 1] [i_7] [1]))) : var_7))));
                                var_20 = (((min((max(65533, (arr_16 [i_7] [i_5] [i_4 + 1] [i_0 + 1]))), (arr_9 [i_0] [i_7 - 1])))) ? (arr_9 [i_0] [i_0]) : ((~(arr_10 [i_6]))));
                                var_21 = (var_6 ? (((((min(12861934495519042779, 16)) == ((min(var_7, (arr_23 [i_0] [i_6] [i_0] [i_0] [i_0] [i_0] [i_0 + 2])))))))) : (min((arr_1 [i_6 + 1] [12]), var_8)));
                                arr_24 [i_6] [i_0] [i_4] [i_5] [i_6] [i_6] [i_7 + 1] = (max((((-32767 - 1) % (1206674941 % 976330549459088846))), ((max(var_1, var_8)))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 1; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 18;i_9 += 1)
                        {
                            {
                                var_22 = (min(var_22, ((min(2851142347, (min(32767, 1443824949)))))));
                                var_23 = (6 ? var_8 : ((((((((arr_27 [i_0] [i_4] [9] [i_8]) == (arr_18 [i_5] [i_4] [i_4]))))) == var_6))));
                                var_24 = ((((max((min(1274537830, (arr_2 [i_0] [i_5]))), (((arr_23 [i_0] [i_5] [i_0] [i_0] [i_0] [i_0] [i_0]) ^ 1443824949))))) ? (arr_6 [i_0] [i_0] [i_5] [i_4]) : (((var_7 ? (arr_21 [i_0 - 1] [i_0 - 1] [i_4 + 1] [i_0 - 1] [i_0 - 1] [i_8 - 1]) : var_2)))));
                                arr_29 [i_0] [i_4] [i_5] [i_8] [i_9] [i_9] = (((-32767 - 1) ? (min(18446744073709551599, var_5)) : -27));
                            }
                        }
                    }
                    arr_30 [i_0] [4] [i_5] = min(var_1, ((((!(arr_22 [i_5] [i_4] [i_4] [i_5]))) ? var_9 : (max((arr_7 [i_0] [i_0] [7] [i_5]), 65518)))));
                    var_25 ^= var_3;
                }
            }
        }
    }
    for (int i_10 = 1; i_10 < 19;i_10 += 1)
    {

        for (int i_11 = 3; i_11 < 20;i_11 += 1)
        {
            var_26 = (-2147483647 - 1);
            /* LoopNest 3 */
            for (int i_12 = 1; i_12 < 20;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 21;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 21;i_14 += 1)
                    {
                        {
                            arr_45 [i_10] [i_10] [i_10] [i_13] [i_14] [14] [i_14] = ((((arr_40 [i_10] [i_10 - 1] [i_12] [i_12 - 1]) ? var_0 : var_4)));
                            var_27 ^= var_4;
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_15 = 0; i_15 < 21;i_15 += 1)
            {
                for (int i_16 = 0; i_16 < 21;i_16 += 1)
                {
                    {
                        var_28 = 2147483647;
                        arr_53 [i_10] = 13946;
                        var_29 = (max(var_29, ((min(((((arr_38 [i_10] [i_11] [i_11 - 1] [17]) == (arr_38 [i_10] [i_11] [i_11 - 2] [i_16])))), (min(var_2, 4131093842)))))));
                    }
                }
            }
        }
        var_30 *= (arr_31 [i_10]);
        var_31 = -1;
        var_32 -= (((var_9 | var_8) ? (min((arr_52 [i_10] [i_10 + 2] [i_10] [i_10 - 1] [i_10 - 1]), (arr_52 [i_10] [i_10] [20] [6] [3]))) : 4235025956));
    }
    var_33 = var_2;
    #pragma endscop
}
