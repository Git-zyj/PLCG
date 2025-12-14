/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71707
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= (min((!var_10), ((max(4, 1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((100 && (!5330223267771832333)));
                    var_18 = (((max(var_11, (arr_4 [i_0] [i_1] [i_2]))) < (arr_4 [i_0] [i_1] [i_1])));
                    arr_10 [i_0] = (((var_9 ? var_11 : 14991565180998211482)));
                }
            }
        }
    }
    var_19 = (max(387814910, (((-303232771 / var_15) / ((var_16 ? var_12 : 14963))))));
    var_20 = 0;
    #pragma endscop
}
