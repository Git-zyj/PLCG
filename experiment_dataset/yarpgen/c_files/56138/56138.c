/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = ((((var_4 && -599379573) ? (max(var_14, 1568967450)) : ((((677590063 > (arr_0 [i_0] [i_1]))))))));
                var_18 = (((((((!(arr_3 [i_0]))) ? var_0 : var_7))) * ((((arr_4 [i_1] [i_1] [i_1]) ? (arr_0 [i_1] [0]) : var_14)))));
                var_19 = -64;
            }
        }
    }
    var_20 = -56;
    #pragma endscop
}
