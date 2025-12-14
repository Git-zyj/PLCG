/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_8 [i_2] [i_1 + 1] [i_0] = (((arr_2 [i_1 + 2]) ? ((((((-1 > (arr_3 [i_1])))) <= (!1807273464)))) : ((((!(arr_7 [i_2] [i_2] [i_1] [3]))) ? (arr_1 [i_0]) : 63232))));
                    arr_9 [i_0] = (min((8444249301319680 % -44), ((((arr_1 [11]) / (2 + 1800735343))))));
                    arr_10 [i_2] [14] [i_2] [i_2] = min(49152, var_15);
                }
                /* LoopNest 2 */
                for (int i_3 = 3; i_3 < 14;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_20 = (~var_17);

                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 15;i_5 += 1)
                            {
                                var_21 &= ((((arr_11 [i_0]) & -1800735324)) >> (((~63) + 86)));
                                var_22 = (210 % 65532);
                            }
                            var_23 = ((~(min(((var_15 ? -1154929407 : var_6)), ((((arr_0 [i_3]) && (arr_12 [i_3] [i_1 - 1] [i_0]))))))));
                            arr_18 [i_4] = 1800735343;
                        }
                    }
                }
            }
        }
    }
    var_24 = (var_12 > -10);
    #pragma endscop
}
