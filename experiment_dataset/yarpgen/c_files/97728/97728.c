/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97728
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!(!var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = ((-((((arr_4 [i_0] [i_0] [i_1]) + var_6)))));
                arr_6 [i_0] = ((((((min(var_13, 30))) ? (arr_4 [i_1] [i_1] [i_0]) : 2296622958)) == (((((78 ? var_2 : 4))) ? ((46289 ? 46278 : (arr_4 [i_0] [i_0] [i_0]))) : 19237))));
            }
        }
    }
    #pragma endscop
}
