/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((~0), ((var_5 | (max(8388600, 0))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_11 |= ((4286578695 ? ((~(var_1 ^ 6))) : ((255 ? (min(7, 65535)) : (((max(var_6, -1))))))));
                var_12 = (max(var_12, 4294967295));
                var_13 &= ((-(((!(arr_0 [i_0 - 1]))))));
            }
        }
    }
    #pragma endscop
}
