/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    var_14 = (min(var_14, ((max((max(((var_3 ? var_7 : (arr_7 [i_0] [i_0] [i_1 + 1] [i_0]))), ((max(2565912561, var_8))))), ((((arr_5 [2] [i_1 + 1] [i_2 - 1]) ? (arr_5 [i_0] [i_1 + 1] [i_2 + 2]) : (arr_5 [i_0] [i_1 + 1] [i_1 + 1])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_15 *= (((arr_0 [i_2]) || ((min((!var_0), (max(var_11, (arr_11 [i_0] [i_0] [i_2] [i_3] [i_2]))))))));
                                var_16 = (min((arr_4 [i_0] [i_1] [i_2 + 1]), ((((var_11 == var_1) ? var_10 : ((966807958519448033 ? var_11 : -12147)))))));
                            }
                        }
                    }
                }
                var_17 ^= (((((arr_12 [i_1 + 1] [i_1 + 1]) - 1729054735)) / (arr_12 [i_1 + 1] [i_1 + 1])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_18 = (min(var_18, ((((((23371 ? (var_0 | -2785) : (((arr_12 [i_0] [i_1 + 1]) ? -7089750257252495108 : var_7))))) ? ((((max(var_4, (arr_6 [i_5] [i_1])))))) : -1)))));
                            var_19 = (min(var_2, 1729054735));
                            arr_17 [i_0] [i_1] [i_6] [i_5] [i_6] [i_6] |= ((!((((arr_1 [i_1 + 1]) ? (arr_1 [i_1 + 1]) : (arr_1 [i_1 + 1]))))));
                        }
                    }
                }
            }
        }
    }
    var_20 -= (((max(var_11, var_1))));
    var_21 = 4194303;
    var_22 = ((var_10 + (var_8 - var_8)));
    #pragma endscop
}
