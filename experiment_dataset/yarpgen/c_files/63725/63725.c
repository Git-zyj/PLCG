/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 127;
    var_17 = ((-(135 > 132)));
    var_18 = var_11;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        arr_2 [0] = (arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [0] [i_1] [i_2] = (arr_3 [i_1]);
                    var_19 = (min(var_19, ((max(-var_3, 26705)))));
                    var_20 = var_9;
                }
            }
        }
    }
    var_21 = (min(var_21, ((((var_0 >= var_8) ? ((-(((var_3 + 9223372036854775807) >> (var_1 + 10482))))) : (!var_6))))));
    #pragma endscop
}
