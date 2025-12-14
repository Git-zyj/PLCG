/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (1 / 1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (92 + 128);
        arr_4 [i_0] = (((arr_2 [i_0] [12]) != (arr_2 [i_0] [i_0])));
        var_12 = ((-(arr_3 [i_0] [i_0])));

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_13 = 1;
            /* LoopNest 3 */
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            arr_17 [i_2] [i_2] [9] [i_3] [0] [i_2] = (~48973);
                            arr_18 [i_2] [i_1] [0] [i_2] [i_3] [i_3] [0] = ((-(arr_14 [i_1] [i_1] [i_1 - 2] [i_2 - 1] [i_2])));
                            arr_19 [i_2] [i_2] [i_2] [i_3] [i_4] = 0;
                        }
                    }
                }
            }
        }
    }
    var_14 = (((((1 ? 1 : 171))) ? 1 : var_0));
    #pragma endscop
}
