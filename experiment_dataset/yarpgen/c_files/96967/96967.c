/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 -= (max(((864612715 ? 66 : 29)), var_6));
                arr_4 [i_0] = (((max((((!(arr_1 [i_0]))), 110)))));
                var_16 = ((+(((arr_0 [i_0]) % 10150471519784803085))));
                var_17 = ((((max(((max(8, 0))), (arr_1 [i_0])))) ? (arr_1 [i_0]) : (max((((arr_0 [i_0]) ? (arr_1 [i_0]) : var_9)), ((27 ? -30 : 0))))));
            }
        }
    }
    var_18 = (var_0 | 0);
    var_19 = (max(var_19, var_7));
    var_20 |= var_3;
    #pragma endscop
}
