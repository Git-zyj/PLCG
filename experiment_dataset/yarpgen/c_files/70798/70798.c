/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_10 >= var_7);
    var_16 = (max(252, 507904));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_1] [1] [i_1] = (((arr_5 [i_1] [i_1] [i_2]) ? ((150 ? (arr_3 [i_0] [i_0] [i_1 - 4]) : ((13842378932094296506 ? 255 : -2267005232468230226)))) : 0));
                    var_17 = ((-((-(((arr_2 [i_2]) ? var_8 : (arr_3 [i_0] [i_0] [10])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_1] [i_1] = var_5;
                                arr_17 [i_1] [6] [i_2] [i_1 - 1] [i_1] = ((-((min((arr_13 [i_1] [i_1] [i_1 + 3] [i_1 + 4]), (arr_13 [i_0] [i_1] [i_1 - 4] [i_1 - 2]))))));
                                var_18 = (min(var_18, (((277 >= ((~(arr_1 [i_0] [i_1 + 3]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
