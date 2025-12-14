/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = (((6174159676853185912 ? (arr_0 [i_0]) : (0 / 6174159676853185912))));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = (min((min((arr_7 [i_2] [i_2 - 4] [i_2] [i_0]), ((-6174159676853185933 ? 121 : (arr_13 [i_0] [i_0] [i_2] [i_3] [i_4 + 1]))))), -678415071));
                                arr_16 [i_0] [i_3] [i_1] [i_1] [i_0] = ((+(((max((arr_9 [i_0] [i_0] [i_0]), (arr_12 [i_0] [i_1] [i_0] [i_3 - 1] [i_4 - 3])))))));
                                arr_17 [i_0] [i_1] = 15271015947582073935;
                            }
                        }
                    }
                }
            }
        }
    }
    var_13 = (max(var_13, (((~((var_0 ? var_6 : ((var_1 ? -18441 : 29)))))))));
    var_14 = var_0;
    #pragma endscop
}
