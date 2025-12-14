/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6549
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((var_4 ? ((((max(454838949, var_6))) ? (var_9 ^ var_7) : (~var_8))) : var_9));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((min(((454838951 ? -1 : 0)), (~-10))))));
                var_12 = ((-(((((1 * (arr_1 [i_0 - 1])))) ? ((var_5 ? var_2 : (arr_3 [i_0]))) : ((((!(arr_0 [i_0 - 1] [i_0])))))))));
                var_13 ^= ((((((arr_1 [i_0 - 1]) != (arr_3 [i_0 - 2])))) / (((arr_0 [i_0 - 2] [i_1]) ? (arr_3 [i_0 + 1]) : (arr_1 [i_0 + 2])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_0 + 2] [i_3 + 4] [i_0] [i_3 + 1] &= arr_8 [i_0 - 1] [i_0 - 1] [i_2] [i_3];
                            var_14 = (arr_5 [i_0] [3] [i_2] [i_3]);
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 4; i_4 < 18;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 18;i_5 += 1)
        {
            {
                arr_16 [i_4 + 1] [i_5 - 1] [6] &= (arr_11 [i_4 - 1]);
                var_15 = (min(var_15, (454838974 - 0)));
                var_16 += (arr_15 [i_4 - 2] [i_5] [i_4]);
            }
        }
    }
    #pragma endscop
}
