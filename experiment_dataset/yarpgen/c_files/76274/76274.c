/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0 + 3] = ((+(((arr_3 [i_0] [i_1 - 4]) ? var_7 : (arr_1 [i_0] [i_1 + 1])))));
                arr_5 [18] [i_1] = (max(((min(1, 159))), 97));
            }
        }
    }
    #pragma endscop
}
