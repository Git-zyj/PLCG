/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62591
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = -860551949653161462;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = (max((max(1463145930, 4294967292)), -1463145930));
                arr_8 [i_1] &= ((((min((((-(arr_0 [i_0])))), var_10))) ? ((0 ? (arr_2 [i_0]) : (1254737753 || 4294967288))) : ((~((max(127, 203)))))));
                arr_9 [i_1] = ((!((min(((4 ? (arr_2 [i_0]) : 576458553280167936)), var_0)))));
                var_13 = (min(var_13, var_1));
                var_14 *= ((1463145930 >= (!var_9)));
            }
        }
    }
    var_15 ^= (min((((max(var_2, var_9)))), var_10));
    #pragma endscop
}
