/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89760
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 4294967295;
    var_17 = ((-var_7 == (min(var_11, var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_18 = var_11;
                    var_19 = (((arr_5 [i_2] [i_1] [i_2]) ? ((min((arr_1 [i_2 + 1]), (arr_4 [i_2 - 1] [i_2 - 1] [i_2])))) : (max(1, 72))));
                    var_20 = 11198;
                    arr_6 [i_2] [i_2] [i_2] [i_0] = (arr_4 [i_0] [i_0] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
