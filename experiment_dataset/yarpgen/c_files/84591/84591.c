/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((-(~-76))), ((max((!var_6), (max(-108, var_9)))))));
    var_13 *= (max((max((max(var_7, 123)), 127)), (((!((max(var_8, var_8))))))));
    var_14 = ((-(max(118, ((max(118, -91)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_15 = (max((min((max(var_8, (arr_1 [i_0]))), ((max(-1, (arr_3 [i_1] [16])))))), (((~(min((arr_8 [i_3] [i_1] [i_0] [i_3] [i_2] [i_0]), (arr_7 [8] [i_1] [21]))))))));
                            var_16 = (!(min(((!(arr_6 [i_0] [i_1] [i_0] [i_3]))), (!60726))));
                        }
                    }
                }
                var_17 = (min((((!((max(35217, (arr_2 [i_0]))))))), ((-((-(arr_2 [i_1])))))));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_18 = (max(1, (min((max(-1, 0)), ((min(0, 92)))))));
                            var_19 &= max((!118), (!-1948727184));
                            var_20 = (min(var_20, 122));
                            var_21 = (min(var_21, (((!(!-119))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((~(min(((max(var_5, var_11))), (~var_9)))));
    #pragma endscop
}
