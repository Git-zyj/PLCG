/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~22);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    var_18 = (((min((((arr_2 [i_0 - 2] [i_1] [i_0 - 2]) ? (arr_3 [i_0 + 1]) : 1)), 1)) % ((((var_5 ? (-2147483647 - 1) : 0))))));
                    arr_6 [i_0] [i_0] [i_1] [i_2] = (min((((max((arr_1 [i_1]), (arr_1 [i_1]))) + 255)), (((2147483638 ? ((32767 | (arr_5 [i_0] [5] [4]))) : (~4096))))));
                }
            }
        }
    }
    var_19 = (((((-(min(-4074, 4294967269))))) ? ((((min(var_13, var_2))) ? 4101 : (-2147483647 - 1))) : var_4));
    #pragma endscop
}
