/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 18143;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [1] [i_1] [i_1] = ((((min((arr_3 [i_2 - 1] [i_2 + 3] [i_2 + 4]), var_1))) ? 47393 : (min((min(var_2, (arr_2 [i_0] [i_2 - 1]))), ((((arr_1 [i_2]) + 0)))))));
                    arr_9 [i_1] [i_1] = ((!(!var_8)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] = (((((((((arr_11 [i_1] [i_1] [i_3] [i_3] [20] [i_1]) + var_1))) ? var_10 : -524593321066728427))) ? (arr_10 [i_3] [i_1] [i_2] [i_2 + 1]) : ((min((arr_13 [i_0] [i_0] [i_2] [i_3] [i_4]), (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4]))))));
                                arr_15 [16] [i_2] [i_1] [i_4] = (min(var_0, (min(((var_2 ? 62255 : (arr_2 [i_0] [i_2 + 2]))), (((var_11 << (var_9 - 64357))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
