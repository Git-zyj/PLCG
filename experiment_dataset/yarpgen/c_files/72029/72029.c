/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_10 ^= (~55593);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_11 = (((!var_5) ? (arr_6 [i_2] [i_1] [i_0]) : (arr_5 [i_1] [i_1])));
                            arr_10 [i_1] [i_2] [i_1] [i_1] [i_1] = var_4;
                        }
                    }
                }

                for (int i_4 = 4; i_4 < 9;i_4 += 1)
                {
                    var_12 = (arr_6 [i_4 + 1] [3] [i_0]);
                    var_13 -= arr_4 [i_4];
                    arr_14 [i_0] [i_1] = 55593;
                    arr_15 [10] [i_0] [i_1] [i_1] |= (arr_2 [i_1]);
                    arr_16 [3] [i_1] [i_4] [i_4] = (((arr_8 [i_0 - 1] [i_0 - 1]) != (arr_2 [i_0 - 1])));
                }
            }
        }
    }
    var_14 = ((var_6 << (var_3 != var_0)));
    var_15 = 9943;
    var_16 = (!var_6);
    #pragma endscop
}
