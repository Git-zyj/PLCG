/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((~(~2383515803))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_11 [12] [3] [0] [i_2] = ((~(arr_1 [i_1] [13])));
                    var_20 &= (min((((((max(var_11, var_14))) > ((max((arr_7 [i_0] [i_1] [i_2] [2]), var_0)))))), (((((26 >> (31913 - 31913)))) ? ((min(108, 31))) : 7396))));
                }
            }
        }
    }
    #pragma endscop
}
