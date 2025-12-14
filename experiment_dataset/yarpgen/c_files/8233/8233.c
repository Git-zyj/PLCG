/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_10 [i_0] = (min((arr_4 [i_0]), (((max(var_15, var_10)) & (arr_7 [i_1] [i_1] [i_1 - 1] [i_1])))));
                    arr_11 [i_0] = (max(18949428, 1));
                    arr_12 [i_0] [i_0] [i_0] = var_2;
                }
            }
        }
    }
    var_16 += (+-1217732225);
    var_17 = var_5;
    var_18 = var_10;
    var_19 = var_6;
    #pragma endscop
}
