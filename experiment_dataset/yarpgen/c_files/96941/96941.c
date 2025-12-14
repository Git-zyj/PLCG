/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 17;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_1] = (((arr_4 [i_3]) & ((-(arr_9 [i_0] [i_1 + 1] [i_2 + 1])))));
                                arr_13 [i_0] [i_0] [i_1] [i_0] [0] [i_0] [i_0] = (arr_7 [i_0] [i_0] [i_2] [i_3] [i_4 + 1]);
                                arr_14 [i_4] [i_4] [i_1] [i_1] [i_1] [i_0] = ((~((min(65535, -1315586269)))));
                                arr_15 [i_1] = ((-((min((arr_7 [i_0] [i_0] [i_2] [i_3 - 1] [i_3 + 1]), var_2)))));
                            }
                        }
                    }
                    var_18 = ((~(min(((((arr_11 [i_0] [i_1] [i_1] [i_2] [i_2]) == (arr_7 [i_0] [i_0] [i_2 - 3] [1] [i_1])))), var_14))));
                    arr_16 [i_1] = (min(var_6, ((((arr_1 [i_1 - 1]) ? (~var_3) : (min(21660, 693548966)))))));
                }
            }
        }
    }
    var_19 ^= (min((~var_4), var_15));
    var_20 = (~var_7);
    var_21 = var_12;
    var_22 = (~var_6);
    #pragma endscop
}
