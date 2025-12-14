/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96632
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((16 | var_2) & (19662 & var_4))), var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    var_14 = ((((var_12 ? 195 : 183))) & (arr_2 [i_1]));
                    arr_8 [i_1] [i_1] = ((!(((((arr_0 [16] [i_1]) | (arr_0 [i_0] [i_2]))) >= 23989))));
                }
                var_15 = (arr_2 [i_1]);
                var_16 = (max((min(var_7, (max(var_7, (arr_2 [i_1]))))), ((-(max(var_1, (arr_2 [i_1])))))));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] = (((min((max(3460604925, 107)), 45873))) || (~var_5));
                            var_17 = ((!(((var_3 | (((~(arr_9 [i_4] [i_0] [i_1 + 1] [i_0])))))))));
                            arr_14 [17] [i_1] [i_3] [i_1] [i_3] [i_1] = (((min(195, (-1260141151 | 20632)))) ? (arr_12 [i_0] [i_1] [i_3] [i_4]) : 29106);
                        }
                    }
                }
                arr_15 [9] [i_1] = 28359;
            }
        }
    }
    var_18 = ((~(((((var_4 ? -1016209016 : var_0)) > (((1 ? 0 : 3101633777))))))));
    #pragma endscop
}
