/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_20 = (max(var_20, ((((((max(var_8, var_7)))) >> ((((3507557182 / (arr_5 [i_0] [i_1] [i_2]))) - 24701095)))))));
                    var_21 = (!57350);
                }
                arr_8 [i_0] [i_1] [i_1] = 3840;
                /* LoopNest 3 */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_17 [i_3] = ((-((-((-(arr_13 [i_3] [i_3] [i_3] [i_5])))))));
                                var_22 = var_0;
                            }
                        }
                    }
                }
                var_23 |= (((arr_9 [i_0] [i_1] [6]) - (((arr_9 [i_0] [i_0] [i_1]) + (arr_9 [8] [8] [i_0])))));
            }
        }
    }
    var_24 = (min(var_24, var_14));
    var_25 = (!var_15);
    #pragma endscop
}
