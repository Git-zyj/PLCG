/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= 1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 &= (arr_5 [i_0 + 1] [i_0 - 1] [i_1] [i_0 - 1]);
                    arr_6 [i_2] [8] = 47;
                    arr_7 [i_0] [i_2] [i_2] = (min(var_2, 215));
                }
            }
        }
    }
    var_20 = (min(var_20, -var_7));
    var_21 = (!var_6);
    var_22 = (max(var_22, var_14));
    #pragma endscop
}
