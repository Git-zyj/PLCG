/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (max(((var_2 ? var_7 : var_3)), var_7));
    var_15 ^= 1228229630;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_16 = (max(var_16, (((((((((arr_3 [i_0 - 1] [i_0]) + 9223372036854775807)) >> (((arr_3 [i_0 + 2] [i_0 + 3]) + 5797761236354020982))))) ? var_2 : ((((min(56645, -297952897))))))))));
                    var_17 = ((!((min((arr_5 [16] [i_0 + 1] [i_0] [0]), (arr_4 [i_0] [i_0 + 1]))))));
                    var_18 = -7;
                }
                var_19 = (((((8890 - (!897154428215348560)))) + ((((1228229613 ? -897154428215348561 : 58005)) & (~-12)))));
                var_20 = (((arr_0 [i_0 + 4]) ? ((((((8890 - (arr_5 [i_0 + 2] [i_0] [i_0 - 1] [i_1])))) ? 14 : ((var_1 ? var_5 : 1480309591))))) : ((4145415524 ? (arr_0 [i_0 + 3]) : (arr_3 [i_0 - 2] [i_1])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_21 = (((((((arr_14 [13] [i_4] [i_5] [i_7]) < 13623549337766770413)))) <= (max(var_13, 559232641))));
                                var_22 = (max(var_22, (arr_17 [i_7 + 2] [13] [i_7 + 2] [i_7 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                                var_23 ^= ((var_1 || ((((((~(arr_14 [1] [i_5] [i_4] [i_3])))) ? 897154428215348560 : ((8890 ? -76 : (arr_15 [i_7 + 3] [8] [i_5] [i_3]))))))));
                            }
                        }
                    }
                }
                var_24 -= ((!((min((arr_6 [i_3 - 1] [i_3 - 1]), (arr_6 [i_3 - 1] [i_3 - 1]))))));
                var_25 = (max(var_25, (((!(((~(max(var_7, 2346413211))))))))));
            }
        }
    }
    #pragma endscop
}
