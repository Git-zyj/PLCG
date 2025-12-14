/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!34);
    var_21 = (~var_14);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_22 = (min(var_22, (arr_4 [i_1])));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    arr_8 [i_0] = ((~((~(arr_5 [i_1] [i_2])))));
                    var_23 = (arr_6 [i_1] [i_1] [i_0]);
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    arr_13 [i_0] = (1055491058 || 8058788336992472128);
                    arr_14 [i_0] [i_0] [i_1] [i_0] = (((arr_12 [i_0 - 1]) & (arr_4 [i_0])));
                    var_24 = (~var_9);
                }
                var_25 = (max(var_25, (((var_3 || ((!(arr_6 [i_0] [i_0 + 2] [i_1]))))))));
            }
        }
    }
    var_26 = var_11;
    var_27 = var_13;
    #pragma endscop
}
