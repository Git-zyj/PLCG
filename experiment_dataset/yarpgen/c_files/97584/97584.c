/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97584
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((!(((5875 ? var_9 : 59660)))))), ((var_4 ? var_8 : var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = ((((((var_9 ^ (arr_0 [i_0])))) ? (min((arr_1 [i_1]), 2483116157318932255)) : -var_9)) != -var_11);
                var_15 *= var_2;
            }
        }
    }
    #pragma endscop
}
