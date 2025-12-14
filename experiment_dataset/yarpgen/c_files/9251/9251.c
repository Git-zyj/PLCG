/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_10;
    var_13 = (520192 << (520173 - 520151));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 -= var_10;
                arr_7 [i_0] = (((max(1, ((var_1 ? (arr_5 [11] [i_0]) : (arr_2 [i_0] [2])))))) ? (max((arr_0 [i_1]), (arr_3 [i_0]))) : ((~(arr_0 [7]))));
            }
        }
    }
    #pragma endscop
}
