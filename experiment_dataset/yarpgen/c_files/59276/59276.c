/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_17 = (min((max(1, ((~(arr_6 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (~1)));
                            var_18 = (~((1846712169 >> ((1846712194 ? 1 : (arr_4 [i_0] [i_0] [i_1] [i_3]))))));
                            var_19 = (max(var_19, ((max((max(9223372036854775807, (arr_1 [i_3] [i_3]))), (((!(arr_1 [i_2] [i_2])))))))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_20 ^= (((-3064687443046169 + 511212910) ? 1 : (arr_3 [i_4])));

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_21 = (((((arr_2 [i_4] [i_4]) ? 1 : (arr_7 [i_5] [i_4] [i_1] [i_0])))) ? -1846712194 : 1);
                        var_22 ^= (((-846280355 % (arr_7 [i_4] [i_1] [i_4] [i_5]))) | (arr_6 [i_0] [i_1] [i_0] [i_4] [i_4] [i_5]));
                        arr_14 [i_0] [i_4] [18] [i_5] = ((((1 ? (arr_5 [i_5] [i_4]) : -846280339))) ? ((~(arr_0 [i_0]))) : (arr_11 [i_5] [i_1] [i_0]));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_4] [i_4] = ((-(arr_8 [i_0])));
                        arr_20 [i_0] [1] [i_0] [i_4] = (arr_18 [i_4]);
                        var_23 = -268435456;
                        var_24 = (((((arr_3 [i_0]) ? -1620529988 : 1))) ? (arr_11 [i_0] [i_0] [i_6]) : ((-846280355 ? -846280355 : (arr_6 [i_0] [i_1] [1] [i_1] [i_1] [i_1]))));
                    }
                    for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
                    {
                        var_25 = (1620529988 - (arr_2 [i_0] [i_1]));
                        var_26 = 9223372036854775807;
                        var_27 = (((arr_21 [i_0] [i_4]) || 1));
                        arr_23 [i_0] [i_0] [i_1] [i_4] [i_4] [i_4] = (((1 <= 1) ? 1 : ((~(arr_16 [i_0])))));
                    }
                    var_28 = 1846712202;
                    arr_24 [i_4] [i_4] [i_0] = ((((127 / (arr_5 [i_0] [1]))) | (arr_15 [i_4] [i_1] [i_1] [i_0] [i_0] [i_0])));
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 22;i_8 += 1)
                {
                    arr_28 [i_8] = (((arr_17 [i_0] [i_0] [i_8] [i_8]) + 3918054452826255477));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        for (int i_10 = 3; i_10 < 20;i_10 += 1)
                        {
                            {
                                var_29 = (((((1 ? -1620529988 : 0))) ? (arr_15 [i_10 - 1] [i_10] [i_10 - 2] [i_9] [i_8] [i_0]) : 846280356));
                                var_30 = (!(((1 ? 6712795235170220657 : 1572864))));
                                arr_35 [i_0] [i_0] [i_8] [i_9] [i_9] = ((arr_15 [i_8] [i_9] [i_1] [i_10 - 1] [i_10] [i_10 + 1]) ? (arr_15 [i_9] [i_9] [i_9] [i_10 + 2] [i_10] [i_1]) : (arr_15 [i_0] [i_1] [i_8] [i_10 - 1] [i_0] [i_1]));
                            }
                        }
                    }
                    var_31 = ((~(((arr_4 [i_0] [i_1] [i_1] [i_8]) ? 1 : 1))));
                    var_32 = ((-846280365 | 2147483632) || (((1 ? 0 : 7))));
                }
                arr_36 [i_0] = (max(4804929148064369817, ((max(66, 1)))));
            }
        }
    }
    var_33 = (((var_5 ? (max(var_6, 1)) : (((1 ? var_15 : 1))))) != ((((var_5 || (((1 << (32 - 27)))))))));
    #pragma endscop
}
