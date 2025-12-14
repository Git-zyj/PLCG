/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 34085;
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = ((!(((34085 - (min(var_5, (arr_1 [12] [i_0]))))))));

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_2] [i_0 + 2] [i_0 + 2] = (arr_3 [i_0 - 1] [i_0 - 1]);
                    var_18 = 1;
                }
            }
        }
    }
    var_19 = (-23463 == 16789755925501043104);
    #pragma endscop
}
