/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((104 ? (((arr_0 [i_0]) + var_11)) : (arr_1 [i_0])));
        var_18 *= (max((((-32767 - 1) | (arr_1 [i_0]))), (((0 != (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_19 = (min(var_19, (((((((1536 ? (arr_4 [i_1]) : 50387)))) ? (arr_3 [i_1] [i_1]) : (-381870943 / 4294965760))))));
        var_20 = (((((arr_4 [i_1]) ? (arr_4 [i_1]) : (arr_4 [i_1]))) != 536870912));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    arr_10 [i_2] [i_2] [i_2] = (((((2157 ? (18446744073709551615 ^ 37982) : 16))) || 991651071583567301));
                    arr_11 [i_1] [i_3] [i_1] = (min(((min((arr_8 [i_3] [i_2] [i_1]), (arr_8 [i_3] [i_2] [i_1])))), (arr_5 [i_3] [i_3] [i_3])));
                    var_21 = ((((((arr_9 [i_3] [i_1] [i_1]) << (var_14 - 57613)))) ? (arr_5 [i_1] [1] [i_3]) : (((arr_6 [i_2] [i_2]) ? (var_7 / 2147483647) : ((9223372036854775799 ? (arr_3 [i_1] [i_1]) : 6053715059260197413))))));
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 23;i_4 += 1)
    {
        var_22 = (min(var_22, 16179));
        var_23 = (min(var_23, (((min((min(1238028282103978599, var_1), 7)))))));
        arr_16 [i_4] = (((max((arr_15 [i_4 + 2]), (arr_12 [i_4 - 1] [i_4 + 2]))) / ((-16179 ? 5692 : (arr_12 [i_4 + 1] [i_4 + 1])))));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            {
                var_24 ^= (((2013265920 ? var_0 : (arr_19 [i_5] [i_6] [i_6]))));
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 12;i_9 += 1)
                        {
                            {
                                var_25 *= ((14336 > ((-var_14 | (arr_20 [i_9 + 1] [i_8])))));
                                var_26 ^= -120;
                            }
                        }
                    }
                }
                var_27 *= ((((max((arr_22 [i_5] [2]), (arr_27 [i_6 - 1] [2] [i_6 - 1] [i_5] [i_6] [i_6])))) || (min((!-28620), (1 < 1)))));
            }
        }
    }
    #pragma endscop
}
