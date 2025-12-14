/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60859
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 = (min(var_18, 342529900));
                                var_19 = (min(var_19, (((((arr_9 [9] [i_1 + 1] [i_0] [i_0]) ? 65535 : 1540391784))))));
                            }
                        }
                    }
                }
                var_20 -= ((((arr_5 [i_0 + 1] [i_0 + 1] [i_1 - 1]) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_1 - 2]) : 1)));

                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_21 *= (((arr_3 [i_1 - 2] [i_0 - 1]) ? 9223372036854775807 : (min((arr_2 [i_0 - 1]), 5622653413846527556))));
                    var_22 = -30632;
                    var_23 *= ((((((-26179 ? 0 : 511)) & 16156))) ? ((((!((max(-15680, var_15))))))) : ((~(((arr_1 [i_0]) ^ (arr_12 [i_5]))))));
                    arr_16 [i_0] [i_0] = ((((((arr_1 [i_0 - 1]) * 0))) && ((max((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1]))))));
                    var_24 = (((((15004 ? 3749959820173326879 : (arr_1 [i_0 + 1])))) ? (max(892691630, 18446744073709551615)) : (((147 ? -2 : var_15)))));
                }
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    var_25 = (((9223372036854775807 < (arr_3 [i_1 + 1] [i_0 + 1]))) ? ((max((arr_3 [i_1 - 3] [i_0 - 1]), (arr_3 [i_1 - 3] [i_0 - 1])))) : ((min((arr_3 [i_1 - 2] [i_0 - 1]), (arr_3 [i_1 - 3] [i_0 + 1])))));
                    var_26 ^= (max((((arr_7 [i_0 - 1] [i_6 - 1] [i_6 - 1]) ? (arr_7 [i_0 + 1] [i_6 - 1] [i_6]) : 1)), ((var_2 ? var_17 : (arr_7 [i_0 + 1] [i_6 - 1] [i_6 - 1])))));
                }
            }
        }
    }
    var_27 = ((65534 ? var_13 : ((var_12 ? var_13 : var_8))));
    var_28 = (((~((28539 ? -92 : -329)))) >= (!22254));
    var_29 = ((max(-var_10, 89)));
    #pragma endscop
}
