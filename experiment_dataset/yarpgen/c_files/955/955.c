/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/955
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((~80) ? ((max(-64, var_7))) : ((min(0, var_10))))) + ((var_13 ? ((max(-123, 112))) : var_6))));
    var_15 = (min(var_15, var_7));
    var_16 &= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [5] = -1;
                    arr_7 [i_0] [i_0] [i_0] = ((!(((((-123 && (arr_1 [i_0]))) ? ((min(63, var_4))) : (((-64 < (arr_4 [i_0] [i_0] [i_2] [i_2])))))))));
                }
            }
        }
    }
    #pragma endscop
}
