/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (((-(~var_0))) == var_11);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_13 += (arr_3 [i_0 + 1] [i_1]);
                                var_14 *= (min(((((max((arr_9 [i_0] [i_0] [i_2] [i_2] [i_3] [17]), (arr_1 [i_0])))) ? (var_0 > 18446744073709551610) : ((((arr_6 [i_0] [i_1] [i_2] [i_4]) && 17179869183))))), (arr_1 [i_0])));
                                var_15 = (((((-17179869183 ? var_9 : (arr_5 [i_0 + 2] [i_4 + 2] [i_4 - 3])))) ? ((((max((arr_0 [i_3]), var_0))) ? (arr_1 [i_0]) : (arr_3 [i_1] [i_1]))) : (((min((arr_7 [i_0] [i_0] [i_4 - 3] [i_0 + 2]), (arr_6 [i_0 + 2] [i_1] [i_2] [i_3])))))));
                                var_16 -= ((((((17179869183 ? 17179869193 : -17179869155)) + ((-17179869212 + (arr_4 [i_0 + 2])))))) ? (min((-53 / 17179869183), ((((arr_4 [5]) <= var_8))))) : ((var_3 ? (((arr_5 [i_0] [i_1] [i_2]) / 17179869190)) : 9223372036854775807)));
                            }
                        }
                    }
                    var_17 = (((((-17179869214 ? 3302324204 : (arr_0 [i_0 - 1])))) ? (((min((arr_5 [i_0 - 1] [i_1] [i_2]), 1)) << (17179869214 > 992643092))) : (((-17179869184 ? var_9 : (arr_9 [i_0] [i_0] [i_0 - 1] [i_0] [2] [2]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_18 = 255;
                    arr_21 [i_5] [i_6] [i_5] [i_5] = (~17179869188);
                }
            }
        }
    }
    #pragma endscop
}
