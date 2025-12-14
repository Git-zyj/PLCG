/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_16 [i_0 - 2] [i_1] [i_0 - 2] [i_3] [i_0] = 32767;
                                var_11 = (max(var_11, (arr_10 [i_3] [i_4 + 1] [i_4] [i_4 + 1])));
                            }
                        }
                    }
                    var_12 -= (max(-2, 16));
                    arr_17 [i_0] = (min((min((arr_0 [i_0 + 2]), (min((arr_9 [i_0] [1] [i_2] [8]), (arr_12 [i_0] [i_1] [i_2] [i_1] [i_0 - 1]))))), (arr_1 [i_0])));
                    arr_18 [i_0] = ((~(min((arr_13 [i_0 - 1]), (arr_13 [i_0 - 3])))));
                    var_13 = 32767;
                }
            }
        }
    }
    var_14 = (max(var_14, var_4));
    var_15 -= var_6;
    var_16 = (max(var_16, var_10));
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {

                    for (int i_8 = 1; i_8 < 12;i_8 += 1)
                    {
                        var_17 = (max(((min(0, 1))), (arr_9 [i_5] [i_8 + 2] [i_8] [20])));
                        var_18 = (max(var_18, ((max(((((0 ? 12152032920404837235 : (arr_24 [3] [i_6]))))), (arr_11 [19] [i_6 - 1] [i_5]))))));
                    }
                    var_19 = arr_9 [i_6 - 1] [i_6] [i_6] [18];
                }
            }
        }
    }
    #pragma endscop
}
