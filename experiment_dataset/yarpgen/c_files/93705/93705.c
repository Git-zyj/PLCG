/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 = var_0;
                                var_19 = var_13;
                                arr_13 [i_0 + 2] [i_1] [i_2] [i_0] [i_4] [i_2] = max((((arr_6 [1] [1] [i_2] [1]) ? (arr_11 [i_0]) : (min((arr_5 [i_2] [i_3 - 2] [i_0]), var_10)))), (!-40));
                                var_20 = (min(((-370 ? var_11 : ((4294967295 ^ (arr_8 [i_0] [i_2] [i_3 + 1]))))), var_13));
                                var_21 = ((((((~var_14) / (248 > 20)))) ? (((-(arr_8 [i_1] [i_2] [i_4])))) : (((var_9 ? var_16 : 16)))));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] [i_1] = (((((((min(-16, (arr_1 [i_0] [i_1]))) + 2147483647)) << (var_1 - 3650759370590092152))) >> (min(((19048 ? 12 : 1822842754)), ((max(1, (arr_3 [i_1]))))))));
                var_22 = var_6;
            }
        }
    }
    var_23 = (~-7);
    var_24 = 22;
    #pragma endscop
}
