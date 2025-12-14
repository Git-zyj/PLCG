/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -1693513691157703869;
    var_15 = (max(1, 1));
    var_16 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] [i_1] = (((1 ? 1 : 9779390339613886567)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_0] &= (arr_4 [i_3]);
                            var_17 = ((((arr_12 [i_1 + 2] [i_1] [i_1 + 2] [i_1 + 3] [i_3 + 1] [i_3 + 1]) ? ((var_7 ? (arr_7 [i_1] [i_0]) : (arr_9 [i_0] [i_1] [i_2] [i_3 + 1]))) : -1)) | (max(((((arr_6 [i_0] [i_2] [i_0]) + (arr_12 [i_1] [i_1] [i_2] [i_2] [i_0] [i_1])))), var_13)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
