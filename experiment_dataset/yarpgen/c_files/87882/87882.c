/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87882
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_17 *= (-var_15 - (((((24 ? 15453310230416048633 : (-9223372036854775807 - 1)))) ? -9223372036854775806 : (arr_3 [i_0] [11] [i_2]))));
                    var_18 = ((((((arr_4 [i_0]) ? (arr_4 [i_2]) : (arr_4 [i_2])))) / ((9223372036854775806 / (arr_4 [i_2])))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_19 = (~var_7);
                        var_20 = (arr_9 [i_3]);
                        arr_14 [i_0] [i_0] [17] [i_3] = var_14;
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 16;i_4 += 1)
                    {
                        var_21 = -15;
                        var_22 = (arr_15 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_4 + 1] [i_4 - 1]);
                        arr_17 [i_0] [i_0] [i_0] [i_4 + 2] = (((arr_11 [i_0] [i_1 - 1] [i_2] [i_4 + 3]) >= 1863009911));
                        var_23 = (max(var_23, ((~(arr_0 [i_4 - 1] [i_4 - 1])))));
                        arr_18 [i_0] [1] [i_1] [i_2] [i_2] [1] = -22632;
                    }
                }
            }
        }
    }
    #pragma endscop
}
