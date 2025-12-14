/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (((!(arr_0 [i_0] [i_1]))))));
                var_22 -= ((100 >= var_18) >> (((var_15 > (arr_0 [i_0] [i_0])))));
                var_23 = (max(268427264, 52189));
            }
        }
    }
    var_24 = (((!4550) || (((1029175751 ? 31695 : 18408)))));
    #pragma endscop
}
