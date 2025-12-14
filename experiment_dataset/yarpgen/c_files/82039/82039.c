/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_20 = (4050846566 || 244120732);

                for (int i_2 = 2; i_2 < 19;i_2 += 1)
                {
                    var_21 *= (arr_5 [i_1]);
                    arr_6 [i_0] [i_1] = (((arr_4 [i_0] [i_1] [i_2 - 2]) ? ((min((arr_4 [i_2] [i_1] [i_2 - 2]), (arr_4 [i_1] [i_1] [i_2 - 2])))) : ((min((arr_4 [i_1] [i_1] [i_2 - 2]), (arr_4 [i_0] [i_1] [i_2 - 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] [i_1] [i_1] = (((arr_9 [i_0] [i_0] [i_2] [i_2] [i_4] [i_1]) != (min((((var_10 % (arr_7 [i_0] [i_0] [i_0] [i_4 + 2])))), (~var_15)))));
                                var_22 += ((+(min((arr_9 [i_2] [i_2] [i_2] [i_2] [i_2 + 1] [2]), var_6))));
                                arr_14 [i_1] [i_1] [i_2 + 1] [i_1] [i_1] [0] = ((-(arr_9 [2] [i_1] [i_1] [i_1] [i_1] [i_1])));
                                arr_15 [i_3] [i_1] [13] [i_3] [i_1] [2] = (arr_7 [i_0] [i_2] [i_1] [i_0]);
                            }
                        }
                    }
                    var_23 *= (((arr_7 [i_0] [i_1] [i_1] [0]) % ((max((arr_7 [i_0] [i_0] [i_0] [i_2]), (arr_7 [i_0] [14] [i_2] [16]))))));
                }
                arr_16 [i_1] [i_0] [i_1] = (~65535);
            }
        }
    }
    #pragma endscop
}
