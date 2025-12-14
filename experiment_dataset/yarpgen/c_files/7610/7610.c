/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_2;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 ^= (max(((min((((235 || (arr_4 [i_0] [i_0] [9] [i_0])))), 0))), (max((arr_4 [i_0] [i_1] [i_0] [i_1]), (((var_0 ^ (arr_0 [11]))))))));
                    arr_7 [i_0] [i_0] [i_0] = var_4;
                    var_16 = 2147483647;
                }
            }
        }
    }
    var_17 = (min(var_17, (!var_3)));
    var_18 = (min(((var_0 ? -235 : 4294967295)), (min(((max(127, (-32767 - 1)))), var_1))));
    #pragma endscop
}
