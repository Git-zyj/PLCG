/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_12 = (((((max(var_1, -8))) ? (~var_10) : (((arr_1 [i_2]) ? (arr_8 [i_0] [i_0] [i_3]) : 73)))));
                            arr_10 [i_0] [i_1] [i_3] [i_1] [i_0] = (((255 & 25) ? (arr_7 [i_0] [i_1] [i_2] [i_3 + 2]) : (((arr_5 [i_1 - 2] [i_1 - 2]) & (arr_5 [i_1 - 1] [i_1 + 1])))));
                        }
                    }
                }
                arr_11 [10] [13] = (((arr_3 [i_1 + 1] [i_1]) + (min((((arr_6 [i_0] [i_1 - 1] [i_1]) & (arr_8 [i_0] [4] [4]))), (((-(arr_8 [i_0] [i_0] [i_1]))))))));
            }
        }
    }
    #pragma endscop
}
