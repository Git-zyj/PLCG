/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, ((max(13864, var_8)))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_14 *= ((~(arr_1 [i_0 + 1])));
            var_15 += 159;
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            arr_10 [i_0] [i_0] = (!1);
            arr_11 [3] [i_0] [i_0] = ((var_0 - ((2181866463 ? 207 : 206))));
        }
        var_16 *= ((((((4527697231408267636 ? 147 : -1035721554044118088)))) ? -4647 : (max(((235 ? 4527697231408267650 : 8388607)), (~var_2)))));
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        var_17 += ((-7625239181692027226 ? 13919046842301283978 : 2025393467341325389));
        arr_14 [i_3] = (185 ? 734715430 : 232);
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 4; i_6 < 17;i_6 += 1)
                {
                    {
                        var_18 = (arr_12 [4]);
                        arr_22 [i_6] [i_5] [i_3] [i_3] [7] [7] = (arr_20 [i_3] [i_3] [i_5] [i_6]);
                    }
                }
            }
        }
    }
    var_19 = var_4;
    #pragma endscop
}
