/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= ((var_8 * ((((min(var_8, 3264272935))) ? 104 : var_4))));
    var_14 = (max(var_14, ((((((~(!var_9)))) ? (((((var_5 ? 65535 : 57))) ? (!var_9) : (!17332460399001852431))) : ((119 ? ((0 ? 49199 : 16346)) : 49187)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (max(((((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : 1))) ? (max(16346, (arr_2 [i_0]))) : 49212)), var_6));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] = (((((~(arr_7 [i_2] [i_2] [i_1] [i_0])))) ? ((max(49199, var_4))) : ((var_2 ? (arr_7 [i_0] [i_1] [i_1] [i_2]) : (arr_7 [i_2] [i_2] [i_0] [i_0])))));

                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        var_16 = (((~6) ? var_11 : var_9));
                        var_17 = ((((max(5, (arr_13 [i_0] [i_0] [i_0] [i_1] [i_2] [i_3])))) ? -10340 : var_11));
                    }

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        var_18 &= ((var_11 >> (((arr_15 [i_0] [i_1]) - 2484821192))));
                        var_19 = ((var_9 ? (arr_6 [i_0] [i_2] [i_4 + 1]) : (arr_5 [i_4 + 2] [i_4 - 1])));
                    }
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        var_20 = 1957191812;
                        var_21 = (arr_3 [i_0]);
                    }
                }
            }
        }
        arr_19 [i_0] = (i_0 % 2 == zero) ? (((((((((~var_2) + 2147483647)) >> ((((0 ? (arr_14 [i_0] [14] [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_0]))) - 29899467))))) ^ (((max((arr_11 [i_0] [i_0] [i_0]), 2337775483)) >> 0))))) : (((((((((~var_2) + 2147483647)) >> ((((((0 ? (arr_14 [i_0] [14] [i_0] [i_0]) : (arr_11 [i_0] [i_0] [i_0]))) - 29899467)) - 1011565763))))) ^ (((max((arr_11 [i_0] [i_0] [i_0]), 2337775483)) >> 0)))));
        var_22 = 1;
    }
    #pragma endscop
}
