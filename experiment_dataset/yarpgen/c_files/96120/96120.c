/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 15;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (((((-var_10 ? (arr_2 [i_0] [i_0]) : var_5))) ? ((min((arr_1 [i_0]), -20114))) : var_2));
                arr_6 [i_0] [i_0] [i_1] = (97 || var_4);
            }
        }
    }
    #pragma endscop
}
