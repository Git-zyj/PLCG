/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (-32767 - 1)));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_16 = (446125000522834942 >= 134);
                            var_17 -= -751135963;
                            arr_11 [i_0 - 1] [i_1] [i_2] [i_2] [i_3] = (((var_10 / 65535) * (((~(-32767 - 1))))));
                        }
                    }
                }

                for (int i_4 = 3; i_4 < 11;i_4 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_18 = (min(var_18, -1));
                                arr_20 [1] [1] [i_5] [i_5] [i_5] = 10907;
                                arr_21 [i_5] [i_4] [i_5] = (((65535 ^ 14693144504698618608) | (((10907 ? 159 : 446125000522834942)))));
                                arr_22 [i_5] [i_5] = ((((-32767 - 1) ? 2713682678 : (-32767 - 1))));
                            }
                        }
                    }
                    var_19 -= (arr_15 [8] [8]);
                }
            }
        }
    }
    var_20 = 1;
    #pragma endscop
}
