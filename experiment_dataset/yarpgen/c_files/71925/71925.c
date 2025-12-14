/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (arr_0 [i_0]);
                    var_15 = (max(var_15, ((((arr_7 [i_2 + 2] [i_2 + 4] [i_2 + 2]) ? (((arr_6 [i_2 + 4] [i_2 - 2] [i_2 + 4]) - (arr_6 [i_2 - 2] [i_2 - 2] [i_2 + 3]))) : (((((arr_7 [i_2 + 4] [i_2 + 1] [i_2]) < (arr_7 [i_2 + 3] [i_2 + 1] [i_2]))))))))));
                }
            }
        }
    }
    var_16 = (min(var_16, var_13));
    #pragma endscop
}
