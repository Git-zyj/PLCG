/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_12 = (i_0 % 2 == zero) ? ((((((1 == (min((arr_1 [i_0]), var_6))))) << (max(1, (arr_0 [i_0] [i_0])))))) : ((((((1 == (min((arr_1 [i_0]), var_6))))) << (((max(1, (arr_0 [i_0] [i_0]))) - 99)))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_4 [i_0] [1] = (arr_1 [i_0 + 1]);
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    {
                        var_13 -= ((~(arr_1 [i_0])));
                        var_14 = ((~(arr_8 [i_0] [i_0] [i_2 + 1] [i_3] [i_0])));

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_13 [i_0 + 1] [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_3] [i_4] = var_4;
                            arr_14 [i_0 + 1] [i_0 + 1] [i_2] [i_3] [1] [i_0] = ((arr_7 [i_2 - 1] [i_3 - 1]) == 1);
                            arr_15 [i_0] [1] [i_2 + 1] [i_3] [i_0] [i_4] [1] = (!-var_0);
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_15 = (arr_0 [i_0] [i_0]);
                            var_16 = (arr_5 [i_0] [i_0] [i_0] [3]);
                            arr_18 [1] [0] [i_0] [i_3 - 1] [11] = 6149770400150904368;
                        }
                    }
                }
            }
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {

            for (int i_7 = 2; i_7 < 22;i_7 += 1)
            {
                var_17 -= ((~(arr_21 [i_0 + 1] [i_0 + 1] [i_7 + 2] [i_7 + 3])));
                arr_24 [i_0] [i_0] [i_0] [i_0] = 1;
                var_18 &= (max(((((arr_7 [i_0 + 1] [21]) % (arr_8 [i_0 + 1] [i_7 - 2] [i_7] [i_7 + 1] [i_7])))), (max((arr_7 [i_0 + 1] [i_0 + 1]), 5017180636871517044))));
                arr_25 [i_0] [i_0 + 1] [i_0] [i_7 + 1] = (min((max((arr_12 [i_7 + 2] [i_0 + 1] [i_0 + 1] [i_0 + 1]), ((-(arr_20 [i_0] [i_6] [i_7]))))), (((((20 ? 0 : (arr_12 [i_0] [i_6] [i_6] [i_0])))) ? var_7 : (arr_7 [24] [8])))));
            }
            var_19 = -var_2;
        }
    }
    var_20 = (~var_2);
    #pragma endscop
}
