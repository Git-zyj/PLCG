/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (~var_6);
    var_11 = (((((var_7 ? (var_2 >= var_3) : var_2))) ? (89 & 31302) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_12 ^= var_4;
                var_13 = (max(var_13, (((+(((((((arr_4 [i_0 - 1] [i_1] [i_1]) ? var_5 : var_9))) || var_7))))))));
            }
        }
    }
    #pragma endscop
}
