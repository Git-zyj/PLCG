/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_12;
    var_14 = (((var_2 | 32744) % var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] = (((((~((255 ? -47 : 56))))) ? (arr_3 [i_1 + 1]) : (arr_2 [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] = (min(((1 ? ((((arr_3 [i_0]) | (arr_1 [i_2])))) : (var_3 / var_11))), (((!(arr_1 [i_0]))))));
                            var_15 = ((-((max(-47, (((980513051 == (arr_8 [i_0] [i_0])))))))));
                        }
                    }
                }
                var_16 = ((((arr_8 [i_1 + 1] [i_1 - 1]) ? (arr_8 [i_1 + 1] [i_1 - 1]) : (arr_8 [i_1 - 1] [i_1 - 1]))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_17 = (((((arr_16 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]) && (arr_14 [i_1 + 1] [i_1 + 1]))) ? (min((arr_14 [i_1 + 1] [i_1 + 1]), var_4)) : (((arr_15 [i_4] [i_4]) / (arr_14 [i_1 + 1] [i_1 + 1])))));
                            arr_17 [i_4] [0] [i_4] [i_4] = ((var_2 >> (((~var_6) - 2131811999))));
                            var_18 |= ((!((((((var_10 ? (arr_5 [i_0]) : 0))) ? ((75 ? (arr_8 [i_1] [i_1]) : 18446744073709551608)) : (!var_6))))));
                            arr_18 [i_0] [i_4] [i_4] [i_5] = (((arr_3 [i_1 - 1]) | (((max((arr_3 [i_1 - 1]), (arr_3 [i_1 - 1])))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
