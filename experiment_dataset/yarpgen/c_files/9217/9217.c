/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9217
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_18;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 = (max(var_21, ((min((max(-91, var_7)), (min((max(90, 0)), var_11)))))));
        var_22 += (min(var_7, (1 / 4095)));
        var_23 ^= min(2095624706, 4104);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            {
                var_24 = (max(var_24, ((min(1, var_9)))));
                arr_6 [i_1] [i_2] = max((61553 * var_11), (min((var_4 / 59), (1 / -1156491106))));
                arr_7 [i_2] = (min((var_15 > var_7), (min(1, 2435318661))));
            }
        }
    }
    #pragma endscop
}
