/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_15 = (arr_7 [i_0] [i_1] [i_2] [i_2]);
                    arr_8 [i_1] [0] [2] = -1883322389;
                    arr_9 [i_1] = ((((!(arr_1 [i_0] [i_1 - 1]))) ? (((12335072362770715645 + var_14) ? ((min(25, var_4))) : ((min(var_2, var_10))))) : ((min((arr_1 [i_1 - 1] [i_1 - 2]), var_13)))));
                }
            }
        }
    }
    var_16 = (191 ? var_3 : var_13);
    #pragma endscop
}
