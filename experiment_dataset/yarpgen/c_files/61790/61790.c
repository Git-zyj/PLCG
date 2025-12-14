/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_11 = (min(7036882466734328799, ((var_1 ? var_2 : 119))));
                    var_12 = (min(var_12, (((11701491838987609867 ? 6745252234721941745 : 4953747606559931027)))));
                }
            }
        }
    }
    var_13 = (max(var_13, var_2));
    var_14 = var_1;
    var_15 = ((var_5 ? (var_2 ^ var_0) : var_6));
    #pragma endscop
}
