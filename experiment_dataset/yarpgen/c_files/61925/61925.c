/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((var_3 / 7464) ? var_5 : ((((min(var_8, var_7))) ? (var_3 && 7484) : (!var_6)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((min(((((arr_0 [i_1]) << ((((382037532 ? -7484 : 683410543)) - 4294959781))))), 3611556743)))));
                    var_14 = ((!(((-(arr_2 [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
