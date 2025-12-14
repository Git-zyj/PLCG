/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70411
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    arr_6 [i_2] [i_1] [i_0] = ((((max((arr_0 [i_2 - 1] [i_0 - 1]), var_10))) ? ((((arr_0 [i_2 + 1] [i_0 - 1]) && (arr_0 [i_2 - 3] [i_0 + 1])))) : (arr_0 [i_2 - 2] [i_0 - 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_11 = ((((((~var_9) ? (~var_2) : (max(-334681228, (arr_1 [i_0] [0])))))) ? (arr_7 [i_0] [i_2] [i_0] [i_4]) : (((~var_3) ? (arr_5 [i_0 + 1]) : (arr_2 [i_3])))));
                                var_12 = var_0;
                                var_13 = (max(var_13, ((((arr_10 [1] [i_4] [i_4] [i_2 + 1]) | (arr_0 [i_1] [i_3]))))));
                                var_14 = max((!var_8), (((arr_7 [i_0 + 1] [i_0 + 1] [i_1] [i_2 - 2]) ? var_4 : 65535)));
                            }
                        }
                    }
                }
                for (int i_5 = 4; i_5 < 13;i_5 += 1)
                {
                    var_15 = var_10;
                    var_16 = -2772294032998525127;
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        {
                            arr_21 [i_7] [i_6] [i_0 + 1] [i_0 + 1] [i_0] = var_7;
                            var_17 = ((((((38 | 67108848) ? 7947647953537126630 : 9223372036854775807))) ? ((((((arr_11 [i_1] [i_1] [i_6] [i_7]) << (arr_19 [i_7] [i_7] [i_6] [i_6] [i_1] [i_0]))) ^ 0))) : (((arr_5 [i_0 + 1]) ? (arr_18 [i_0 - 1] [i_0 + 1]) : (arr_18 [i_0 + 1] [i_0 + 1])))));
                        }
                    }
                }
                var_18 -= (((max((!-99), 26)) ^ (2772294032998525126 || 0)));
                arr_22 [i_0] [i_1] = (min((max(-1925367293, (arr_16 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1]))), 1));
                var_19 = (max(-4267, 32767));
            }
        }
    }
    var_20 = var_10;
    #pragma endscop
}
