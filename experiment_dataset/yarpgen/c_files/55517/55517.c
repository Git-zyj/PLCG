/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (65535 + 0);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        var_12 = (arr_7 [i_1] [i_3]);

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_13 = (min((arr_13 [i_0] [i_4]), (max((~18446744073709551615), (min((arr_13 [i_0] [12]), (arr_2 [2])))))));
                            var_14 = (min(var_14, (((((((18446744073709551615 << (((arr_2 [i_4]) - 13907)))))) > (((!((!(arr_6 [i_4] [i_1 - 2])))))))))));
                        }

                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            var_15 = (0 ? 18446744073709551602 : 20);
                            var_16 *= arr_4 [i_0] [17] [21];
                        }
                        arr_17 [i_0] [i_1] [8] = max(((var_5 ? (min(511, 2113929216)) : (min(13, 20)))), (((7168 ? 8128 : 3840))));
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_17 = (arr_9 [16] [i_1] [i_2] [21]);
                                var_18 = ((+(min((arr_1 [i_0 + 1]), var_5))));
                            }
                        }
                    }
                    var_19 = (max((arr_6 [i_1] [i_1]), (max(((((arr_21 [i_0 - 1] [i_0 - 1] [i_1] [i_0 - 1] [i_1] [i_1] [5]) > 18446744073709551602))), (4467570830351532032 * 0)))));
                }
            }
        }
    }
    #pragma endscop
}
