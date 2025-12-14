/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((var_9 ? var_2 : var_5))) ? (230 || var_3) : (!var_9))) ^ ((min(var_3, 14772)))));

    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_2 [2] = (((((arr_0 [i_0 + 2]) && 6163966109138460515)) ? (((min((arr_0 [i_0 - 2]), var_9)))) : (min((arr_0 [i_0 + 3]), (arr_1 [i_0 - 1])))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_12 = ((((((var_2 < 14779) > ((max(-126, 53371)))))) == (14757 && -2940957268883028988)));
                            arr_16 [i_0] [i_1] = (((((arr_4 [i_0 - 2] [i_0 - 1]) ? (arr_7 [i_0] [i_0] [i_0]) : (-127 - 1))) / ((((arr_9 [10] [i_4]) || (arr_14 [i_2] [i_1 + 2] [i_0 - 2] [i_2 - 1] [i_4]))))));
                        }
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 22;i_5 += 1)
                        {
                            var_13 = (((!var_2) <= (-6214793870191493849 & var_2)));
                            var_14 = ((((((arr_8 [i_3] [i_3]) + 9223372036854775807)) << (((var_6 + 391810863) - 54)))) & 50778);
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_5] = (arr_7 [i_0] [i_0] [i_0]);
                            arr_20 [i_2] [i_1] [i_5] = (((arr_0 [i_0 - 2]) ? 11881443575807609040 : (((((arr_3 [20] [i_1] [i_2]) < var_4))))));
                        }
                        arr_21 [i_0] [i_0] [i_0] [i_0] = ((-((((min(50778, var_1))) ? (!var_5) : 50795))));
                        var_15 = (min(var_15, 1944));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 24;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [i_1] [i_6] [9] [i_1] = ((((arr_14 [1] [i_1] [15] [16] [13]) ? (!14779) : (arr_8 [i_0 + 2] [i_2 - 1]))));
                                var_16 ^= (min((((arr_22 [i_6 - 1] [i_1] [i_2] [i_6] [22]) | (arr_22 [i_6 - 1] [i_1] [18] [i_6] [i_7]))), (!var_3)));
                                arr_28 [i_2] [i_6] [i_7] = ((~((18446744073709551615 ? var_6 : 52361))));
                                var_17 &= (((arr_26 [i_0] [i_0 - 1] [i_2 - 1] [i_7] [i_7]) ? ((((-2210412888535761798 ? 1308302089 : -71)))) : (min((((4294967295 ? -14686 : 14772))), (((-127 - 1) ? 20181 : var_8))))));
                                var_18 = (min(var_18, ((min(562949416550400, ((((arr_9 [i_6 - 1] [i_2 - 1]) ? (max(124, -496447874)) : (arr_14 [i_7] [i_6 + 1] [i_2 - 1] [i_0 - 1] [i_0])))))))));
                            }
                        }
                    }
                    var_19 = (min(var_19, -766784596));
                }
            }
        }
    }
    #pragma endscop
}
