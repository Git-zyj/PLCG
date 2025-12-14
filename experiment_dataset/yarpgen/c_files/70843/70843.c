/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = ((((((min(96, (arr_2 [i_1]))) == var_3))) >> (((arr_0 [i_0] [i_1]) - 3843119316))));
                arr_5 [i_0] [i_0] [i_0] = (((arr_3 [i_1]) ^ (min(28533, (arr_3 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [i_1] [i_2] [i_3] = (((arr_10 [i_0]) ? (((var_12 ? var_8 : (arr_10 [i_3])))) : (((arr_9 [i_2] [i_2] [i_3] [i_3 + 1]) ? var_6 : (arr_9 [i_2] [i_1] [i_1] [i_3 - 1])))));
                            var_16 = (-var_5 ? var_2 : (arr_9 [i_2] [i_1] [i_1] [i_1]));
                        }
                    }
                }
            }
        }
    }
    var_17 = ((4611686018427387904 ? 576460477425516544 : 1));
    var_18 = (!var_13);
    var_19 = (((((((576460477425516544 ^ var_8) >= 993472100)))) * (((2707651766 ^ var_9) / -482051352))));
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 16;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            {
                arr_17 [i_4] [i_4] [i_4] = ((((max((((arr_13 [i_5]) / var_10)), (arr_9 [6] [i_5] [i_4 + 3] [i_5])))) ? var_5 : ((56316 ? 41074 : var_8))));
                arr_18 [i_4] [i_5] [i_5] = ((!((min(1, -993472101)))));
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_20 = -2759539396;
                            var_21 -= ((((var_4 ? (arr_9 [i_7] [i_6] [i_7 - 2] [i_7]) : 482051351))) / ((-(~var_10))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
