/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66690
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66690 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66690
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = (9 || -660027596419581245);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_10 [8] [i_2] [i_2] [i_2] [i_2] [i_2] = ((min(var_18, var_12)));
                        var_21 = ((((~(max(var_17, (arr_3 [i_0]))))) != (min(-6381854087637106023, (max(var_16, (arr_3 [i_0])))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
