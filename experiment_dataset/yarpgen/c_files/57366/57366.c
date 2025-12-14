/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max((!var_3), var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = ((-((((arr_1 [i_1 - 1] [i_0]) != var_8)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_21 = (~((-(~1))));
                            arr_12 [i_0] [i_1 - 1] [i_1 - 1] [i_1] [i_3] = ((~(((!(((var_9 ? (arr_10 [i_0] [i_0]) : (arr_3 [i_0])))))))));
                            var_22 = ((((~((-(arr_5 [i_0] [i_0]))))) == (arr_7 [i_1])));
                        }
                    }
                }
                var_23 = (max(((249 ? -1 : 65535)), (arr_7 [i_1])));
            }
        }
    }
    #pragma endscop
}
