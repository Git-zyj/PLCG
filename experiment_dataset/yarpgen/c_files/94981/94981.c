/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((arr_0 [18]) ? ((((18 % 65532) > ((max(18, var_14)))))) : (!var_13));
                    var_19 = -19;
                    var_20 = arr_0 [i_1];
                }
            }
        }
    }
    var_21 -= -var_18;
    var_22 = (~var_5);
    var_23 = (max(((-(~var_0))), (var_9 / var_17)));
    #pragma endscop
}
