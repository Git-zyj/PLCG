/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = -7965930402608007252;

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    var_17 = (arr_7 [i_0 - 1] [i_2]);
                    var_18 = (min(var_18, (((~(!var_5))))));
                    var_19 = var_12;
                }
                var_20 = (arr_8 [i_0 - 1]);
            }
        }
    }
    var_21 = (~1629634792);
    var_22 += (~0);
    #pragma endscop
}
