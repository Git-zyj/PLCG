/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87808
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = max((arr_0 [i_0]), (min((arr_0 [i_0]), 0)));
        var_19 = (max(var_19, (((((max((arr_1 [i_0]), 2568821592))) / 2568821592)))));
        arr_3 [i_0] &= (((arr_0 [i_0]) ? (((((arr_0 [i_0]) || (((arr_0 [i_0]) == var_15)))))) : (max((((arr_1 [i_0]) ^ 1726145704)), (arr_0 [i_0])))));
        var_20 = (((((9223372036854775807 ? 48 : 2568821591))) | (((arr_0 [1]) ? (~7647801575139621738) : (((9223372036854775807 ? (arr_1 [i_0]) : var_0)))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_21 [i_1] [i_1] [i_1] [i_2 + 2] [i_3] [i_5] [i_5] = ((((max((~var_12), var_11))) ? (((arr_6 [i_2 + 1]) ? (arr_15 [i_2 - 1] [i_2 + 2] [i_2] [i_2 + 2]) : (arr_15 [i_2 - 3] [i_2 - 1] [i_2] [i_2 + 1]))) : (9223372036854775807 != -1029570439)));
                                var_21 -= (2568821585 | -43334);
                            }
                        }
                    }
                    arr_22 [i_2] [i_3] = (((((((22 ? var_10 : 2305843009213693951)) + (arr_8 [i_2 + 2] [i_2 - 3])))) || (((((max(-9074322714888532068, (-2147483647 - 1)))) ? (max(804102840, 22201)) : 1935338101)))));
                    var_22 = (min(var_22, var_2));
                    var_23 = (min(((43326 ? 1 : 59767)), (arr_9 [i_2])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                arr_29 [i_1] [i_3] [i_6] [i_6] = ((max(((var_13 ? var_7 : var_1)), var_2)));
                                arr_30 [i_1] [1] [i_1] [i_3] [4] [i_7] = (arr_23 [17] [i_2 - 4] [i_2 + 1] [i_3] [i_6] [i_7]);
                                arr_31 [i_1] [16] [i_3] [i_3] [0] [i_7] = ((((((((-(-32767 - 1)))) % 16140901064495857665))) ? var_7 : var_4));
                            }
                        }
                    }
                }
            }
        }
        var_24 = ((-(arr_12 [i_1] [i_1] [i_1])));
        var_25 *= (((max(43326, 2568821592)) > (arr_10 [i_1] [1])));
        var_26 *= (max(var_1, 92));
    }
    var_27 = (max((max(var_13, 251)), (!var_5)));
    #pragma endscop
}
