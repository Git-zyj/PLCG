/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(((((var_2 ? var_5 : 0)))), (min(4294967295, ((4294967293 ? var_1 : 3365916332084181923))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = (arr_7 [i_1] [i_2]);
                    arr_9 [i_0] [17] [i_0] = ((((arr_8 [i_0] [i_1] [i_2] [i_2]) ? -121 : (!32767))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_18 |= (min((min((arr_10 [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_1] [i_3 - 1] [i_0]))), (min((arr_17 [8] [i_1] [i_2] [i_3 - 1] [i_4 + 1]), (min((arr_16 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0]), var_8))))));
                                var_19 = ((min((min(1, 4294967293)), ((min(24817, 107))))));
                                arr_18 [i_0] [19] [i_1] [i_0] = (4294967282 > 1);
                            }
                        }
                    }
                    var_20 = ((((min((arr_12 [i_0] [i_1] [i_1] [i_0] [i_2] [i_2]), (arr_6 [4] [i_1] [i_2]))) * (!2))));
                }
            }
        }
    }
    var_21 &= var_4;
    #pragma endscop
}
