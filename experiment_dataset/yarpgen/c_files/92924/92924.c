/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = -1920300887776923463;
                    var_12 = (((((+((min((arr_4 [i_0] [i_0] [i_2]), var_5)))))) ? var_2 : (((arr_5 [i_1] [i_1] [1]) ? (arr_1 [i_2]) : (arr_5 [i_1] [i_1] [i_0])))));
                    var_13 *= ((~(max((arr_6 [i_1] [i_1] [i_2]), (arr_6 [i_1] [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] = min((arr_3 [i_0] [i_1]), ((((arr_11 [1] [i_2] [i_2] [i_2]) ? (arr_11 [i_0] [i_2] [i_3] [i_4]) : -126))));
                                var_14 = ((max(((var_1 - (arr_7 [i_0] [i_2]))), 6246)));
                                var_15 |= ((!((min((arr_2 [i_1]), -74)))));
                                arr_14 [i_1] [i_2] [i_2] = ((135 & ((((5704172748266158037 ? var_1 : -90)) + (max((arr_0 [i_4]), (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                            }
                        }
                    }
                    var_16 = 74;
                }
            }
        }
    }
    var_17 = var_6;
    #pragma endscop
}
