/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((78 ? ((var_5 ? ((48997 ? 16549 : var_6)) : (!var_9))) : var_7));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((min((((arr_4 [i_0] [i_1] [i_2]) ^ (arr_0 [4]))), ((min(1299634332, 206))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [16] [i_0] = ((119 ? 119 : 0));
                                arr_15 [i_4] [i_3] [i_2] [i_1] [i_0] = (arr_4 [i_1] [i_2] [i_3]);
                                var_13 = (max(var_13, -123));
                                arr_16 [i_3] [i_1] [i_2] [i_3] [i_4] [i_0] [i_1] = ((-1232933539 - ((((arr_6 [i_1] [i_1] [i_2]) < (arr_6 [i_0] [i_2] [i_3]))))));
                                var_14 += 119;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
