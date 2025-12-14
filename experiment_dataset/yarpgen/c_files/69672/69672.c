/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_12);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    var_16 = (((arr_7 [i_0] [i_2 + 3] [i_2 - 2] [i_2 - 1]) | (arr_7 [11] [i_2 - 1] [i_2] [i_2 + 3])));
                    arr_9 [i_2] = (arr_4 [i_0]);
                    var_17 = (min(var_17, (~255)));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    arr_12 [18] [i_1] [i_0] [i_0] = (arr_4 [i_0]);
                    var_18 = (min(var_18, (((((var_12 && (arr_11 [i_0] [i_3]))) || ((!(!var_5))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                var_19 = (((1540325567 ? 43210 : -13367)));
                                var_20 = ((!(arr_5 [i_5] [i_3] [17])));
                                arr_20 [i_4] [i_1] [i_4] = (!1340140601);
                            }
                        }
                    }
                }
                var_21 = ((~(max((-9223372036854775807 - 1), var_6))));
            }
        }
    }
    #pragma endscop
}
