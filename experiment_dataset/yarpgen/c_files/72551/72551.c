/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (4294967295 != 122);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = (((((min(var_2, (arr_0 [i_0]))) ? (min(var_6, var_6)) : (arr_0 [i_0])))));
        var_15 &= ((!((((-1059025323 + 2147483647) << (31 - 31))))));
        arr_3 [i_0] = 1059025323;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [i_1] [i_1] [i_2] = (max(((min((max((arr_5 [i_1]), 32767)), (min((arr_1 [i_1]), var_11))))), (-739685608 / var_5)));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_16 = (max(var_16, (((1059025323 ? -4118792113127626512 : 11244)))));
                        arr_16 [i_1] [i_2] [i_3] [i_4] = ((((max(1059025322, (arr_5 [i_2])))) ? ((0 ? -24704 : (arr_5 [i_2]))) : (!var_9)));
                        var_17 = max(0, 32767);
                        var_18 = (max(var_18, ((max((((1059025322 || (!127)))), (-32767 - 1))))));
                        var_19 = (min(((min(((((-9223372036854775807 - 1) ? 1 : 23))), (-8705292996298963621 + 9223372036854775807)))), ((~(min(var_5, 18446744073709551615))))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 10;i_8 += 1)
                        {
                            {
                                arr_25 [i_1] [i_1] [1] &= (((((min((arr_14 [i_8 - 1] [i_8 + 1] [i_8] [i_8 + 1] [i_8 + 1]), var_11)))) + (((4118792113127626512 + 112) ? (((arr_6 [i_6]) ? var_10 : 0)) : (-2046306942 - var_12)))));
                                arr_26 [5] [i_5] [i_5] [5] = (-(min(5957084592601469978, 562818438)));
                                var_20 = (min(var_20, ((min(((2827066141 ? 0 : 144)), (((((min(1, (arr_1 [i_7])))) || (((var_8 ? 22 : (arr_1 [i_8 + 1]))))))))))));
                                arr_27 [i_1] [i_1] = (0 & 127);
                            }
                        }
                    }
                    var_21 = (min(var_21, (min((5055489685367380926 + 0), (max(var_12, var_10))))));
                }
            }
        }
        arr_28 [i_1] [i_1] = (max(((((min(var_1, (arr_6 [i_1]))) < (((min((arr_4 [i_1]), (arr_13 [i_1] [i_1] [i_1])))))))), (251658240 & var_3)));
    }
    for (int i_9 = 0; i_9 < 11;i_9 += 1)
    {
        arr_31 [i_9] = (max(((min((1068223148 & -1), (!var_9)))), (((((-32767 - 1) == 112)) ? (((arr_5 [i_9]) ? (arr_21 [7] [7] [7] [7] [7]) : var_8)) : ((min(143, (arr_22 [i_9] [i_9] [1] [i_9]))))))));
        var_22 = (((((((min((arr_0 [i_9]), (arr_19 [i_9] [3] [i_9] [i_9])))) ? var_10 : (((var_11 >> (((arr_10 [i_9]) - 34)))))))) ? (min(-9051146867283643982, -1318638699)) : ((((!((((arr_11 [i_9] [i_9] [8] [i_9]) ? (arr_12 [i_9] [i_9] [i_9]) : var_4)))))))));
    }
    #pragma endscop
}
